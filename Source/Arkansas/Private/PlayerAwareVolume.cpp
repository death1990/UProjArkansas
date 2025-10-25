#include "PlayerAwareVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

APlayerAwareVolume::APlayerAwareVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}

void APlayerAwareVolume::FastTravelInitiated(const UPointOfInterestData* TravelData, float TimePassed) {
}


