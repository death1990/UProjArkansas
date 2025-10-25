#include "TurretWeaponSlot.h"

FTurretWeaponSlot::FTurretWeaponSlot() {
    this->Weapon = NULL;
    this->State = ETurretFireState::None;
    this->StateTime = 0.00f;
    this->RoundsPerBurst = 0;
    this->NumberOfBursts = 0;
    this->bInRange = false;
    this->bInFieldOfFire = false;
    this->bInFieldOfFireSightless = false;
    this->bTargetOutOfFieldOfFire = false;
    this->bTargetOutOfFieldOfFireSightless = false;
    this->bNeedEndTrigger = false;
    this->bEnable = false;
    this->MutuallyExclusiveSlotIndex = 0;
    this->bApplyToCannonYawPitch = false;
    this->TurretType = ETurretType::Direct;
    this->PitchOffset = 0.00f;
    this->ProjectileSpeed = 0.00f;
    this->bUseSocketDirection = false;
    this->FiringArcDegrees = 0.00f;
    this->bSafetyCheck = false;
    this->MinimumRange = 0.00f;
    this->MaximumRange = 0.00f;
    this->bDebug = false;
    this->FireTime = 0.00f;
    this->CooldownTime = 0.00f;
    this->bNoSpread = false;
    this->DeployTime = 0.00f;
    this->RetractTime = 0.00f;
    this->bWantToDeploy = false;
    this->bAnimDeploy = false;
    this->bIsDeployed = false;
    this->DeployState = ETurretDeployState::Retracted;
    this->DeployStateTimer = 0.00f;
    this->Logic = NULL;
}

