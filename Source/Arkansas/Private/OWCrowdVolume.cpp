#include "OWCrowdVolume.h"

AOWCrowdVolume::AOWCrowdVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeamDataForCrowdCharacters = NULL;
    this->NumberOfAnimProxiesInVolume = 0;
    this->ExpectedNumberOfCrowdNPCs = 0;
}

bool AOWCrowdVolume::ContainsPoint(FVector Point, float Radius) {
    return false;
}


