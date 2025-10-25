#include "SpreadManagerComponent.h"

USpreadManagerComponent::USpreadManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->SpreadSmoothingMultiplier = 3.00f;
    this->CrouchingModifier = 0.00f;
    this->CrouchSmoothingTime = 0.50f;
    this->InAirModifier = 0.00f;
    this->FineAimModifier = 0.00f;
    this->NPCModifier = 0.00f;
    this->SpreadSmoothReturnTime = 0.50f;
    this->SpreadSmoothGrowTime = 0.50f;
    this->SpreadSmoothGrowJumpTime = 0.50f;
}

void USpreadManagerComponent::OnCombatStateChange(AIndianaCharacter* InCharacter, bool bInCombat, bool bRestoring) {
}


