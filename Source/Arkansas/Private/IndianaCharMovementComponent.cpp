#include "IndianaCharMovementComponent.h"

UIndianaCharMovementComponent::UIndianaCharMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SprintSpeed = 1200.00f;
    this->CapsuleComponent = NULL;
    this->GroundOffsetComponent = NULL;
    this->OwnerCharacter = NULL;
    this->StaminaComponent = NULL;
    this->StatComponent = NULL;
    this->BlockComponent = NULL;
    this->EquipmentComponent = NULL;
    this->HealthComponent = NULL;
    this->MaxMovementDirtyDistance = 10.00f;
    this->CrouchTime = 1.00f;
    this->ParkourCrouchTime = 0.25f;
    this->UncrouchTime = 1.00f;
    this->BlockSpeedMultiplier = 1.00f;
    this->BlockSpeedMultStat = NULL;
    this->bForceCrouch = false;
    this->SprintTurnRateMultiplier = 0.30f;
    this->SprintStrafeRateMultiplier = 0.50f;
    this->SprintStaminaDrainRate = 10.00f;
    this->FallingDamageType = NULL;
    this->ClimbUpSpeed = 100.00f;
    this->ClimbDownSlideSpeed = 300.00f;
    this->bCanClimb = true;
    this->DefaultFootstepData = NULL;
    this->OverrideFootstepData = NULL;
    this->ControllerSprintToggleDoubleClickWindow = 0.50f;
    this->SprintVaultRateScaleP3P = 1.50f;
    this->SprintMantleRateScaleP3P = 1.50f;
    this->bIsDoingParkour = false;
    this->ParkourYawMin = -50.00f;
    this->ParkourYawMax = 50.00f;
    this->ParkourPitchMin = -20.00f;
    this->ParkourPitchMax = 20.00f;
}

void UIndianaCharMovementComponent::OnTeleported_BP() {
}

void UIndianaCharMovementComponent::OnBumped(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UIndianaCharMovementComponent::ApplyPushForce(const FVector& PushVelocity, float InPushTime, float InFriction, const UObject* InSource) {
}


