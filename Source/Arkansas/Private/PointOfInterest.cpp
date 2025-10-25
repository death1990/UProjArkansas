#include "PointOfInterest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

APointOfInterest::APointOfInterest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->PointOfInterestData = NULL;
    this->DiscoveryBounds = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DiscoveryBounds"));
    this->TierOverride = ESkillDifficultyTier::Invalid;
    this->DiscoveryBounds->SetupAttachment(RootComponent);
}

void APointOfInterest::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


