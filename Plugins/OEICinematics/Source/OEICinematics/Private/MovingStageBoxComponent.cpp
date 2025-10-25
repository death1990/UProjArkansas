#include "MovingStageBoxComponent.h"

UMovingStageBoxComponent::UMovingStageBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bMultiBodyOverlap = true;
    this->CanCharacterStepUpOn = ECB_No;
}

void UMovingStageBoxComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


