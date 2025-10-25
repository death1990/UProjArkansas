#include "SpawnActorEventEffect.h"

USpawnActorEventEffect::USpawnActorEventEffect() {
    this->SpawnActorClass = NULL;
    this->LocationSetting = ESpawnActorEventLocationSetting::MatchTargetActor;
    this->RotationSetting = ESpawnActorEventRotationSetting::MatchTargetActor;
}


