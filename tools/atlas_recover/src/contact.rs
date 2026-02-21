//! Contact-sheet builder: tiles thumbnail PNGs into a single overview image.

use anyhow::Result;
use image::{imageops, RgbaImage};
use std::path::Path;

/// Tile valid PNG files into a single contact-sheet image.
///
/// Args:
///   image_paths: Ordered list of PNG files to tile.
///   out_path:    Destination PNG for the contact sheet.
///   thumb_size:  Cell width and height in pixels (thumbnails are centred in the cell).
///   columns:     Number of columns in the grid.
///
/// Returns:
///   `Ok(())` or an error if saving the sheet fails.
///   Individual images that fail to load are silently skipped.
///
/// Side effects:
///   Writes `out_path` to disk.
pub fn build_contact_sheet(
    image_paths: &[impl AsRef<Path>],
    out_path:    &Path,
    thumb_size:  u32,
    columns:     u32,
) -> Result<()> {
    if image_paths.is_empty() {
        println!("  [skip] no images for contact sheet");
        return Ok(());
    }

    // Load all thumbnails — skip files that fail to decode
    let thumbs: Vec<RgbaImage> = image_paths
        .iter()
        .filter_map(|p| {
            image::open(p.as_ref())
                .ok()
                .map(|img| imageops::resize(
                    &img.into_rgba8(),
                    thumb_size,
                    thumb_size,
                    imageops::FilterType::Triangle,
                ))
        })
        .collect();

    if thumbs.is_empty() {
        println!("  [skip] no loadable images for contact sheet");
        return Ok(());
    }

    let cols   = columns.max(1);
    let rows   = thumbs.len().div_ceil(cols as usize) as u32;
    let sheet_w = thumb_size * cols;
    let sheet_h = thumb_size * rows;

    // Dark background
    let mut sheet = RgbaImage::from_pixel(sheet_w, sheet_h, image::Rgba([30, 30, 30, 255]));

    for (i, thumb) in thumbs.iter().enumerate() {
        let col = (i as u32) % cols;
        let row = (i as u32) / cols;
        let x   = col * thumb_size + (thumb_size.saturating_sub(thumb.width()))  / 2;
        let y   = row * thumb_size + (thumb_size.saturating_sub(thumb.height())) / 2;
        imageops::overlay(&mut sheet, thumb, x as i64, y as i64);
    }

    sheet.save(out_path)?;
    println!("  [contact sheet] {} images → {}", thumbs.len(), out_path.display());
    Ok(())
}

// ── tests ─────────────────────────────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;
    use tempfile::TempDir;

    #[test]
    fn builds_sheet_from_synthetic_pngs() {
        let tmp = TempDir::new().unwrap();

        // Create 3 small RGBA8 PNGs
        let mut paths = Vec::new();
        for i in 0u8..3 {
            let img  = RgbaImage::from_pixel(8, 8, image::Rgba([i * 80, 0, 0, 255]));
            let path = tmp.path().join(format!("tile_{i}.png"));
            img.save(&path).unwrap();
            paths.push(path);
        }

        let out = tmp.path().join("sheet.png");
        build_contact_sheet(&paths, &out, 16, 4).unwrap();

        assert!(out.exists());
        let sheet = image::open(&out).unwrap();
        assert_eq!(sheet.width(),  16 * 4);
        assert_eq!(sheet.height(), 16);  // 3 images in one row (cols=4)
    }

    #[test]
    fn empty_input_is_ok() {
        let tmp = TempDir::new().unwrap();
        let out  = tmp.path().join("sheet.png");
        let paths: Vec<std::path::PathBuf> = vec![];
        build_contact_sheet(&paths, &out, 128, 16).unwrap();
        // No file should be written for empty input
        assert!(!out.exists());
    }
}
