#include <ni/controller_editor/NWL.hpp>
namespace NI::NWL::StyleSheet::transferParsedRules(NI {

void NWL::StyleParser2 const&) {
StyleSheet *pSVar1;
  symbol *this_00;
  string *psVar2;
  StyleSheet *pSVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  unsigned long uVar7;
  FontEngine *pFVar8;
  unsigned long long uVar9;
  __tree_node_base *p_Var10;
  StyleSheet *pSVar11;
  _Unwind_Exception *exception_object;
  StyleSheet *pSVar12;
  __tree_node_base *p_Var13;
  StyleSheet *pSVar14;
  string *psVar15;
  uint uVar16;
  
  unsigned int local_810;
  int local_80c;
  uint local_808;
  unsigned long long local_800;
  unsigned long long local_7f8;
  unsigned long long uStack_7f0;
  unsigned long long local_7e8;
  unsigned int local_7e0;
  int local_7dc;
  uint local_7d8;
  unsigned long long local_7d0;
  long local_7c8;
  StyleSheet *local_7c0;
  __tree<// std code
  *local_7b8;
  __tree<// std code
  *local_7b0;
  unsigned long long local_7a8;
  long lStack_7a0;
  unsigned long long local_798;
  long lStack_790;
  unsigned long local_788;
  unsigned long uStack_780;
  unsigned long long local_778;
  unsigned long local_768;
  unsigned long uStack_760;
  unsigned long long local_758;
  unsigned long local_748;
  unsigned long local_740;
  StyleSheet *local_738;
  
  unsigned long local_728;
  PictureProperties local_718 [40];
  PictureProperties local_6f0 [40];
  unsigned long local_6c8;
  unsigned long long local_6c0;
  unsigned long local_6b8;
  unsigned long local_6b0;
  unsigned long local_6a8;
  unsigned long local_6a0;
  unsigned long local_698;
  uint local_690;
  uint local_68c;
  long local_688;
  StyleSheet *local_680;
  unsigned long long local_678 [10];
  uint local_628;
  unsigned long long local_618;
  unsigned int local_610;
  unsigned long long local_608 [10];
  uint local_5b8;
  unsigned long long local_5a8;
  unsigned int local_5a0;
  unsigned long long local_598;
  unsigned long long uStack_590;
  unsigned long long local_588;
  unsigned long long uStack_580;
  unsigned long long local_578;
  unsigned long long uStack_570;
  unsigned long long local_568;
  unsigned long long uStack_560;
  unsigned long long local_558;
  unsigned long long uStack_550;
  unsigned long local_548;
  unsigned long long uStack_540;
  unsigned long long local_538;
  unsigned int local_530;
  unsigned long local_528 [10];
  uint local_4d8;
  unsigned long long local_4c8;
  unsigned int local_4c0;
  unsigned long local_4b8 [10];
  unsigned long local_468;
  unsigned long long uStack_460;
  unsigned long long local_458;
  unsigned int local_450;
  unsigned long local_448 [10];
  uint local_3f8;
  unsigned long long local_3e8;
  unsigned int local_3e0;
  unsigned long local_3d8 [10];
  unsigned long local_388;
  unsigned long long uStack_380;
  unsigned long long local_378;
  unsigned int local_370;
  unsigned char local_368 [80];
  uint local_318;
  unsigned long long local_308;
  unsigned int local_300;
  unsigned long long local_2f8;
  unsigned long long uStack_2f0;
  unsigned long long local_2e8;
  unsigned long long uStack_2e0;
  unsigned long long local_2d8;
  unsigned long long uStack_2d0;
  unsigned long long local_2c8;
  unsigned long long uStack_2c0;
  unsigned long long local_2b8;
  unsigned long long uStack_2b0;
  unsigned long local_2a8;
  unsigned long long uStack_2a0;
  unsigned long long local_298;
  unsigned int local_290;
  long local_288 [4];
  long *local_268;
  unsigned long long local_258;
  __tree_node *local_250 [3];
  unsigned char local_238 [80];
  uint local_1e8;
  unsigned long long local_1d8;
  unsigned int local_1d0;
  unsigned long long local_1c8;
  unsigned long long uStack_1c0;
  unsigned long long local_1b8;
  unsigned long long uStack_1b0;
  unsigned long long local_1a8;
  unsigned long long uStack_1a0;
  unsigned long long local_198;
  unsigned long long uStack_190;
  unsigned long long local_188;
  unsigned long long uStack_180;
  unsigned long local_178;
  unsigned long long uStack_170;
  unsigned long long local_168;
  unsigned int local_160;
  long local_158 [4];
  long *local_138;
  unsigned long long local_128;
  __tree_node *local_120 [3];
  unsigned char local_108 [80];
  uint local_b8;
  unsigned long long local_a8;
  unsigned int local_a0;
  long local_98 [4];
  function<// std code
  long local_68 [4];
  function<// std code
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1002272e0;
  local_7b8 = (__tree<// std code
               *)(this + 8);
  // std code
  __tree<// std code
  ::destroy(local_7b8,*(__tree_node **)(this + 0x10));
  *(unsigned long long *)(this + 0x18) = 0;
  *(StyleSheet **)(this + 8) = this + 0x10;
  *(unsigned long long *)(this + 0x10) = 0;
  local_7b0 = (__tree<// std code
               *)(this + 0x20);
  pSVar1 = this + 0x28;
  local_7c0 = this + 0x10;
  // std code
  __tree<// std code
  ::destroy(local_7b0,*(__tree_node **)(this + 0x28));
  *(unsigned long long *)(this + 0x30) = 0;
  *(StyleSheet **)(this + 0x20) = pSVar1;
  *(unsigned long long *)(this + 0x28) = 0;
  local_688 = *(long *)(param_1 + 8);
  local_7c8 = *(long *)(param_1 + 0x10);
  local_738 = pSVar1;
  local_680 = this;
  if (local_688 != local_7c8) {
    do {
      ManagerContainer::getDefaultFontData();
      // std code
      uVar16 = 0;
      uVar7 = 0;
      local_788 = 0;
      uStack_780 = 0;
      local_778 = 0;
      UIA::PictureProperties::PictureProperties(local_718);
      local_768 = 0;
      uStack_760 = 0;
      local_758 = 0;
      UIA::PictureProperties::PictureProperties(local_6f0);
      local_6b8 = uVar7;
      local_6c8 = uVar7 >> 0x20;
      psVar15 = *(string **)(local_688 + 0x18);
      psVar2 = *(string **)(local_688 + 0x20);
      if (psVar15 == psVar2) {
        local_6c0 = 0;
        iVar6 = (int)(uVar7 >> 0x20);
      }
      else {
        local_6a0 = 0;
        local_6b0 = 0;
        local_6a8 = 0;
        local_748 = 0;
        local_740 = 0;
        local_6c0 = 0;
        local_690 = 0;
        local_698 = 0;
        local_68c = 0;
        do {
          this_00 = (symbol *)(psVar15 + 0x60);
          cVar4 = ni::symbol::operator==(this_00,"font-size");
          if ((cVar4 == '\0') || ((*(uint *)(psVar15 + 0x68) | 1) != 1)) {
            cVar4 = ni::symbol::operator==(this_00,"font-hinting");
            if ((cVar4 == '\0') || (*(int *)(psVar15 + 0x68) != 3)) {
              cVar4 = ni::symbol::operator==(this_00,"font-style");
              if ((cVar4 != '\0') && (*(int *)(psVar15 + 0x68) == 5)) {
                if (*(int *)(psVar15 + 0x50) == 5) {
                  // std code
                  iVar6 = // std code
                  uVar5 = 1;
                  if (iVar6 != 0) {
                    iVar6 = // std code
                    uVar5 = 2;
                    if (iVar6 != 0) {
                      iVar6 = // std code
                      uVar5 = (uint)(iVar6 == 0) << 2;
                    }
                  }
                  uVar16 = uVar16 | uVar5;
LAB_100039ad4:
                  // std code
                  goto LAB_100039d00;
                }
                goto LAB_10003aaad;
              }
              cVar4 = ni::symbol::operator==(this_00,"font-resid");
              if ((cVar4 != '\0') && (*(int *)(psVar15 + 0x68) == 0)) {
                if (*(int *)(psVar15 + 0x50) == 3) {
                  local_6b8 = (unsigned long)*(uint *)psVar15;
                  goto LAB_100039d00;
                }
                goto LAB_10003aabc;
              }
              cVar4 = ni::symbol::operator==(this_00,"font-name");
              if ((cVar4 != '\0') && (*(int *)(psVar15 + 0x68) == 4)) {
                if (*(int *)(psVar15 + 0x50) == 5) {
                  // std code
                  // std code
                  goto LAB_100039ad4;
                }
                goto LAB_10003aab2;
              }
              cVar4 = ni::symbol::operator==(this_00,"font-family");
              if ((cVar4 == '\0') ||
                 ((*(int *)(psVar15 + 0x68) != 5 && (*(int *)(psVar15 + 0x68) != 0)))) {
                cVar4 = ni::symbol::operator==(this_00,"image");
                if ((cVar4 == '\0') ||
                   (uVar9 = (anonymous_namespace)::retrieveURL(psVar15,(string *)&local_788),
                   (char)uVar9 == '\0')) {
                  cVar4 = ni::symbol::operator==(this_00,"dye-mask");
                  if ((cVar4 == '\0') ||
                     (uVar9 = (anonymous_namespace)::retrieveURL(psVar15,(string *)&local_768),
                     (char)uVar9 == '\0')) {
                    cVar4 = ni::symbol::operator==(this_00,"animations");
                    if ((cVar4 == '\0') || (*(int *)(psVar15 + 0x68) != 0)) {
                      cVar4 = ni::symbol::operator==(this_00,"dye-mask-animations");
                      if ((cVar4 != '\0') && (*(int *)(psVar15 + 0x68) == 0)) {
                        if (*(int *)(psVar15 + 0x50) == 3) {
                          UIA::PictureProperties::setNumAnimations(local_6f0,*(uint *)psVar15);
                          goto LAB_100039d00;
                        }
                        goto LAB_10003aacb;
                      }
                      cVar4 = ni::symbol::operator==(this_00,"fixed");
                      if ((cVar4 != '\0') && ((*(uint *)(psVar15 + 0x68) | 1) == 1)) {
                        if (*(int *)(psVar15 + 0x50) == 3) {
                          iVar6 = *(int *)psVar15;
                          UIA::PictureProperties::setFixedTop(local_718,iVar6);
                          UIA::PictureProperties::setFixedBottom(local_718,iVar6);
                          UIA::PictureProperties::setFixedLeft(local_718,iVar6);
                          UIA::PictureProperties::setFixedRight(local_718,iVar6);
                          UIA::PictureProperties::setVertResizable(local_718,true);
                          UIA::PictureProperties::setHorzResizable(local_718,true);
                          UIA::PictureProperties::setFixedTop(local_6f0,iVar6);
                          UIA::PictureProperties::setFixedBottom(local_6f0,iVar6);
                          UIA::PictureProperties::setFixedLeft(local_6f0,iVar6);
                          UIA::PictureProperties::setFixedRight(local_6f0,iVar6);
                          UIA::PictureProperties::setVertResizable(local_6f0,true);
                          UIA::PictureProperties::setHorzResizable(local_6f0,true);
                          goto LAB_100039d00;
                        }
                        goto LAB_10003aac6;
                      }
                      cVar4 = ni::symbol::operator==(this_00,"fixed-top");
                      if ((cVar4 != '\0') && ((*(uint *)(psVar15 + 0x68) | 1) == 1)) {
                        if (*(int *)(psVar15 + 0x50) == 3) {
                          iVar6 = *(int *)psVar15;
                          UIA::PictureProperties::setFixedTop(local_718,iVar6);
                          UIA::PictureProperties::setVertResizable(local_718,true);
                          UIA::PictureProperties::setFixedTop(local_6f0,iVar6);
                          UIA::PictureProperties::setVertResizable(local_6f0,true);
                          goto LAB_100039d00;
                        }
                        goto LAB_10003aad0;
                      }
                      cVar4 = ni::symbol::operator==(this_00,"fixed-bottom");
                      if ((cVar4 != '\0') && ((*(uint *)(psVar15 + 0x68) | 1) == 1)) {
                        if (*(int *)(psVar15 + 0x50) == 3) {
                          iVar6 = *(int *)psVar15;
                          UIA::PictureProperties::setFixedBottom(local_718,iVar6);
                          UIA::PictureProperties::setVertResizable(local_718,true);
                          UIA::PictureProperties::setFixedBottom(local_6f0,iVar6);
                          UIA::PictureProperties::setVertResizable(local_6f0,true);
                          goto LAB_100039d00;
                        }
                        goto LAB_10003aad5;
                      }
                      cVar4 = ni::symbol::operator==(this_00,"fixed-left");
                      if ((cVar4 != '\0') && ((*(uint *)(psVar15 + 0x68) | 1) == 1)) {
                        if (*(int *)(psVar15 + 0x50) == 3) {
                          iVar6 = *(int *)psVar15;
                          UIA::PictureProperties::setFixedLeft(local_718,iVar6);
                          UIA::PictureProperties::setHorzResizable(local_718,true);
                          UIA::PictureProperties::setFixedLeft(local_6f0,iVar6);
                          UIA::PictureProperties::setHorzResizable(local_6f0,true);
                          goto LAB_100039d00;
                        }
                        goto LAB_10003aada;
                      }
                      cVar4 = ni::symbol::operator==(this_00,"fixed-right");
                      if ((cVar4 != '\0') && ((*(uint *)(psVar15 + 0x68) | 1) == 1)) {
                        if (*(int *)(psVar15 + 0x50) == 3) {
                          iVar6 = *(int *)psVar15;
                          UIA::PictureProperties::setFixedRight(local_718,iVar6);
                          UIA::PictureProperties::setHorzResizable(local_718,true);
                          UIA::PictureProperties::setFixedRight(local_6f0,iVar6);
                          UIA::PictureProperties::setHorzResizable(local_6f0,true);
                          goto LAB_100039d00;
                        }
                        goto LAB_10003aadf;
                      }
                      cVar4 = ni::symbol::operator==(this_00,"relative-left");
                      if ((cVar4 == '\0') || ((*(uint *)(psVar15 + 0x68) | 1) != 1)) {
                        cVar4 = ni::symbol::operator==(this_00,"relative-top");
                        if ((cVar4 != '\0') && ((*(uint *)(psVar15 + 0x68) | 1) == 1)) {
                          if (*(int *)(psVar15 + 0x50) == 3) {
                            uVar7 = (unsigned long)*(uint *)psVar15;
                            local_6a0 = uVar7;
                            goto LAB_1000398c8;
                          }
                          goto LAB_10003aae9;
                        }
                        cVar4 = ni::symbol::operator==(this_00,"foreground-relative-left");
                        if ((cVar4 == '\0') || ((*(uint *)(psVar15 + 0x68) | 1) != 1)) {
                          cVar4 = ni::symbol::operator==(this_00,"foreground-relative-top");
                          if ((cVar4 == '\0') || ((*(uint *)(psVar15 + 0x68) | 1) != 1))
                          goto LAB_100039d00;
                          if (*(int *)(psVar15 + 0x50) != 3) goto LAB_10003aaf8;
                          uVar7 = (unsigned long)*(uint *)psVar15;
                          local_698 = uVar7;
                        }
                        else {
                          if (*(int *)(psVar15 + 0x50) != 3) {
                            eggs::variants::detail::throw_bad_variant_access<int_const&>();
LAB_10003aaf8:
                            exception_object =
                                 (_Unwind_Exception *)
                                 eggs::variants::detail::throw_bad_variant_access<int_const&>();
                            // std code
                            // std code
                            // std code
                    /* WARNING: Subroutine does not return */
                            __Unwind_Resume(exception_object);
                          }
                          local_68c = *(uint *)psVar15;
                          uVar7 = (unsigned long)local_68c;
                        }
                        local_6a8 = 0((int7)(uVar7 >> 8),1);
                      }
                      else {
                        if (*(int *)(psVar15 + 0x50) != 3) goto LAB_10003aae4;
                        local_690 = *(uint *)psVar15;
                        uVar7 = (unsigned long)local_690;
LAB_1000398c8:
                        local_6b0 = 0((int7)(uVar7 >> 8),1);
                      }
                    }
                    else {
                      if (*(int *)(psVar15 + 0x50) != 3) goto LAB_10003aac1;
                      UIA::PictureProperties::setNumAnimations(local_718,*(uint *)psVar15);
                    }
                  }
                  else {
                    local_740 = 0((int7)((unsigned long)uVar9 >> 8),1);
                  }
                }
                else {
                  local_748 = 0((int7)((unsigned long)uVar9 >> 8),1);
                }
              }
              else {
                if (*(int *)(psVar15 + 0x50) != 5) goto LAB_10003aab7;
                // std code
                // std code
                uVar9 = // std code
                local_6c0 = 0((int7)((unsigned long)uVar9 >> 8),1);
              }
            }
            else {
              if (*(int *)(psVar15 + 0x50) != 4) goto LAB_10003aaa8;
              uVar5 = uVar16 | 0x10;
              uVar16 = uVar16 & 0xffffffef;
              if (*psVar15 != (string)0x0) {
                uVar16 = uVar5;
              }
            }
          }
          else {
            if (*(int *)(psVar15 + 0x50) != 3) {
              eggs::variants::detail::throw_bad_variant_access<int_const&>();
LAB_10003aaa8:
              eggs::variants::detail::throw_bad_variant_access<bool_const&>();
LAB_10003aaad:
              eggs::variants::detail::throw_bad_variant_access<// std code
LAB_10003aab2:
              eggs::variants::detail::throw_bad_variant_access<// std code
LAB_10003aab7:
              eggs::variants::detail::throw_bad_variant_access<// std code
LAB_10003aabc:
              eggs::variants::detail::throw_bad_variant_access<int_const&>();
LAB_10003aac1:
              eggs::variants::detail::throw_bad_variant_access<int_const&>();
LAB_10003aac6:
              eggs::variants::detail::throw_bad_variant_access<int_const&>();
LAB_10003aacb:
              eggs::variants::detail::throw_bad_variant_access<int_const&>();
LAB_10003aad0:
              eggs::variants::detail::throw_bad_variant_access<int_const&>();
LAB_10003aad5:
              eggs::variants::detail::throw_bad_variant_access<int_const&>();
LAB_10003aada:
              eggs::variants::detail::throw_bad_variant_access<int_const&>();
LAB_10003aadf:
              eggs::variants::detail::throw_bad_variant_access<int_const&>();
LAB_10003aae4:
              eggs::variants::detail::throw_bad_variant_access<int_const&>();
LAB_10003aae9:
              eggs::variants::detail::throw_bad_variant_access<int_const&>();
              goto LAB_10003aaee;
            }
            local_6c8 = (unsigned long)*(uint *)psVar15;
          }
LAB_100039d00:
          local_b8 = 0;
          (*(code *)(&eggs::variants::detail::
                      visitor<eggs::variants::detail::copy_construct,void(void*,void_const*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[*(uint *)(psVar15 + 0x50)])(local_108,psVar15);
          local_b8 = *(uint *)(psVar15 + 0x50);
          local_a8 = *(unsigned long long *)(psVar15 + 0x60);
          local_a0 = *(unsigned int *)(psVar15 + 0x68);
          insertRulesIntoTemporary(local_680,local_688,local_108);
          (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[local_b8])(local_108);
          local_b8 = 0;
          psVar15 = psVar15 + 0x70;
        } while (psVar2 != psVar15);
        if ((local_748 & 1) != 0) {
          uVar7 = local_788 >> 1 & 0x7f;
          if ((local_788 & 1) != 0) {
            uVar7 = uStack_780;
          }
          if (uVar7 == 0) {
            local_7a8 = 0;
            lStack_7a0 = 0;
            LazyPicture::LazyPicture((LazyPicture *)local_158,&local_7a8);
            if (lStack_7a0 != 0) {
              // std code
            }
          }
          else {
            ManagerContainer::getImage((string *)local_158,*(PictureProperties **)local_680);
          }
          local_178 = 0;
          uStack_170 = 0;
          local_188 = 0;
          uStack_180 = 0;
          local_198 = 0;
          uStack_190 = 0;
          local_1a8 = 0;
          uStack_1a0 = 0;
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          ni::symbol::symbol((symbol *)&local_168);
          local_160 = 0;
          ni::symbol::symbol((symbol *)&local_2f8,"picture",7);
          local_168 = local_2f8;
          local_160 = 8;
          if ((local_178 & 0xffffffff) == 8) {
            if (local_138 == (long *)0x0) {
              local_78 = (function<// std code
            }
            else if (local_138 == local_158) {
              local_78 = (function<// std code
              (**(code **)(local_158[0] + 0x18))(local_158);
            }
            else {
              local_78 = (function<// std code
                         (**(code **)(*local_138 + 0x10))();
            }
            // std code
                      ((function<// std code
                       (function *)&local_1c8);
            if (local_78 == (function<// std code
              (**(code **)(local_98[0] + 0x20))
                        ((function<// std code
            }
            else if (local_78 != (function<// std code
              (**(code **)(*(long *)local_78 + 0x28))();
            }
            // std code
            __tree<// std code
            ::
            __assign_multi<// std code
                      ((__tree<// std code
                        *)&local_198,local_128,local_120);
            uVar5 = (uint)local_178;
          }
          else {
            (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>
                        ::
                        _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                        ::value)[local_178 & 0xffffffff])((LazyPicture *)&local_1c8);
            local_178 = local_178 & 0xffffffff00000000;
            LazyPicture::LazyPicture((LazyPicture *)&local_1c8,(LazyPicture *)local_158);
            local_178 = CONCAT44(local_178._4_4_,8);
            uVar5 = 8;
          }
          local_1e8 = 0;
          (*(code *)(&eggs::variants::detail::
                      visitor<eggs::variants::detail::copy_construct,void(void*,void_const*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[uVar5])(local_238,(LazyPicture *)&local_1c8);
          local_1e8 = (uint)local_178;
          local_1d8 = local_168;
          local_1d0 = local_160;
          insertRulesIntoTemporary(local_680,local_688,local_238);
          (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[local_1e8])(local_238);
          local_1e8 = 0;
          (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[local_178 & 0xffffffff])((LazyPicture *)&local_1c8);
          // std code
          __tree<// std code
          ::destroy((__tree<// std code
                     *)&local_128,local_120[0]);
          if (local_138 == local_158) {
            (**(code **)(local_158[0] + 0x20))(local_158);
          }
          else if (local_138 != (long *)0x0) {
            (**(code **)(*local_138 + 0x28))();
          }
        }
        iVar6 = (int)local_6c8;
        if ((local_740 & 1) != 0) {
          uVar7 = local_768 >> 1 & 0x7f;
          if ((local_768 & 1) != 0) {
            uVar7 = uStack_760;
          }
          if (uVar7 == 0) {
            local_798 = 0;
            lStack_790 = 0;
            LazyPicture::LazyPicture((LazyPicture *)local_288,&local_798);
            if (lStack_790 != 0) {
              // std code
            }
          }
          else {
            ManagerContainer::getImage((string *)local_288,*(PictureProperties **)local_680);
          }
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_2b8 = 0;
          uStack_2b0 = 0;
          local_2c8 = 0;
          uStack_2c0 = 0;
          local_2d8 = 0;
          uStack_2d0 = 0;
          local_2e8 = 0;
          uStack_2e0 = 0;
          local_2f8 = 0;
          uStack_2f0 = 0;
          ni::symbol::symbol((symbol *)&local_298);
          local_290 = 0;
          ni::symbol::symbol((symbol *)&local_1c8,"dye-mask-picture",0x10);
          local_298 = local_1c8;
          local_290 = 8;
          if ((local_2a8 & 0xffffffff) == 8) {
            if (local_268 == (long *)0x0) {
              local_48 = (function<// std code
            }
            else if (local_268 == local_288) {
              local_48 = (function<// std code
              (**(code **)(local_288[0] + 0x18))(local_288);
            }
            else {
              local_48 = (function<// std code
                         (**(code **)(*local_268 + 0x10))();
            }
            // std code
                      ((function<// std code
                       (function *)&local_2f8);
            if (local_48 == (function<// std code
              (**(code **)(local_68[0] + 0x20))
                        ((function<// std code
            }
            else if (local_48 != (function<// std code
              (**(code **)(*(long *)local_48 + 0x28))();
            }
            // std code
            __tree<// std code
            ::
            __assign_multi<// std code
                      ((__tree<// std code
                        *)&local_2c8,local_258,local_250);
            uVar5 = (uint)local_2a8;
          }
          else {
            (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>
                        ::
                        _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                        ::value)[local_2a8 & 0xffffffff])(&local_2f8);
            local_2a8 = local_2a8 & 0xffffffff00000000;
            LazyPicture::LazyPicture((LazyPicture *)&local_2f8,(LazyPicture *)local_288);
            local_2a8 = CONCAT44(local_2a8._4_4_,8);
            uVar5 = 8;
          }
          local_318 = 0;
          (*(code *)(&eggs::variants::detail::
                      visitor<eggs::variants::detail::copy_construct,void(void*,void_const*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[uVar5])(local_368,&local_2f8);
          local_318 = (uint)local_2a8;
          local_308 = local_298;
          local_300 = local_290;
          insertRulesIntoTemporary(local_680,local_688,local_368);
          (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[local_318])(local_368);
          local_318 = 0;
          (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[local_2a8 & 0xffffffff])(&local_2f8);
          // std code
          __tree<// std code
          ::destroy((__tree<// std code
                     *)&local_258,local_250[0]);
          if (local_268 == local_288) {
            (**(code **)(local_288[0] + 0x20))(local_288);
          }
          else if (local_268 != (long *)0x0) {
            (**(code **)(*local_268 + 0x28))();
          }
        }
        if ((local_6b0 & 1) != 0) {
          local_388 = 0;
          uStack_380 = 0;
          local_3d8[8] = 0;
          local_3d8[9] = 0;
          local_3d8[6] = 0;
          local_3d8[7] = 0;
          local_3d8[4] = 0;
          local_3d8[5] = 0;
          local_3d8[2] = 0;
          local_3d8[3] = 0;
          local_3d8[0] = 0;
          local_3d8[1] = 0;
          ni::symbol::symbol((symbol *)&local_378);
          local_370 = 0;
          ni::symbol::symbol((symbol *)&local_1c8,"picture-displacement",0x14);
          local_378 = local_1c8;
          local_370 = 9;
          if ((local_388 & 0xffffffff) == 7) {
            local_448[0] = (unsigned long)local_690 | local_6a0 << 0x20;
          }
          else {
            (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>
                        ::
                        _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                        ::value)[local_388 & 0xffffffff])(local_3d8);
            local_448[0] = (unsigned long)local_690 | local_6a0 << 0x20;
            local_388 = CONCAT44(local_388._4_4_,7);
          }
          local_3f8 = 7;
          local_3e8 = local_378;
          local_3e0 = local_370;
          local_3d8[0] = local_448[0];
          insertRulesIntoTemporary(local_680,local_688,local_448);
          (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[local_3f8])(local_448);
          local_3f8 = 0;
          (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[local_388 & 0xffffffff])(local_3d8);
        }
        if ((local_6a8 & 1) != 0) {
          local_468 = 0;
          uStack_460 = 0;
          local_4b8[8] = 0;
          local_4b8[9] = 0;
          local_4b8[6] = 0;
          local_4b8[7] = 0;
          local_4b8[4] = 0;
          local_4b8[5] = 0;
          local_4b8[2] = 0;
          local_4b8[3] = 0;
          local_4b8[0] = 0;
          local_4b8[1] = 0;
          ni::symbol::symbol((symbol *)&local_458);
          local_450 = 0;
          ni::symbol::symbol((symbol *)&local_1c8,"text-displacement",0x11);
          local_458 = local_1c8;
          local_450 = 9;
          if ((local_468 & 0xffffffff) == 7) {
            local_528[0] = (unsigned long)local_68c | local_698 << 0x20;
          }
          else {
            (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>
                        ::
                        _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                        ::value)[local_468 & 0xffffffff])(local_4b8);
            local_528[0] = (unsigned long)local_68c | local_698 << 0x20;
            local_468 = CONCAT44(local_468._4_4_,7);
          }
          local_4d8 = 7;
          local_4c8 = local_458;
          local_4c0 = local_450;
          local_4b8[0] = local_528[0];
          insertRulesIntoTemporary(local_680,local_688,local_528);
          (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[local_4d8])(local_528);
          local_4d8 = 0;
          (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[local_468 & 0xffffffff])(local_4b8);
        }
      }
      local_548 = 0;
      uStack_540 = 0;
      local_558 = 0;
      uStack_550 = 0;
      local_568 = 0;
      uStack_560 = 0;
      local_578 = 0;
      uStack_570 = 0;
      local_588 = 0;
      uStack_580 = 0;
      local_598 = 0;
      uStack_590 = 0;
      ni::symbol::symbol((symbol *)&local_538);
      local_530 = 0;
      ni::symbol::symbol((symbol *)&local_1c8,"font",4);
      local_538 = local_1c8;
      local_530 = 7;
      uVar7 = (unsigned long)((byte)local_730[0] >> 1);
      if (((byte)local_730[0] & 1) != 0) {
        uVar7 = local_728;
      }
      if (uVar7 == 0) {
        if (((uVar16 != 0) || ((int)local_6b8 != (int)0)) ||
           (iVar6 != (int)(0 >> 0x20))) {
          pFVar8 = (FontEngine *)UIA::getSystemFontEngine();
          local_7f8 = 0;
          uStack_7f0 = 0;
          local_7e8 = 0;
          local_7e0 = (unsigned int)local_6b8;
          local_7dc = iVar6;
          local_7d8 = uVar16;
          local_7d0 = UIA::FontEngine::handle(pFVar8);
          uVar9 = ManagerContainer::getFont
                            (*(ManagerContainer **)local_680,(CreateData *)&local_7f8);
          if ((local_548 & 0xffffffff) != 6) {
            (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>
                        ::
                        _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                        ::value)[local_548 & 0xffffffff])(&local_598);
            local_548 = CONCAT44(local_548._4_4_,6);
          }
          local_628 = 6;
          local_618 = local_538;
          local_610 = local_530;
          local_678[0] = uVar9;
          local_598 = uVar9;
          insertRulesIntoTemporary(local_680,local_688,local_678);
          (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[local_628])(local_678);
          local_628 = 0;
          psVar15 = (string *)&local_7f8;
          goto LAB_10003a8b5;
        }
      }
      else {
        pFVar8 = (FontEngine *)UIA::getSystemFontEngine();
        // std code
        local_808 = (uint)((byte)local_6c0 & 1) << 3 | uVar16;
        local_810 = 0;
        local_80c = iVar6;
        local_800 = UIA::FontEngine::handle(pFVar8);
        uVar9 = ManagerContainer::getFont(*(ManagerContainer **)local_680,(CreateData *)local_828);
        if ((local_548 & 0xffffffff) != 6) {
          (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                      _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                      ::value)[local_548 & 0xffffffff])(&local_598);
          local_548 = CONCAT44(local_548._4_4_,6);
        }
        local_5b8 = 6;
        local_5a8 = local_538;
        local_5a0 = local_530;
        local_608[0] = uVar9;
        local_598 = uVar9;
        insertRulesIntoTemporary(local_680,local_688,local_608);
        (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                    _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                    ::value)[local_5b8])(local_608);
        local_5b8 = 0;
        psVar15 = local_828;
LAB_10003a8b5:
        // std code
      }
      (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                  _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                  ::value)[local_548 & 0xffffffff])(&local_598);
      // std code
      // std code
      // std code
      local_688 = local_688 + 0x38;
    } while (local_688 != local_7c8);
    if (*(StyleSheet **)local_7b0 != local_738) {
      pSVar1 = local_680 + 0x10;
      pSVar14 = *(StyleSheet **)local_7b0;
      do {
        pSVar12 = local_7c0;
        pSVar11 = local_7c0;
        if (*(StyleSheet **)local_7c0 != (StyleSheet *)0x0) {
          pSVar3 = *(StyleSheet **)local_7c0;
          pSVar12 = pSVar1;
          do {
            while (pSVar11 = pSVar3, *(unsigned long *)(pSVar14 + 0x20) < *(unsigned long *)(pSVar11 + 0x20)) {
              pSVar3 = *(StyleSheet **)pSVar11;
              pSVar12 = pSVar11;
              if (*(StyleSheet **)pSVar11 == (StyleSheet *)0x0) goto LAB_10003a996;
            }
            if (*(unsigned long *)(pSVar14 + 0x20) <= *(unsigned long *)(pSVar11 + 0x20)) break;
            pSVar12 = pSVar11 + 8;
            pSVar3 = *(StyleSheet **)(pSVar11 + 8);
          } while (*(StyleSheet **)(pSVar11 + 8) != (StyleSheet *)0x0);
        }
LAB_10003a996:
        p_Var10 = *(__tree_node_base **)pSVar12;
        if (p_Var10 == (__tree_node_base *)0x0) {
          p_Var10 = (__tree_node_base *)new(0x40);
          pSVar3 = local_680;
          *(long *)(p_Var10 + 0x20) = *(long *)(pSVar14 + 0x20);
          *(unsigned long long *)(p_Var10 + 0x38) = 0;
          *(unsigned long long *)(p_Var10 + 0x30) = 0;
          *(unsigned long long *)(p_Var10 + 0x28) = 0;
          *(unsigned long long *)(p_Var10 + 8) = 0;
          *(unsigned long long *)p_Var10 = 0;
          *(StyleSheet **)(p_Var10 + 0x10) = pSVar11;
          *(__tree_node_base **)pSVar12 = p_Var10;
          p_Var13 = p_Var10;
          if (**(long **)local_7b8 != 0) {
            *(long *)local_7b8 = **(long **)local_7b8;
            p_Var13 = *(__tree_node_base **)pSVar12;
          }
          // std code
                    (*(__tree_node_base **)(local_680 + 0x10),p_Var13);
          *(long *)(pSVar3 + 0x18) = *(long *)(pSVar3 + 0x18) + 1;
        }
        // std code
        vector<// std code
        ::
        insert<// std code
                  ((vector<// std code
                    *)(p_Var10 + 0x28),*(unsigned long long *)(p_Var10 + 0x30),*(long *)(pSVar14 + 0x28),
                   pSVar14 + 0x30);
        pSVar12 = *(StyleSheet **)(pSVar14 + 8);
        if (*(StyleSheet **)(pSVar14 + 8) == (StyleSheet *)0x0) {
          pSVar11 = *(StyleSheet **)(pSVar14 + 0x10);
          if (*(StyleSheet **)pSVar11 != pSVar14) {
            do {
              pSVar14 = *(StyleSheet **)(pSVar14 + 0x10);
              pSVar11 = *(StyleSheet **)(pSVar14 + 0x10);
            } while (*(StyleSheet **)pSVar11 != pSVar14);
          }
        }
        else {
          do {
            pSVar11 = pSVar12;
            pSVar12 = *(StyleSheet **)pSVar11;
          } while (*(StyleSheet **)pSVar11 != (StyleSheet *)0x0);
        }
        pSVar14 = pSVar11;
      } while (pSVar11 != local_738);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_38) {
    return;
  }
LAB_10003aaee:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
