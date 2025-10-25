#include "DeathClass.h"

UDeathClass::UDeathClass() {
    this->DeathType = EDeathType::Ragdoll;
    this->bHideWeapon = true;
    this->ImpactImpulseMultiplier = 1.00f;
    this->FadeOut = 0.00f;
    this->EmissiveLevel = 0.00f;
    this->Reveal_Base_Color = NULL;
    this->Reveal_RMEA = NULL;
    this->Reveal_Normal = NULL;
    this->RevealAmount = 0.00f;
    this->RevealEdgeTightness = 0.00f;
    this->LeadingEdgeAmount = 0.00f;
    this->LeadingEdgeBlend = 0.00f;
    this->DeathComponent = NULL;
    this->Owner = NULL;
    this->OwnerSkeletalMeshComponent = NULL;
    this->OwnerAppearanceComponent = NULL;
    this->bTransitionStarted = false;
    this->TransitionTimePrimary = 0.00f;
    this->TransitionTimeSecondary = 0.00f;
    this->TransitionRevealAmount = 0.00f;
    this->TransitionEmissiveLevel = 0.00f;
    this->TransitionCompletionDelay = 0.00f;
}


UAkAudioEvent* UDeathClass::FindAudioEvent(const FGameplayTag& DeathAudioEvent) {
    return NULL;
}

void UDeathClass::FindAndPostAudioEvent(const FGameplayTag& DeathAudioEvent) {
}



FVector UDeathClass::CalculateImpactImpulse() const {
    return FVector{};
}

bool UDeathClass::ApplyDeathMaterialParameters() {
    return false;
}


