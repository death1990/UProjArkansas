#include "IndianaAudioComponent.h"
#include "EventEffectState.h"

UIndianaAudioComponent::UIndianaAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->PerspectiveSwitchValueOverride = NULL;
    this->CreatureTypeSwitchValue = NULL;
    this->FootstepEventOverride = NULL;
    this->CurrentFootstepAudio = NULL;
    this->EventEffectState = CreateDefaultSubobject<UEventEffectState>(TEXT("EventEffectState"));
    this->AnimationAudioSet = NULL;
    this->AnimationGameplayTagSet = NULL;
    this->bCanUseExplicitPostProcess = true;
}

void UIndianaAudioComponent::UpdateFootstepRTPCs() {
}

void UIndianaAudioComponent::OnUsingFurnitureStateChanged(bool bNewUsingFurnitureState) {
}

void UIndianaAudioComponent::OnUglyStick(bool bUglyStick) {
}

void UIndianaAudioComponent::OnStopClimb() {
}

void UIndianaAudioComponent::OnStartClimb() {
}

void UIndianaAudioComponent::OnSpecialMovementEvent(ESpecialMovementEvent SpecialEvent, const FVector& position, const FVector& Normal, TEnumAsByte<EPhysicalSurface> PhysMaterial) {
}

void UIndianaAudioComponent::OnRagdollImpact(const FVector& NormalImpulse, const FHitResult& HitResult) {
}

void UIndianaAudioComponent::OnNewFootstepData(const UFootstepData* NewData) {
}

void UIndianaAudioComponent::OnLanded(float FallDistance, const FVector& position, const FVector& Normal, TEnumAsByte<EPhysicalSurface> PhysMaterial) {
}

void UIndianaAudioComponent::OnJumpAnimStateChanged(bool bNewJumpAnimState) {
}

void UIndianaAudioComponent::OnFootstep(EFootID FootID, EFootstepType FootstepType, const FVector& position, const FVector& Normal, TEnumAsByte<EPhysicalSurface> PhysMaterial) {
}

void UIndianaAudioComponent::OnDodge(EDodgeDirection Direction, const FVector& position, const FVector& Normal, TEnumAsByte<EPhysicalSurface> PhysMaterial) {
}


