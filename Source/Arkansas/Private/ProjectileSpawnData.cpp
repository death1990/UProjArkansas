#include "ProjectileSpawnData.h"

UProjectileSpawnData::UProjectileSpawnData() {
    this->ProjectileClass = NULL;
    this->SpawnDirection = EProjectileSpawnDirection::WorldUp;
    this->SpawnTimeMin = 0.01f;
    this->SpawnTimeMax = 0.01f;
    this->NumToSpawn = 1;
}


