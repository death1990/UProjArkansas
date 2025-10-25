#include "OwBlackboardComponent.h"

UOwBlackboardComponent::UOwBlackboardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->AlertState = EAlertState::Unaware;
    this->PreviousAlertState = EAlertState::Unaware;
    this->DisabledMask = EAIDisableMask::None;
    this->bIsInCombat = false;
    this->StateOfBeing = EStateOfBeing::Healthy;
    this->bIsCompanion = false;
    this->SearchType = ESearchType::Invalid;
    this->bCrimeResponseRequested = false;
}

void UOwBlackboardComponent::OnNewStateOfBeing(UHealthComponent* InHealthComponent, EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing) {
}


