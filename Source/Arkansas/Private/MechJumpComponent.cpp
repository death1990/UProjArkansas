#include "MechJumpComponent.h"

UMechJumpComponent::UMechJumpComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnable = true;
    this->MinimumDistance = 200.00f;
    this->MaximumDistance = 10000.00f;
    this->AnticipationTime = 4.00f;
    this->JumpTime = 5.00f;
    this->PostJumpTime = 2.00f;
    this->State = EMechJumpState::None;
    this->StateTime = 0.00f;
    this->Direction = 0;
}

bool UMechJumpComponent::StartMechJump(FVector Destination) {
    return false;
}


