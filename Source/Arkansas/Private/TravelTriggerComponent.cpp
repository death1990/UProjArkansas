#include "TravelTriggerComponent.h"

UTravelTriggerComponent::UTravelTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TravelDestinationData = NULL;
    this->bHideTransition = false;
}

void UTravelTriggerComponent::OnOverlapActor(AActor* OverlappedActor, AActor* OtherActor) {
}

void UTravelTriggerComponent::OnOpen(AActor* OpeningActor) {
}

void UTravelTriggerComponent::OnInteract(const FInteractionDescription& Description) {
}

FString UTravelTriggerComponent::GetDebugString() const {
    return TEXT("");
}

FString UTravelTriggerComponent::GetAreaName() const {
    return TEXT("");
}

FString UTravelTriggerComponent::GetAreaDescription() const {
    return TEXT("");
}


