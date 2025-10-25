#include "ServicePOIComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

UServicePOIComponent::UServicePOIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->POIData = NULL;
    this->DiscoverRadius = 100.00f;
    this->DiscoverBounds = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DiscoverBounds"));
}

void UServicePOIComponent::OnPlayerPawnOverlappedDiscover(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


