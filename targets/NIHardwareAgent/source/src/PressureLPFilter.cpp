#include <ni/controller_editor/PressureLPFilter.hpp>
namespace NI::NHL2::SERVER {

void PressureLPFilter::processAudio() {
float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  fVar1 = *(float *)(this + 0x8a0);
  fVar45 = *(float *)(this + 0x880);
  fVar32 = *(float *)(this + 0x860);
  fVar33 = *(float *)(this + 0x840);
  fVar36 = *(float *)(this + 0x820);
  fVar37 = *(float *)(this + 0x800);
  fVar35 = *(float *)(this + 0x7e0);
  fVar38 = *(float *)(this + 0x7c0);
  fVar39 = *(float *)(this + 0x7a0);
  fVar40 = *(float *)(this + 0x780);
  fVar41 = *(float *)(this + 0x760);
  fVar42 = *(float *)(this + 0x740);
  fVar43 = *(float *)(this + 0x720);
  fVar44 = *(float *)(this + 0x700);
  fVar46 = *(float *)(this + 0x6e0);
  fVar47 = *(float *)(this + 0x6c0);
  fVar48 = *(float *)(this + 0x6a0);
  fVar49 = *(float *)(this + 0x680);
  fVar50 = *(float *)(this + 0x660);
  fVar51 = *(float *)(this + 0x640);
  fVar52 = *(float *)(this + 0x620);
  fVar53 = *(float *)(this + 0x600);
  fVar54 = *(float *)(this + 0x5e0);
  fVar55 = *(float *)(this + 0x5c0);
  fVar56 = *(float *)(this + 0x5a0);
  fVar58 = *(float *)(this + 0x580);
  fVar57 = *(float *)(this + 0x560);
  fVar65 = *(float *)(this + 0x540);
  fVar69 = *(float *)(this + 0x520);
  fVar70 = *(float *)(this + 0x500);
  fVar72 = *(float *)(this + 0x4e0);
  fVar75 = *(float *)(this + 0x4c0);
  fVar77 = *(float *)(this + 0x4a0);
  fVar78 = *(float *)(this + 0x480);
  fVar81 = *(float *)(this + 0x460);
  fVar2 = *(float *)(this + 0x440);
  fVar3 = *(float *)(this + 0x420);
  fVar4 = *(float *)(this + 0x400);
  fVar5 = *(float *)(this + 0x3e0);
  fVar6 = *(float *)(this + 0x3c0);
  fVar7 = *(float *)(this + 0x3a0);
  fVar8 = *(float *)(this + 0x380);
  fVar9 = *(float *)(this + 0x360);
  fVar10 = *(float *)(this + 0x340);
  fVar11 = *(float *)(this + 800);
  fVar12 = *(float *)(this + 0x300);
  fVar13 = *(float *)(this + 0x2e0);
  fVar14 = *(float *)(this + 0x2c0);
  fVar15 = *(float *)(this + 0x2a0);
  fVar16 = *(float *)(this + 0x280);
  fVar17 = *(float *)(this + 0x260);
  fVar18 = *(float *)(this + 0x240);
  fVar19 = *(float *)(this + 0x220);
  fVar20 = *(float *)(this + 0x200);
  fVar21 = *(float *)(this + 0x1e0);
  fVar22 = *(float *)(this + 0x1c0);
  fVar23 = *(float *)(this + 0x1a0);
  fVar24 = *(float *)(this + 0x180);
  fVar25 = *(float *)(this + 0x160);
  fVar26 = *(float *)(this + 0x140);
  fVar27 = *(float *)(this + 0x120);
  fVar28 = *(float *)(this + 0x100);
  fVar29 = *(float *)(this + 0xe0);
  fVar30 = *(float *)(this + 0xc0);
  *(float *)(this + 0x840) = *(float *)(this + 0x94) + 1e-18;
  *(float *)(this + 0x7c0) = *(float *)(this + 0x8c) + 1e-18;
  *(float *)(this + 0x740) = *(float *)(this + 0x84) + 1e-18;
  *(float *)(this + 0x6c0) = *(float *)(this + 0x7c) + 1e-18;
  *(float *)(this + 0x640) = *(float *)(this + 0x74) + 1e-18;
  *(float *)(this + 0x5c0) = *(float *)(this + 0x6c) + 1e-18;
  *(float *)(this + 0x540) = *(float *)(this + 100) + 1e-18;
  *(float *)(this + 0x4c0) = *(float *)(this + 0x5c) + 1e-18;
  *(float *)(this + 0x440) = *(float *)(this + 0x54) + 1e-18;
  *(float *)(this + 0x3c0) = *(float *)(this + 0x4c) + 1e-18;
  *(float *)(this + 0x340) = *(float *)(this + 0x44) + 1e-18;
  *(float *)(this + 0x2c0) = *(float *)(this + 0x3c) + 1e-18;
  *(float *)(this + 0x240) = *(float *)(this + 0x34) + 1e-18;
  *(float *)(this + 0x1c0) = *(float *)(this + 0x2c) + 1e-18;
  *(float *)(this + 0x140) = *(float *)(this + 0x24) + 1e-18;
  *(float *)(this + 0xc0) = *(float *)(this + 0x14) + 1e-18;
  fVar73 = fVar33 * *(float *)(this + 0x83c) +
           *(float *)(this + 0x94) * *(float *)(this + 0x83c) +
           *(float *)(this + 0x824) * *(float *)(this + 0x838);
  *(float *)(this + 0x824) = fVar73 + 1e-18;
  *(float *)(this + 0x860) = fVar73 + 1e-18;
  fVar34 = fVar32 * *(float *)(this + 0x85c) +
           fVar73 * *(float *)(this + 0x85c) + *(float *)(this + 0x844) * *(float *)(this + 0x858);
  *(float *)(this + 0x844) = fVar34 + 1e-18;
  *(float *)(this + 0x880) = fVar34 + 1e-18;
  fVar68 = fVar45 * *(float *)(this + 0x87c) +
           fVar34 * *(float *)(this + 0x87c) + *(float *)(this + 0x864) * *(float *)(this + 0x878);
  *(float *)(this + 0x864) = fVar68 + 1e-18;
  *(float *)(this + 0x8a0) = fVar68 + 1e-18;
  fVar79 = fVar1 * *(float *)(this + 0x89c) +
           fVar68 * *(float *)(this + 0x89c) + *(float *)(this + 0x884) * *(float *)(this + 0x898);
  *(float *)(this + 0x884) = fVar79 + 1e-18;
  fVar66 = fVar38 * *(float *)(this + 0x7bc) +
           *(float *)(this + 0x8c) * *(float *)(this + 0x7bc) +
           *(float *)(this + 0x7a4) * *(float *)(this + 0x7b8);
  *(float *)(this + 0x7a4) = fVar66 + 1e-18;
  *(float *)(this + 0x7e0) = fVar66 + 1e-18;
  fVar35 = fVar35 * *(float *)(this + 0x7dc) +
           fVar66 * *(float *)(this + 0x7dc) + *(float *)(this + 0x7c4) * *(float *)(this + 0x7d8);
  *(float *)(this + 0x7c4) = fVar35 + 1e-18;
  *(float *)(this + 0x800) = fVar35 + 1e-18;
  fVar59 = fVar37 * *(float *)(this + 0x7fc) +
           fVar35 * *(float *)(this + 0x7fc) + *(float *)(this + 0x7e4) * *(float *)(this + 0x7f8);
  *(float *)(this + 0x7e4) = fVar59 + 1e-18;
  *(float *)(this + 0x820) = fVar59 + 1e-18;
  local_10 = fVar36 * *(float *)(this + 0x81c) +
             fVar59 * *(float *)(this + 0x81c) + *(float *)(this + 0x804) * *(float *)(this + 0x818)
  ;
  *(float *)(this + 0x804) = local_10 + 1e-18;
  fVar63 = fVar42 * *(float *)(this + 0x73c) +
           *(float *)(this + 0x84) * *(float *)(this + 0x73c) +
           *(float *)(this + 0x724) * *(float *)(this + 0x738);
  *(float *)(this + 0x724) = fVar63 + 1e-18;
  *(float *)(this + 0x760) = fVar63 + 1e-18;
  fVar80 = fVar41 * *(float *)(this + 0x75c) +
           fVar63 * *(float *)(this + 0x75c) + *(float *)(this + 0x744) * *(float *)(this + 0x758);
  *(float *)(this + 0x744) = fVar80 + 1e-18;
  *(float *)(this + 0x780) = fVar80 + 1e-18;
  fVar76 = fVar40 * *(float *)(this + 0x77c) +
           fVar80 * *(float *)(this + 0x77c) + *(float *)(this + 0x764) * *(float *)(this + 0x778);
  *(float *)(this + 0x764) = fVar76 + 1e-18;
  *(float *)(this + 0x7a0) = fVar76 + 1e-18;
  local_18 = fVar39 * *(float *)(this + 0x79c) +
             fVar76 * *(float *)(this + 0x79c) + *(float *)(this + 0x784) * *(float *)(this + 0x798)
  ;
  *(float *)(this + 0x784) = local_18 + 1e-18;
  fVar36 = fVar47 * *(float *)(this + 0x6bc) +
           *(float *)(this + 0x7c) * *(float *)(this + 0x6bc) +
           *(float *)(this + 0x6a4) * *(float *)(this + 0x6b8);
  *(float *)(this + 0x6a4) = fVar36 + 1e-18;
  *(float *)(this + 0x6e0) = fVar36 + 1e-18;
  fVar60 = fVar46 * *(float *)(this + 0x6dc) +
           fVar36 * *(float *)(this + 0x6dc) + *(float *)(this + 0x6c4) * *(float *)(this + 0x6d8);
  *(float *)(this + 0x6c4) = fVar60 + 1e-18;
  *(float *)(this + 0x700) = fVar60 + 1e-18;
  fVar74 = fVar44 * *(float *)(this + 0x6fc) +
           fVar60 * *(float *)(this + 0x6fc) + *(float *)(this + 0x6e4) * *(float *)(this + 0x6f8);
  *(float *)(this + 0x6e4) = fVar74 + 1e-18;
  *(float *)(this + 0x720) = fVar74 + 1e-18;
  local_38 = fVar43 * *(float *)(this + 0x71c) +
             fVar74 * *(float *)(this + 0x71c) + *(float *)(this + 0x704) * *(float *)(this + 0x718)
  ;
  *(float *)(this + 0x704) = local_38 + 1e-18;
  fVar71 = fVar51 * *(float *)(this + 0x63c) +
           *(float *)(this + 0x74) * *(float *)(this + 0x63c) +
           *(float *)(this + 0x624) * *(float *)(this + 0x638);
  *(float *)(this + 0x624) = fVar71 + 1e-18;
  *(float *)(this + 0x660) = fVar71 + 1e-18;
  fVar43 = fVar50 * *(float *)(this + 0x65c) +
           fVar71 * *(float *)(this + 0x65c) + *(float *)(this + 0x644) * *(float *)(this + 0x658);
  *(float *)(this + 0x644) = fVar43 + 1e-18;
  *(float *)(this + 0x680) = fVar43 + 1e-18;
  fVar47 = fVar49 * *(float *)(this + 0x67c) +
           fVar43 * *(float *)(this + 0x67c) + *(float *)(this + 0x664) * *(float *)(this + 0x678);
  *(float *)(this + 0x664) = fVar47 + 1e-18;
  *(float *)(this + 0x6a0) = fVar47 + 1e-18;
  local_34 = fVar48 * *(float *)(this + 0x69c) +
             fVar47 * *(float *)(this + 0x69c) + *(float *)(this + 0x684) * *(float *)(this + 0x698)
  ;
  *(float *)(this + 0x684) = local_34 + 1e-18;
  fVar64 = fVar55 * *(float *)(this + 0x5bc) +
           *(float *)(this + 0x6c) * *(float *)(this + 0x5bc) +
           *(float *)(this + 0x5a4) * *(float *)(this + 0x5b8);
  *(float *)(this + 0x5a4) = fVar64 + 1e-18;
  *(float *)(this + 0x5e0) = fVar64 + 1e-18;
  fVar61 = fVar54 * *(float *)(this + 0x5dc) +
           fVar64 * *(float *)(this + 0x5dc) + *(float *)(this + 0x5c4) * *(float *)(this + 0x5d8);
  *(float *)(this + 0x5c4) = fVar61 + 1e-18;
  *(float *)(this + 0x600) = fVar61 + 1e-18;
  fVar62 = fVar53 * *(float *)(this + 0x5fc) +
           fVar61 * *(float *)(this + 0x5fc) + *(float *)(this + 0x5e4) * *(float *)(this + 0x5f8);
  *(float *)(this + 0x5e4) = fVar62 + 1e-18;
  *(float *)(this + 0x620) = fVar62 + 1e-18;
  local_30 = fVar52 * *(float *)(this + 0x61c) +
             fVar62 * *(float *)(this + 0x61c) + *(float *)(this + 0x604) * *(float *)(this + 0x618)
  ;
  *(float *)(this + 0x604) = local_30 + 1e-18;
  fVar37 = fVar65 * *(float *)(this + 0x53c) +
           *(float *)(this + 100) * *(float *)(this + 0x53c) +
           *(float *)(this + 0x524) * *(float *)(this + 0x538);
  *(float *)(this + 0x524) = fVar37 + 1e-18;
  *(float *)(this + 0x560) = fVar37 + 1e-18;
  fVar57 = fVar57 * *(float *)(this + 0x55c) +
           fVar37 * *(float *)(this + 0x55c) + *(float *)(this + 0x544) * *(float *)(this + 0x558);
  *(float *)(this + 0x544) = fVar57 + 1e-18;
  *(float *)(this + 0x580) = fVar57 + 1e-18;
  fVar67 = fVar58 * *(float *)(this + 0x57c) +
           fVar57 * *(float *)(this + 0x57c) + *(float *)(this + 0x564) * *(float *)(this + 0x578);
  *(float *)(this + 0x564) = fVar67 + 1e-18;
  *(float *)(this + 0x5a0) = fVar67 + 1e-18;
  local_2c = fVar56 * *(float *)(this + 0x59c) +
             fVar67 * *(float *)(this + 0x59c) + *(float *)(this + 0x584) * *(float *)(this + 0x598)
  ;
  *(float *)(this + 0x584) = local_2c + 1e-18;
  fVar44 = fVar75 * *(float *)(this + 0x4bc) +
           *(float *)(this + 0x5c) * *(float *)(this + 0x4bc) +
           *(float *)(this + 0x4a4) * *(float *)(this + 0x4b8);
  *(float *)(this + 0x4a4) = fVar44 + 1e-18;
  *(float *)(this + 0x4e0) = fVar44 + 1e-18;
  fVar51 = fVar72 * *(float *)(this + 0x4dc) +
           fVar44 * *(float *)(this + 0x4dc) + *(float *)(this + 0x4c4) * *(float *)(this + 0x4d8);
  *(float *)(this + 0x4c4) = fVar51 + 1e-18;
  *(float *)(this + 0x500) = fVar51 + 1e-18;
  fVar52 = fVar70 * *(float *)(this + 0x4fc) +
           fVar51 * *(float *)(this + 0x4fc) + *(float *)(this + 0x4e4) * *(float *)(this + 0x4f8);
  *(float *)(this + 0x4e4) = fVar52 + 1e-18;
  *(float *)(this + 0x520) = fVar52 + 1e-18;
  local_3c = fVar69 * *(float *)(this + 0x51c) +
             fVar52 * *(float *)(this + 0x51c) + *(float *)(this + 0x504) * *(float *)(this + 0x518)
  ;
  *(float *)(this + 0x504) = local_3c + 1e-18;
  fVar38 = fVar2 * *(float *)(this + 0x43c) +
           *(float *)(this + 0x54) * *(float *)(this + 0x43c) +
           *(float *)(this + 0x424) * *(float *)(this + 0x438);
  *(float *)(this + 0x424) = fVar38 + 1e-18;
  *(float *)(this + 0x460) = fVar38 + 1e-18;
  fVar53 = fVar81 * *(float *)(this + 0x45c) +
           fVar38 * *(float *)(this + 0x45c) + *(float *)(this + 0x444) * *(float *)(this + 0x458);
  *(float *)(this + 0x444) = fVar53 + 1e-18;
  *(float *)(this + 0x480) = fVar53 + 1e-18;
  fVar72 = fVar78 * *(float *)(this + 0x47c) +
           fVar53 * *(float *)(this + 0x47c) + *(float *)(this + 0x464) * *(float *)(this + 0x478);
  *(float *)(this + 0x464) = fVar72 + 1e-18;
  *(float *)(this + 0x4a0) = fVar72 + 1e-18;
  local_40 = fVar77 * *(float *)(this + 0x49c) +
             fVar72 * *(float *)(this + 0x49c) + *(float *)(this + 0x484) * *(float *)(this + 0x498)
  ;
  *(float *)(this + 0x484) = local_40 + 1e-18;
  fVar39 = fVar6 * *(float *)(this + 0x3bc) +
           *(float *)(this + 0x4c) * *(float *)(this + 0x3bc) +
           *(float *)(this + 0x3a4) * *(float *)(this + 0x3b8);
  *(float *)(this + 0x3a4) = fVar39 + 1e-18;
  *(float *)(this + 0x3e0) = fVar39 + 1e-18;
  fVar54 = fVar5 * *(float *)(this + 0x3dc) +
           fVar39 * *(float *)(this + 0x3dc) + *(float *)(this + 0x3c4) * *(float *)(this + 0x3d8);
  *(float *)(this + 0x3c4) = fVar54 + 1e-18;
  *(float *)(this + 0x400) = fVar54 + 1e-18;
  fVar77 = fVar4 * *(float *)(this + 0x3fc) +
           fVar54 * *(float *)(this + 0x3fc) + *(float *)(this + 0x3e4) * *(float *)(this + 0x3f8);
  *(float *)(this + 0x3e4) = fVar77 + 1e-18;
  *(float *)(this + 0x420) = fVar77 + 1e-18;
  local_28 = fVar3 * *(float *)(this + 0x41c) +
             fVar77 * *(float *)(this + 0x41c) + *(float *)(this + 0x404) * *(float *)(this + 0x418)
  ;
  *(float *)(this + 0x404) = local_28 + 1e-18;
  fVar40 = fVar10 * *(float *)(this + 0x33c) +
           *(float *)(this + 0x44) * *(float *)(this + 0x33c) +
           *(float *)(this + 0x324) * *(float *)(this + 0x338);
  *(float *)(this + 0x324) = fVar40 + 1e-18;
  *(float *)(this + 0x360) = fVar40 + 1e-18;
  fVar55 = fVar9 * *(float *)(this + 0x35c) +
           fVar40 * *(float *)(this + 0x35c) + *(float *)(this + 0x344) * *(float *)(this + 0x358);
  *(float *)(this + 0x344) = fVar55 + 1e-18;
  *(float *)(this + 0x380) = fVar55 + 1e-18;
  fVar81 = fVar8 * *(float *)(this + 0x37c) +
           fVar55 * *(float *)(this + 0x37c) + *(float *)(this + 0x364) * *(float *)(this + 0x378);
  *(float *)(this + 0x364) = fVar81 + 1e-18;
  *(float *)(this + 0x3a0) = fVar81 + 1e-18;
  local_24 = fVar7 * *(float *)(this + 0x39c) +
             fVar81 * *(float *)(this + 0x39c) + *(float *)(this + 900) * *(float *)(this + 0x398);
  *(float *)(this + 900) = local_24 + 1e-18;
  fVar41 = fVar14 * *(float *)(this + 700) +
           *(float *)(this + 0x3c) * *(float *)(this + 700) +
           *(float *)(this + 0x2a4) * *(float *)(this + 0x2b8);
  *(float *)(this + 0x2a4) = fVar41 + 1e-18;
  *(float *)(this + 0x2e0) = fVar41 + 1e-18;
  fVar48 = fVar13 * *(float *)(this + 0x2dc) +
           fVar41 * *(float *)(this + 0x2dc) + *(float *)(this + 0x2c4) * *(float *)(this + 0x2d8);
  *(float *)(this + 0x2c4) = fVar48 + 1e-18;
  *(float *)(this + 0x300) = fVar48 + 1e-18;
  fVar75 = fVar12 * *(float *)(this + 0x2fc) +
           fVar48 * *(float *)(this + 0x2fc) + *(float *)(this + 0x2e4) * *(float *)(this + 0x2f8);
  *(float *)(this + 0x2e4) = fVar75 + 1e-18;
  *(float *)(this + 800) = fVar75 + 1e-18;
  local_20 = fVar11 * *(float *)(this + 0x31c) +
             fVar75 * *(float *)(this + 0x31c) + *(float *)(this + 0x304) * *(float *)(this + 0x318)
  ;
  *(float *)(this + 0x304) = local_20 + 1e-18;
  fVar42 = fVar18 * *(float *)(this + 0x23c) +
           *(float *)(this + 0x34) * *(float *)(this + 0x23c) +
           *(float *)(this + 0x224) * *(float *)(this + 0x238);
  *(float *)(this + 0x224) = fVar42 + 1e-18;
  *(float *)(this + 0x260) = fVar42 + 1e-18;
  fVar69 = fVar17 * *(float *)(this + 0x25c) +
           fVar42 * *(float *)(this + 0x25c) + *(float *)(this + 0x244) * *(float *)(this + 600);
  *(float *)(this + 0x244) = fVar69 + 1e-18;
  *(float *)(this + 0x280) = fVar69 + 1e-18;
  fVar58 = fVar16 * *(float *)(this + 0x27c) +
           fVar69 * *(float *)(this + 0x27c) + *(float *)(this + 0x264) * *(float *)(this + 0x278);
  *(float *)(this + 0x264) = fVar58 + 1e-18;
  *(float *)(this + 0x2a0) = fVar58 + 1e-18;
  local_1c = fVar15 * *(float *)(this + 0x29c) +
             fVar58 * *(float *)(this + 0x29c) + *(float *)(this + 0x284) * *(float *)(this + 0x298)
  ;
  *(float *)(this + 0x284) = local_1c + 1e-18;
  fVar65 = fVar22 * *(float *)(this + 0x1bc) +
           *(float *)(this + 0x2c) * *(float *)(this + 0x1bc) +
           *(float *)(this + 0x1a4) * *(float *)(this + 0x1b8);
  *(float *)(this + 0x1a4) = fVar65 + 1e-18;
  *(float *)(this + 0x1e0) = fVar65 + 1e-18;
  fVar49 = fVar21 * *(float *)(this + 0x1dc) +
           fVar65 * *(float *)(this + 0x1dc) + *(float *)(this + 0x1c4) * *(float *)(this + 0x1d8);
  *(float *)(this + 0x1c4) = fVar49 + 1e-18;
  *(float *)(this + 0x200) = fVar49 + 1e-18;
  fVar78 = fVar20 * *(float *)(this + 0x1fc) +
           fVar49 * *(float *)(this + 0x1fc) + *(float *)(this + 0x1e4) * *(float *)(this + 0x1f8);
  *(float *)(this + 0x1e4) = fVar78 + 1e-18;
  *(float *)(this + 0x220) = fVar78 + 1e-18;
  fVar45 = fVar19 * *(float *)(this + 0x21c) +
           fVar78 * *(float *)(this + 0x21c) + *(float *)(this + 0x204) * *(float *)(this + 0x218);
  *(float *)(this + 0x204) = fVar45 + 1e-18;
  fVar70 = fVar26 * *(float *)(this + 0x13c) +
           *(float *)(this + 0x24) * *(float *)(this + 0x13c) +
           *(float *)(this + 0x124) * *(float *)(this + 0x138);
  *(float *)(this + 0x124) = fVar70 + 1e-18;
  *(float *)(this + 0x160) = fVar70 + 1e-18;
  fVar46 = fVar25 * *(float *)(this + 0x15c) +
           fVar70 * *(float *)(this + 0x15c) + *(float *)(this + 0x144) * *(float *)(this + 0x158);
  *(float *)(this + 0x144) = fVar46 + 1e-18;
  *(float *)(this + 0x180) = fVar46 + 1e-18;
  fVar56 = fVar24 * *(float *)(this + 0x17c) +
           fVar46 * *(float *)(this + 0x17c) + *(float *)(this + 0x164) * *(float *)(this + 0x178);
  *(float *)(this + 0x164) = fVar56 + 1e-18;
  *(float *)(this + 0x1a0) = fVar56 + 1e-18;
  local_c = fVar23 * *(float *)(this + 0x19c) +
            fVar56 * *(float *)(this + 0x19c) + *(float *)(this + 0x184) * *(float *)(this + 0x198);
  *(float *)(this + 0x184) = local_c + 1e-18;
  local_14 = fVar30 * *(float *)(this + 0xbc) +
             *(float *)(this + 0x14) * *(float *)(this + 0xbc) +
             *(float *)(this + 0xa0) * *(float *)(this + 0xb8);
  *(float *)(this + 0xa0) = local_14 + 1e-18;
  *(float *)(this + 0xe0) = local_14 + 1e-18;
  fVar32 = fVar29 * *(float *)(this + 0xdc) +
           local_14 * *(float *)(this + 0xdc) + *(float *)(this + 0xc4) * *(float *)(this + 0xd8);
  *(float *)(this + 0xc4) = fVar32 + 1e-18;
  *(float *)(this + 0x100) = fVar32 + 1e-18;
  fVar33 = fVar28 * *(float *)(this + 0xfc) +
           fVar32 * *(float *)(this + 0xfc) + *(float *)(this + 0xe4) * *(float *)(this + 0xf8);
  *(float *)(this + 0xe4) = fVar33 + 1e-18;
  *(float *)(this + 0x120) = fVar33 + 1e-18;
  fVar50 = fVar27 * *(float *)(this + 0x11c) +
           fVar33 * *(float *)(this + 0x11c) + *(float *)(this + 0x104) * *(float *)(this + 0x118);
  *(float *)(this + 0x104) = fVar50 + 1e-18;
  fVar1 = *(float *)(this + 0x9c);
  if (fVar1 <= 1.5) {
    *(float *)(this + 0x98) = fVar73;
    *(float *)(this + 0x90) = fVar66;
    *(float *)(this + 0x88) = fVar63;
    *(float *)(this + 0x80) = fVar36;
    *(float *)(this + 0x78) = fVar71;
    *(float *)(this + 0x70) = fVar64;
    *(float *)(this + 0x68) = fVar37;
    *(float *)(this + 0x60) = fVar44;
    *(float *)(this + 0x58) = fVar38;
    *(float *)(this + 0x50) = fVar39;
    *(float *)(this + 0x48) = fVar40;
    *(float *)(this + 0x40) = fVar41;
    *(float *)(this + 0x38) = fVar42;
    *(float *)(this + 0x30) = fVar65;
    *(float *)(this + 0x28) = fVar70;
    goto LAB_1000183a1;
  }
  if (fVar1 <= 3.5) {
    fVar45 = fVar78;
    local_40 = fVar72;
    local_3c = fVar52;
    local_38 = fVar74;
    local_34 = fVar47;
    local_30 = fVar62;
    local_2c = fVar67;
    local_28 = fVar77;
    local_24 = fVar81;
    local_20 = fVar75;
    local_1c = fVar58;
    local_18 = fVar76;
    local_10 = fVar59;
    local_c = fVar56;
  }
  uVar31 = -(uint)(3.5 < fVar1);
  *(uint *)(this + 0x98) =
       ~-(uint)(2.5 < fVar1) & (uint)fVar34 |
       (~uVar31 & (uint)fVar68 | (uint)fVar79 & uVar31) & -(uint)(2.5 < fVar1);
  if (fVar1 <= 2.5) {
    local_10 = fVar35;
  }
  *(float *)(this + 0x90) = local_10;
  if (fVar1 <= 2.5) {
    local_18 = fVar80;
  }
  *(float *)(this + 0x88) = local_18;
  if (fVar1 <= 2.5) {
    *(float *)(this + 0x80) = fVar60;
    if (fVar1 <= 2.5) goto LAB_1000182bd;
LAB_100018151:
    *(float *)(this + 0x78) = local_34;
    if (2.5 < fVar1) goto LAB_10001815c;
LAB_1000182cc:
    *(float *)(this + 0x70) = fVar61;
    if (fVar1 <= 2.5) goto LAB_1000182da;
LAB_100018167:
    *(float *)(this + 0x68) = local_2c;
    if (2.5 < fVar1) goto LAB_100018179;
LAB_1000182f0:
    *(float *)(this + 0x60) = fVar51;
    if (fVar1 <= 2.5) goto LAB_100018306;
LAB_10001818b:
    *(float *)(this + 0x58) = local_40;
    if (2.5 < fVar1) goto LAB_10001819c;
LAB_10001831b:
    *(float *)(this + 0x50) = fVar54;
    if (fVar1 <= 2.5) goto LAB_10001832b;
LAB_1000181a8:
    *(float *)(this + 0x48) = local_24;
    if (2.5 < fVar1) goto LAB_1000181b4;
LAB_10001833b:
    *(float *)(this + 0x40) = fVar48;
    if (fVar1 <= 2.5) goto LAB_10001834d;
LAB_1000181c0:
    *(float *)(this + 0x38) = local_1c;
    if (2.5 < fVar1) goto LAB_1000181cb;
LAB_10001835d:
    *(float *)(this + 0x30) = fVar49;
    if (fVar1 <= 2.5) goto LAB_10001836f;
LAB_1000181d7:
    *(float *)(this + 0x28) = local_c;
  }
  else {
    *(float *)(this + 0x80) = local_38;
    if (2.5 < fVar1) goto LAB_100018151;
LAB_1000182bd:
    *(float *)(this + 0x78) = fVar43;
    if (fVar1 <= 2.5) goto LAB_1000182cc;
LAB_10001815c:
    *(float *)(this + 0x70) = local_30;
    if (2.5 < fVar1) goto LAB_100018167;
LAB_1000182da:
    *(float *)(this + 0x68) = fVar57;
    if (fVar1 <= 2.5) goto LAB_1000182f0;
LAB_100018179:
    *(float *)(this + 0x60) = local_3c;
    if (2.5 < fVar1) goto LAB_10001818b;
LAB_100018306:
    *(float *)(this + 0x58) = fVar53;
    if (fVar1 <= 2.5) goto LAB_10001831b;
LAB_10001819c:
    *(float *)(this + 0x50) = local_28;
    if (2.5 < fVar1) goto LAB_1000181a8;
LAB_10001832b:
    *(float *)(this + 0x48) = fVar55;
    if (fVar1 <= 2.5) goto LAB_10001833b;
LAB_1000181b4:
    *(float *)(this + 0x40) = local_20;
    if (2.5 < fVar1) goto LAB_1000181c0;
LAB_10001834d:
    *(float *)(this + 0x38) = fVar69;
    if (fVar1 <= 2.5) goto LAB_10001835d;
LAB_1000181cb:
    *(float *)(this + 0x30) = fVar45;
    if (2.5 < fVar1) goto LAB_1000181d7;
LAB_10001836f:
    *(float *)(this + 0x28) = fVar46;
  }
  local_14 = fVar32;
  if (2.5 < fVar1) {
    local_14 = (float)(~uVar31 & (uint)fVar33 | (uint)fVar50 & uVar31);
  }
LAB_1000183a1:
  *(float *)(this + 0x20) = local_14;
  return;
}
}
