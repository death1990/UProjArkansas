#include "SpawnActorStatusEffect.h"

USpawnActorStatusEffect::USpawnActorStatusEffect() {
    this->bAllowOnDead = true;
    this->bAttachToTarget = true;
    this->bDeleteActor = true;
    this->LocationSetting = ESpawnActorEventLocationSetting::MatchTargetActor;
    this->RotationSetting = ESpawnActorEventRotationSetting::MatchTargetActor;
    this->SpawnActorClass = NULL;
    this->SpawnData = NULL;
}


