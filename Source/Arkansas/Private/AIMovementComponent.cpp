#include "AIMovementComponent.h"

UAIMovementComponent::UAIMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticPlacement = false;
    this->WalkSpeed = 220.00f;
    this->CombatWalkSpeed = 200.00f;
    this->RunSpeed = 480.00f;
    this->CombatRunSpeed = 0.00f;
    this->CombatSprintSpeed = 0.00f;
    this->CrouchWalkSpeed = 144.00f;
    this->CrouchCombatWalkSpeed = 250.00f;
    this->CrouchRunSpeed = 375.00f;
    this->bAllowNavWalkingOptimizations = true;
    this->MinMovementState = EAIMovementState::Walk;
    this->MaxMovementState = EAIMovementState::Sprint;
    this->bElongated = false;
    this->bElongatedHiddenInGame = true;
    this->ElongatedCapsuleLength = 110.00f;
    this->ElongatedCapsuleHeight = 55.00f;
    this->ElongatedCapsuleHorizontalOffset = 0.00f;
    this->ElongatedCapsuleVerticalOffset = 0.00f;
    this->ExtremaSceneComponent = NULL;
    this->ExtremaBlocker = NULL;
    this->JumpDownClearance = 60.00f;
    this->JumpUpClearance = 60.00f;
    this->JumpAcrossClearance = 60.00f;
    this->JumpMaxXYSpeed = 800.00f;
    this->JumpGravityScalar = 1.00f;
    this->CurrentClimbMontage = NULL;
    this->bPreventWalkingOffNav = true;
}

FAIOrientationControl UAIMovementComponent::TraversePollControlPoll() {
    return FAIOrientationControl{};
}

void UAIMovementComponent::OnNavLinkEndReached(const uint32 SegmentIndex, const uint32 PathLength) {
}

bool UAIMovementComponent::IsElongated() const {
    return false;
}

FVector UAIMovementComponent::GetElongatedCenter() const {
    return FVector{};
}


