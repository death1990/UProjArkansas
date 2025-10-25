#include "PlayerTPVWeaponAnimations.h"

UPlayerTPVWeaponAnimations::UPlayerTPVWeaponAnimations() {
    this->GetUpFromFaceDownPose.AddDefaulted(1);
    this->GetUpFromFaceUpPose.AddDefaulted(1);
    this->CombatRightHandPoseOverride = NULL;
    this->CombatBasePose_AdditiveAdjust = NULL;
    this->WeaponDownStart = NULL;
    this->WeaponDownLoop = NULL;
    this->WeaponDownEnd = NULL;
    this->NonCombatBasePose_AdditiveAdjust = NULL;
    this->PlayerAnimData = NULL;
}


