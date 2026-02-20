#include <ni/controller_editor/vcgen_stroke.hpp>
namespace agg {

void vcgen_stroke::add_vertex(double, double, unsigned int) {
uint uVar1;
  int iVar2;
  double dVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  unsigned long uVar7;
  double dVar8;
  double local_20;
  double local_18;
  unsigned long long local_10;
  
  *(unsigned int *)(this + 0x94) = 0;
  if (param_3 == 1) {
    iVar2 = *(int *)(this + 0x48);
    if ((iVar2 == 0) || (*(uint *)(this + 0x48) = iVar2 - 1U, iVar2 - 1U < 2)) goto LAB_10009fbb9;
    uVar1 = iVar2 - 3;
    lVar4 = *(long *)(this + 0x58);
    lVar6 = *(long *)(lVar4 + (unsigned long)(uVar1 >> 6) * 8);
    uVar5 = iVar2 - 2;
  }
  else {
    if (0xd < param_3 - 1) {
      *(uint *)(this + 0x90) = param_3 & 0x40;
      return;
    }
    uVar5 = *(uint *)(this + 0x48);
    if (uVar5 < 2) goto LAB_10009fbb9;
    uVar1 = uVar5 - 2;
    lVar4 = *(long *)(this + 0x58);
    lVar6 = *(long *)(lVar4 + (unsigned long)(uVar1 >> 6) * 8);
    uVar5 = uVar5 - 1;
  }
  uVar7 = (unsigned long)(uVar1 & 0x3f);
  lVar4 = *(long *)(lVar4 + (unsigned long)(uVar5 >> 6) * 8);
  dVar3 = *(double *)(lVar4 + (unsigned long)(uVar5 & 0x3f) * 0x18) - *(double *)(lVar6 + uVar7 * 0x18);
  dVar8 = *(double *)(lVar4 + 8 + (unsigned long)(uVar5 & 0x3f) * 0x18) -
          *(double *)(lVar6 + 8 + uVar7 * 0x18);
  dVar3 = SQRT(dVar8 * dVar8 + dVar3 * dVar3);
  *(unsigned long *)(lVar6 + 0x10 + uVar7 * 0x18) =
       ~-(unsigned long)(1e-14 < dVar3) & 0x42d6bcc41e900000 | (unsigned long)dVar3 & -(unsigned long)(1e-14 < dVar3);
  if (dVar3 <= 1e-14) {
    *(uint *)(this + 0x48) = uVar5;
  }
LAB_10009fbb9:
  local_10 = 0;
  local_20 = param_1;
  local_18 = param_2;
  pod_bvector<agg::vertex_dist,6u>::add
            ((pod_bvector<agg::vertex_dist,6u> *)(this + 0x48),(vertex_dist *)&local_20);
  return;
}

void vcgen_stroke::remove_all() {
*(unsigned int *)(this + 0x48) = 0;
  *(unsigned int *)(this + 0x90) = 0;
  *(unsigned int *)(this + 0x94) = 0;
  return;
}

void vcgen_stroke::rewind(unsigned int) {
unsigned int in_register_0000003c;
  long lVar1;
  
  lVar1 = CONCAT44(in_register_0000003c,param_1);
  if (*(int *)(lVar1 + 0x94) == 0) {
    vertex_sequence<agg::vertex_dist,6u>::close
              ((vertex_sequence<agg::vertex_dist,6u> *)(lVar1 + 0x48),*(int *)(lVar1 + 0x90) != 0);
    shorten_path<agg::vertex_sequence<agg::vertex_dist,6u>>
              ((vertex_sequence *)(lVar1 + 0x48),*(double *)(lVar1 + 0x88),*(uint *)(lVar1 + 0x90));
    if (*(uint *)(lVar1 + 0x48) < 3) {
      *(unsigned int *)(lVar1 + 0x90) = 0;
    }
  }
  *(unsigned int *)(lVar1 + 0x94) = 1;
  *(unsigned int *)(lVar1 + 0x9c) = 0;
  *(unsigned int *)(lVar1 + 0xa0) = 0;
  return;
}

vcgen_stroke::vcgen_stroke() {
*(unsigned long long *)this = 0x3fe0000000000000;
  *(unsigned long long *)(this + 8) = 0x3fe0000000000000;
  *(unsigned long long *)(this + 0x10) = 0x3f40000000000000;
  *(unsigned int *)(this + 0x18) = 1;
  *(unsigned long long *)(this + 0x20) = 0x4010000000000000;
  *(unsigned long long *)(this + 0x28) = 0x3ff028f5c28f5c29;
  *(unsigned long long *)(this + 0x30) = 0x3ff0000000000000;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned int *)(this + 0x40) = 1;
  *(unsigned long long *)(this + 0x60) = 0;
  *(unsigned long long *)(this + 0x58) = 0;
  *(unsigned long long *)(this + 0x50) = 0;
  *(unsigned long long *)(this + 0x48) = 0;
  *(unsigned int *)(this + 0x60) = 0x40;
  *(unsigned int *)(this + 0x68) = 0;
  *(unsigned int *)(this + 0x6c) = 0;
  *(unsigned int *)(this + 0x70) = 0;
  *(unsigned long long *)(this + 0x78) = 0;
  *(unsigned int *)(this + 0x80) = 0x40;
  *(unsigned long long *)(this + 0x9c) = 0;
  *(unsigned long long *)(this + 0x90) = 0;
  *(unsigned long long *)(this + 0x88) = 0;
  
}

void vcgen_stroke::vertex(double*, double*) {
pod_bvector *ppVar1;
  uint uVar2;
  vertex_dist *pvVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  unsigned long uVar9;
  unsigned long uVar10;
  long lVar11;
  unsigned int local_38;
  unsigned int local_34;
  
  ppVar1 = (pod_bvector *)(this + 0x68);
  iVar6 = *(int *)(this + 0x94);
  local_38 = 2;
  local_34 = 0;
switchD_10009fcce_default:
  switch(iVar6) {
  case 0:
    vertex_sequence<agg::vertex_dist,6u>::close
              ((vertex_sequence<agg::vertex_dist,6u> *)(this + 0x48),*(int *)(this + 0x90) != 0);
    shorten_path<agg::vertex_sequence<agg::vertex_dist,6u>>
              ((vertex_sequence *)(this + 0x48),*(double *)(this + 0x88),*(uint *)(this + 0x90));
    uVar7 = *(uint *)(this + 0x48);
    if (uVar7 < 3) {
      *(unsigned int *)(this + 0x90) = 0;
    }
    *(unsigned int *)(this + 0x94) = 1;
    *(unsigned int *)(this + 0x9c) = 0;
    *(unsigned int *)(this + 0xa0) = 0;
    break;
  case 1:
    uVar7 = *(uint *)(this + 0x48);
    break;
  case 2:
    pvVar3 = (vertex_dist *)**(unsigned long long **)(this + 0x58);
    math_stroke<agg::pod_bvector<agg::point_base<double>,6u>>::calc_cap
              ((math_stroke<agg::pod_bvector<agg::point_base<double>,6u>> *)this,ppVar1,pvVar3,
               pvVar3 + 0x18,*(double *)(pvVar3 + 0x10));
    *(unsigned long long *)(this + 0x94) = 0x400000007;
    *(unsigned long long *)(this + 0x9c) = 1;
    iVar6 = 7;
    goto switchD_10009fcce_default;
  case 3:
    uVar7 = *(int *)(this + 0x48) - 1;
    uVar8 = *(int *)(this + 0x48) - 2;
    uVar10 = (unsigned long)(uVar8 & 0x3f);
    lVar5 = *(long *)(*(long *)(this + 0x58) + (unsigned long)(uVar8 >> 6) * 8);
    math_stroke<agg::pod_bvector<agg::point_base<double>,6u>>::calc_cap
              ((math_stroke<agg::pod_bvector<agg::point_base<double>,6u>> *)this,ppVar1,
               (vertex_dist *)
               ((unsigned long)(uVar7 & 0x3f) * 0x18 +
               *(long *)(*(long *)(this + 0x58) + (unsigned long)(uVar7 >> 6) * 8)),
               (vertex_dist *)(lVar5 + uVar10 * 0x18),*(double *)(lVar5 + 0x10 + uVar10 * 0x18));
    *(unsigned long long *)(this + 0x94) = 0x600000007;
    goto LAB_10009fcab;
  case 4:
    uVar7 = *(uint *)(this + 0x48);
    uVar8 = *(uint *)(this + 0x9c);
    if (*(int *)(this + 0x90) == 0) {
      if (uVar7 - 1 <= uVar8) {
        *(unsigned int *)(this + 0x94) = 3;
        iVar6 = 3;
        goto switchD_10009fcce_default;
      }
    }
    else if (uVar7 <= uVar8) {
      *(unsigned long long *)(this + 0x94) = 0x500000008;
      iVar6 = 8;
      goto switchD_10009fcce_default;
    }
    uVar10 = (unsigned long)((uVar8 - 1) + uVar7) % (unsigned long)uVar7;
    uVar9 = (unsigned long)((uint)uVar10 & 0x3f);
    lVar5 = *(long *)(this + 0x58);
    lVar11 = *(long *)(lVar5 + (uVar10 >> 6) * 8);
    lVar4 = *(long *)(lVar5 + (unsigned long)(uVar8 >> 6) * 8);
    uVar10 = (unsigned long)(uVar8 + 1) % (unsigned long)uVar7;
    math_stroke<agg::pod_bvector<agg::point_base<double>,6u>>::calc_join
              ((math_stroke<agg::pod_bvector<agg::point_base<double>,6u>> *)this,ppVar1,
               (vertex_dist *)(lVar11 + uVar9 * 0x18),
               (vertex_dist *)(lVar4 + (unsigned long)(uVar8 & 0x3f) * 0x18),
               (vertex_dist *)
               ((unsigned long)((uint)uVar10 & 0x3f) * 0x18 + *(long *)(lVar5 + (uVar10 >> 6) * 8)),
               *(double *)(lVar11 + 0x10 + uVar9 * 0x18),
               *(double *)(lVar4 + 0x10 + (unsigned long)(uVar8 & 0x3f) * 0x18));
    *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
    goto LAB_10009ffbf;
  case 5:
    *(unsigned int *)(this + 0x94) = 6;
    local_38 = 1;
  case 6:
    uVar7 = *(uint *)(this + 0x9c);
    if ((*(int *)(this + 0x90) == 0) < uVar7) {
      uVar8 = uVar7 - 1;
      *(uint *)(this + 0x9c) = uVar8;
      uVar2 = *(uint *)(this + 0x48);
      lVar5 = *(long *)(this + 0x58);
      lVar11 = *(long *)(lVar5 + (unsigned long)(uVar8 >> 6) * 8);
      uVar10 = (unsigned long)((uVar7 - 2) + uVar2) % (unsigned long)uVar2;
      uVar9 = (unsigned long)((uint)uVar10 & 0x3f);
      lVar4 = *(long *)(lVar5 + (uVar10 >> 6) * 8);
      math_stroke<agg::pod_bvector<agg::point_base<double>,6u>>::calc_join
                ((math_stroke<agg::pod_bvector<agg::point_base<double>,6u>> *)this,ppVar1,
                 (vertex_dist *)
                 ((unsigned long)((uint)((unsigned long)uVar7 % (unsigned long)uVar2) & 0x3f) * 0x18 +
                 *(long *)(lVar5 + ((unsigned long)uVar7 % (unsigned long)uVar2 >> 6) * 8)),
                 (vertex_dist *)(lVar11 + (unsigned long)(uVar8 & 0x3f) * 0x18),
                 (vertex_dist *)(lVar4 + uVar9 * 0x18),
                 *(double *)(lVar11 + 0x10 + (unsigned long)(uVar8 & 0x3f) * 0x18),
                 *(double *)(lVar4 + 0x10 + uVar9 * 0x18));
LAB_10009ffbf:
      *(unsigned int *)(this + 0x98) = *(unsigned int *)(this + 0x94);
      *(unsigned int *)(this + 0x94) = 7;
LAB_10009fcab:
      *(unsigned int *)(this + 0xa0) = 0;
      iVar6 = 7;
    }
    else {
      *(unsigned long long *)(this + 0x94) = 0xa00000009;
      iVar6 = 9;
    }
    goto switchD_10009fcce_default;
  case 7:
    goto switchD_10009fcce_caseD_7;
  case 8:
    goto switchD_10009fcce_caseD_8;
  case 9:
    *(unsigned int *)(this + 0x94) = *(unsigned int *)(this + 0x98);
    return 0x6f;
  case 10:
    goto switchD_10009fcce_caseD_a;
  default:
    goto switchD_10009fcce_default;
  }
  if (uVar7 < (*(int *)(this + 0x90) != 0 | 2)) {
    return 0;
  }
  iVar6 = (uint)(*(int *)(this + 0x90) != 0) * 2 + 2;
  *(int *)(this + 0x94) = iVar6;
  *(unsigned int *)(this + 0x9c) = 0;
  *(unsigned int *)(this + 0xa0) = 0;
  local_38 = 1;
  goto switchD_10009fcce_default;
switchD_10009fcce_caseD_7:
  uVar7 = *(uint *)(this + 0xa0);
  if (uVar7 < *(uint *)(this + 0x68)) {
    *(uint *)(this + 0xa0) = uVar7 + 1;
    lVar5 = *(long *)(*(long *)(this + 0x78) + (unsigned long)(uVar7 >> 6) * 8);
    lVar11 = (unsigned long)(uVar7 & 0x3f) * 0x10;
    *param_1 = *(double *)(lVar5 + lVar11);
    *param_2 = *(double *)(lVar5 + 8 + lVar11);
    return local_38;
  }
  iVar6 = *(int *)(this + 0x98);
  *(int *)(this + 0x94) = iVar6;
  goto switchD_10009fcce_default;
switchD_10009fcce_caseD_8:
  *(unsigned int *)(this + 0x94) = *(unsigned int *)(this + 0x98);
  local_34 = 0x5f;
switchD_10009fcce_caseD_a:
  return local_34;
}
}
