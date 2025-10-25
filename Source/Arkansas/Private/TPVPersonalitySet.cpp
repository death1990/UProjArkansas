#include "TPVPersonalitySet.h"

UTPVPersonalitySet::UTPVPersonalitySet() {
    this->NonCombatLocomotionData = NULL;
    this->GetUpFromFaceDownPose.AddDefaulted(1);
    this->GetUpFromFaceUpPose.AddDefaulted(1);
    this->PersonalityIdleAdditive = NULL;
    this->bLeftHandIKDefault = false;
    this->bAllowNonCombatStance = true;
    this->bUseAltIKTargets = false;
    this->AnimationWalkSpeed = 120.00f;
    this->AnimationRunSpeed = 480.00f;
    this->AnimationRunSpeedThreshold = -1.00f;
    this->DeathMontages = NULL;
    this->LadderAnimations = NULL;
    this->ParkourAnimations = NULL;
    this->DropDownAnimations = NULL;
    this->JumpAcrossAnimations = NULL;
    this->DistractionAnimations = NULL;
    this->StartledAnimation = NULL;
    this->AlertedToCautiousAnimation = NULL;
    this->CautiousToUnawareAnimation = NULL;
    this->PowerUpAnimation = NULL;
    this->bHolsterWeapon = false;
}


