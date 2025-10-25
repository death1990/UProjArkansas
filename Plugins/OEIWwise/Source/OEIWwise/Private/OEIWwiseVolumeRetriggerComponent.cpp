#include "OEIWwiseVolumeRetriggerComponent.h"

UOEIWwiseVolumeRetriggerComponent::UOEIWwiseVolumeRetriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->CurrentActiveEmitterCount = 0;
    this->RetriggerRate = 3.00f;
    this->CurrentTime = 10.00f;
}

void UOEIWwiseVolumeRetriggerComponent::StopEmitterIndex(const int32 Index) {
}

void UOEIWwiseVolumeRetriggerComponent::StopAllRetriggeringEmitters() {
}

void UOEIWwiseVolumeRetriggerComponent::RefreshVolumeData() {
}

void UOEIWwiseVolumeRetriggerComponent::PlayRandomEmitterEntry() {
}

void UOEIWwiseVolumeRetriggerComponent::PlayIdleEmitters() {
}

void UOEIWwiseVolumeRetriggerComponent::PlayEmitterIndex(const int32 Index) {
}

void UOEIWwiseVolumeRetriggerComponent::PlayAllRetriggeringEmitters() {
}

void UOEIWwiseVolumeRetriggerComponent::OnExitVolumeEndOverlap(AActor* Actor, AActor* OtherActor) {
}

void UOEIWwiseVolumeRetriggerComponent::OnEnterVolumeBeginOverlap(AActor* Actor, AActor* OtherActor) {
}

bool UOEIWwiseVolumeRetriggerComponent::IsEmitterIndexActive(const int32 Index) const {
    return false;
}

int32 UOEIWwiseVolumeRetriggerComponent::GetRandomIdleEmitterIndex() const {
    return 0;
}

TArray<int32> UOEIWwiseVolumeRetriggerComponent::GetIdleEmitterIndices() const {
    return TArray<int32>();
}


