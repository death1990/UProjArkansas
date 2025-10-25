#include "WeaponActorSpawnData.h"

UWeaponActorSpawnData::UWeaponActorSpawnData() {
    this->ConditionalImpactType = EActorSpawnImpactType::Default;
    this->SpawnActorClass = NULL;
    this->LocationSetting = ESpawnActorEventLocationSetting::MatchTargetActor;
    this->RotationSetting = ESpawnActorEventRotationSetting::MatchTargetActor;
    this->RayTraceUp = 100.00f;
    this->RayTraceDown = -100.00f;
    this->bOnlySpawnActorOnGround = false;
    this->MaximumGroundAngleAllowed = 90.00f;
    this->Scale = 1.00f;
    this->bForceAttackTarget = false;
    this->VerticalSpawnOffset = 100.00f;
    this->SuccessfulSpawnFxSystem = NULL;
    this->FailToSpawnFxSystem = NULL;
}


