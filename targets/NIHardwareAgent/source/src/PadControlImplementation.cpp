#include <ni/controller_editor/PadControlImplementation.hpp>
namespace NI::NHL2::SERVER {

void PadControlImplementation::forgetPadValues(bool param_1) {
}

void PadControlImplementation::getPadProperty(unsigned int, unsigned int&) const {
byte bVar1;
  uint uVar2;
  PadControl *this_00;
  
  if ((int)param_1 < 0x50727331) {
    if ((int)param_1 < 0x50616443) {
      if (param_1 == 0x48697430) {
        this_00 = *(PadControl **)(this + 8);
        uVar2 = 6;
      }
      else {
        if (param_1 != 0x48697431) {
          return 0;
        }
        this_00 = *(PadControl **)(this + 8);
        uVar2 = 7;
      }
    }
    else {
      if (param_1 == 0x50616443) {
        bVar1 = PadControl::getCompensation(*(PadControl **)(this + 8));
        uVar2 = (uint)bVar1;
        goto LAB_100080712;
      }
      if (param_1 == 0x50616456) {
        uVar2 = (uint)(byte)this[0x10];
        goto LAB_100080712;
      }
      if (param_1 != 0x50727330) {
        return 0;
      }
      this_00 = *(PadControl **)(this + 8);
      uVar2 = 0;
    }
  }
  else if ((int)param_1 < 0x53774831) {
    if (param_1 == 0x50727331) {
      this_00 = *(PadControl **)(this + 8);
      uVar2 = 1;
    }
    else {
      if (param_1 != 0x53774830) {
        return 0;
      }
      this_00 = *(PadControl **)(this + 8);
      uVar2 = 4;
    }
  }
  else if (param_1 == 0x53774831) {
    this_00 = *(PadControl **)(this + 8);
    uVar2 = 5;
  }
  else if (param_1 == 0x53774c30) {
    this_00 = *(PadControl **)(this + 8);
    uVar2 = 2;
  }
  else {
    if (param_1 != 0x53774c31) {
      return 0;
    }
    this_00 = *(PadControl **)(this + 8);
    uVar2 = 3;
  }
  uVar2 = PadControl::getThresholdParameter(this_00,uVar2);
LAB_100080712:
  *param_2 = uVar2;
  return 1;
}

void PadControlImplementation::getPadSensitivity() const {
return (int)(*(float *)(*(long *)(this + 8) + 0x1ec) * 1000.0 + 0.5) & 0xffff;
}

void PadControlImplementation::getPadVelocity() const {
return this[0x10];
}

void PadControlImplementation::readPadCompensationData(bool param_1) {
    }
  }
  else {
    PadControl::setCompensationData
              (*(PadControl **)(this + 8),(ushort *)((long)local_68 + 1),
               (ushort *)((long)local_50 + 1));
    PadControl::setCompensation(*(PadControl **)(this + 8),param_1);
  }
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    delete(local_50);
  }
  if (local_68 != (void *)0x0) {
    local_60 = local_68;
    delete(local_68);
  }
  return;
}

void PadControlImplementation::resetPadStates() {
PadControl::init(*(PadControl **)(this + 8));
  return;
}

void PadControlImplementation::setNewFoilParams() {
PadControl::setThresholdParameter(*(PadControl **)(this + 8),5,300);
  return;
}

void PadControlImplementation::setPadProperty(unsigned int, unsigned int) {
uint uVar1;
  PadControl *this_00;
  
  if ((int)param_1 < 0x50727331) {
    if ((int)param_1 < 0x50616443) {
      if (param_1 == 0x48697430) {
        this_00 = *(PadControl **)(this + 8);
        uVar1 = 6;
      }
      else {
        if (param_1 != 0x48697431) {
          return 0;
        }
        this_00 = *(PadControl **)(this + 8);
        uVar1 = 7;
      }
    }
    else {
      if (param_1 == 0x50616443) {
        PadControl::setCompensation(*(PadControl **)(this + 8),param_2 != 0);
        return 1;
      }
      if (param_1 == 0x50616456) {
        if (6 < param_2) {
          return 1;
        }
        if ((byte)this[0x10] != param_2) {
          this[0x10] = SUB41(param_2,0);
          return 1;
        }
        return 1;
      }
      if (param_1 != 0x50727330) {
        return 0;
      }
      this_00 = *(PadControl **)(this + 8);
      uVar1 = 0;
    }
  }
  else if ((int)param_1 < 0x53774831) {
    if (param_1 == 0x50727331) {
      this_00 = *(PadControl **)(this + 8);
      uVar1 = 1;
    }
    else {
      if (param_1 != 0x53774830) {
        return 0;
      }
      this_00 = *(PadControl **)(this + 8);
      uVar1 = 4;
    }
  }
  else if (param_1 == 0x53774831) {
    this_00 = *(PadControl **)(this + 8);
    uVar1 = 5;
  }
  else if (param_1 == 0x53774c30) {
    this_00 = *(PadControl **)(this + 8);
    uVar1 = 2;
  }
  else {
    if (param_1 != 0x53774c31) {
      return 0;
    }
    this_00 = *(PadControl **)(this + 8);
    uVar1 = 3;
  }
  PadControl::setThresholdParameter(this_00,uVar1,param_2);
  return 1;
}

void PadControlImplementation::setPadSensitivity(unsigned short) {
void6 in_register_00000032;
  float fVar1;
  float local_c;
  
  if ((uint)CONCAT62(in_register_00000032,param_1) < 0x3e9) {
    fVar1 = 0.0;
    if (0.0 <= (float)param_1 / 1000.0) {
      fVar1 = (float)param_1 / 1000.0;
    }
    local_c = 1.0;
    if (fVar1 <= 1.0) {
      local_c = fVar1;
    }
    PadControl::setSensitivity(*(PadControl **)(this + 8),&local_c);
  }
  return;
}

void PadControlImplementation::setPadVelocity(unsigned char) {
if (param_1 < 7) {
    this[0x10] = (PadControlImplementation)param_1;
  }
  return;
}

PadControlImplementation::~PadControlImplementation() {
PadControl *this_00;
  
  *(void ***)this = &PTR__PadControlImplementation_1009d8670;
  this_00 = *(PadControl **)(this + 8);
  *(unsigned long long *)(this + 8) = 0;
  if (this_00 != (PadControl *)0x0) {
    PadControl::~PadControl(this_00);
    delete(this_00);
  }
  delete(this);
  return;
}
}
