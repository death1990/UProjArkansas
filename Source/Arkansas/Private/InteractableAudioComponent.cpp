#include "InteractableAudioComponent.h"
#include "EventEffectState.h"

UInteractableAudioComponent::UInteractableAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WwiseObjectPoolWrapper = NULL;
    this->EventEffectState = CreateDefaultSubobject<UEventEffectState>(TEXT("EventEffectState"));
}

void UInteractableAudioComponent::TriggerEventByTag(const FGameplayTag& EventTag) {
}

void UInteractableAudioComponent::StopEventByTag(const FGameplayTag& EventTag) {
}

void UInteractableAudioComponent::LeaveStateByTag(const FGameplayTag& StateTag) {
}

void UInteractableAudioComponent::EnterStateByTag(const FGameplayTag& StateTag) {
}


