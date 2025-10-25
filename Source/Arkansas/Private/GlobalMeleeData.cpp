#include "GlobalMeleeData.h"

UGlobalMeleeData::UGlobalMeleeData() {
    this->MeleeBlockRadians = 1.57f;
    this->RangedBlockRadians = 0.79f;
    this->PerfectBlockDuration = 0.25f;
    this->MinAnimationSpeed = 0.75f;
    this->MaxAnimationSpeed = 1.33f;
    this->AttackInterruptCooldown = 1.00f;
    this->BlockMaterials = NULL;
}


