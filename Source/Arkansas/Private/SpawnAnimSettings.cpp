#include "SpawnAnimSettings.h"

FSpawnAnimSettings::FSpawnAnimSettings() {
    this->AnimationType = AnimType_AnimProxy;
    this->AnimationMontage = NULL;
    this->AnimationProxyActor = NULL;
    this->bAnimMontageSyncedToEmergeNode = false;
    this->bAnimMontageUseMotionWarp = false;
    this->bMotionWarpSnapToGround = false;
}

