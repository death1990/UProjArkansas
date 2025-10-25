#include "CharacterDeathDamageInfo.h"

FCharacterDeathDamageInfo::FCharacterDeathDamageInfo() {
    this->DmgType = NULL;
    this->bCalledShot = false;
    this->bCritical = false;
    this->bStealth = false;
    this->ImpulseOverride = 0.00f;
    this->bIsGibbing = false;
    this->bAllBonesBroken = false;
    this->bBreakBoneRemoved = false;
    this->bStealthKill = false;
    this->bRadial = false;
    this->bInnerRadial = false;
    this->PreferredDeathClass = NULL;
}

