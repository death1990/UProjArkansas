#include "PrimaryWeaponVisuals.h"

UPrimaryWeaponVisuals::UPrimaryWeaponVisuals() {
    this->ReticleVisuals = NULL;
    this->bUsesAimOffsets = true;
    this->bShouldAddReticleOffsetToAimOffset = false;
    this->bSetFineAimAutomatically = true;
    this->bAllowFineAimNormalizedStart = false;
    this->bUseCodeDrivenFineAimToggles = false;
}

void UPrimaryWeaponVisuals::DoBoneHideBP(FName BoneName, bool bVisibility) {
}



