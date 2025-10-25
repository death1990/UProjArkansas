#include "BeaconComponent.h"

UBeaconComponent::UBeaconComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachSocket = TEXT("Head");
    this->VerticalOffset = 50.00f;
    this->bUpdateBeaconDataCurrentFloor = true;
}

void UBeaconComponent::Show() {
}

void UBeaconComponent::Hide() {
}


