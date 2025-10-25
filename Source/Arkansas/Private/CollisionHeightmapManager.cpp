#include "CollisionHeightmapManager.h"

ACollisionHeightmapManager::ACollisionHeightmapManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StreamInDistanceSquared = 100000000;
    this->StreamOutDistanceSquared = 156250000;
}


