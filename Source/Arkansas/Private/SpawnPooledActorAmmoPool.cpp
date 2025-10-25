#include "SpawnPooledActorAmmoPool.h"

USpawnPooledActorAmmoPool::USpawnPooledActorAmmoPool() {
    this->PoolSize = 3;
    this->DryFireReloadCooldownTime = 3.00f;
    this->bNPCAmmoPool = false;
    this->ActorPool = NULL;
}


