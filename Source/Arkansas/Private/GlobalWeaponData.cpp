#include "GlobalWeaponData.h"

UGlobalWeaponData::UGlobalWeaponData() {
    this->NPCVsNPCDamageMultiplier = 1.00f;
    this->MaxCritChanceRangedWeapons = 0.25f;
    this->MaxCritChanceMeleeWeapons = 0.50f;
    this->StaminaOnKill = 0.30f;
    this->TimeDilationMeterOnKill = 0.30f;
    this->CalledShotToStaminaConversionRatio = 1.00f;
    this->CalledShotMinSuccessRatio = 0.33f;
    this->ShootSocket = TEXT("Muzzle");
    this->ProjectorBaseSocket = TEXT("ProjectorBase");
    this->StateWidgetSocket = TEXT("WeaponStateWidget");
    this->ProjectorEndBone = TEXT("ProjectorEndBone");
    this->ProjectorEndSocket = TEXT("ProjectorEnd");
    this->NRayIgnoreDTPercent = 0.25f;
    this->NormalUnequipTime = 0.30f;
    this->QuickUnequipTime = 0.15f;
    this->NormalEquipTime = 0.45f;
    this->QuickEquipTime = 0.45f;
    this->WeaponDownTimeP1P = 15.00f;
    this->WeaponDownTimeP3P = 2.00f;
    this->FirstRaiseMinTime = 30.00f;
    this->TimeHolsteredFirstRaiseTime = 600.00f;
    this->IdleCameraFirstRaiseTime = 1.00f;
    this->WeaponOffsetChangeDelay = 1.00f;
}


