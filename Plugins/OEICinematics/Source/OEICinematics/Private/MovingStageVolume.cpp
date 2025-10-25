#include "MovingStageVolume.h"
#include "MovingStageBoxComponent.h"

AMovingStageVolume::AMovingStageVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<UMovingStageBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent = (UMovingStageBoxComponent*)RootComponent;
}


