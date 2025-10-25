#include "ActorPoolConfiguration.h"

FActorPoolConfiguration::FActorPoolConfiguration() {
    this->PoolingMethod = EActorPoolingMethod::Unregister;
    this->ActorClass = NULL;
    this->MaxActorsToRetain = 0;
    this->DesiredFreeActors = 0;
    this->bCanSpawnMoreThanMaxActors = false;
    this->bReuseOldestActorsWhenExhausted = false;
    this->bDeferSpawnRequests = false;
}

