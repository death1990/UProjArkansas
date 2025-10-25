#include "PlayerMovementComponent.h"

UPlayerMovementComponent::UPlayerMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StrafeMaxSpeedScalar = 0.90f;
    this->StrafeMaxSpeedScalar3P = 1.00f;
    this->StrafeMaxSpeedScalar3PCombat = 1.00f;
    this->StrafeMaxSpeedScalar3PCrouch = 1.00f;
    this->BackwardsMaxSpeedScalar = 0.70f;
    this->LookStickBaseTurnRate = 45.00f;
    this->LookStickExponent = 1.00f;
    this->LookStickTurnRampDelay = 0.25f;
    this->LookStickTurnRampTime = 0.25f;
    this->LookStickTurnRampMultiplier = 1.50f;
    this->LookStickAccelerationDuration = 0.25f;
    this->LookStickBasePitchRate = 45.00f;
    this->LookStickMinTurnRateScalar = 0.50f;
    this->LookStickMaxTurnRateScalar = 2.00f;
    this->AngularDeadZoneRatio = 0.12f;
    this->SprintRequiredMovementInputHalfAngle = 60.00f;
    this->BeginFallingVelocityScalar = 1.00f;
    this->DelayedSprintTime = 1.00f;
    this->DelayedCrouchTime = 1.00f;
    this->DodgeVelocityStat = NULL;
    this->FallJumpGraceTime = 0.10f;
    this->InAirJumpThreshold = 0.10f;
    this->LeapAngle = 60.00f;
    this->PlayerMovementParams = NULL;
    this->FallingDamageSpell = NULL;
    this->ForceFeedbackFallingDamage = NULL;
    this->OppositeInertiaLongitudinalDuration = 0.30f;
    this->OppositeInertiaLateralDuration = 0.30f;
    this->OppositeSpeedInertiaThreshold = 230.00f;
    this->SlideTime = 1.00f;
    this->MinSlideSpeedToCancel = 400.00f;
    this->MaxSlideSpeed = 1000.00f;
    this->MinSlideSpeed = 400.00f;
    this->BrawnyCooldown = 5.00f;
    this->BrawnySpell = NULL;
    this->DoubleInputJoystickThreshold = 0.90f;
    this->DoubleInputJoystickClearThreshold = 0.30f;
    this->DoubleInputClearTime = 0.10f;
    this->DoubleInputTimeThreshold = 0.50f;
    this->DoubleKBInputTimeThreshold = 0.50f;
    this->DodgeVelocity = 925.00f;
    this->DodgeVelocityZ = 200.00f;
    this->DodgeTime = 0.50f;
    this->MinTimeBetweenDodge = 1.00f;
    this->DodgeFriction = 1.00f;
    this->DodgeStaminaCost = 15.00f;
    this->DodgeTimeLimit = 0.25f;
    this->DefaultDodgeDirection = EDodgeDirection::Back;
    this->LadderSprintSpeed = 400.00f;
    this->CameraYawAngleRange = 60.00f;
    this->CameraPitchAngleMin = -25.00f;
    this->CameraPitchAngleMax = 65.00f;
    this->JumpOffLadderScalar = 1.00f;
    this->EasingFunctionForCameraRotation = EEasingFunc::Linear;
    this->EasingExponentForCameraRotation = 1.00f;
    this->LadderAnimationData = NULL;
    this->MinUnstuckInputMagnitude = 0.20f;
    this->UnstuckInputTime = 1.00f;
    this->UnstuckInputSmoothRate = 45.00f;
    this->MaxUnstuckInputAngle = 45.00f;
    this->UnstuckInputLocationSmoothRate = 200.00f;
    this->MaxDeltaUnstuckInputLocation = 20.00f;
    this->MaxUnstuckCollisionAngle = 70.00f;
    this->PhaseModeNoBumpTime = 3.00f;
    this->NumAcrophobiaChecks = 4;
    this->AcrophobiaCheckInterval = 2.00f;
    this->AcrophobiaDistanceFromPlayer = 200.00f;
    this->AcrophobiaDistanceGround = 2000.00f;
    this->AcrophobiaZOffset = 100.00f;
    this->DistancePerFootstepCrouched = 100.00f;
    this->DistancePerFootstepRun = 180.00f;
    this->DistancePerFootstepSprint = 220.00f;
    this->DistancePerFootstepClimbing = 100.00f;
    this->AimingFootstepRateMultiplier = 0.65f;
    this->FirstFootstepMultiplier = 0.50f;
    this->FootstepLeftRightOffset = 15.00f;
    this->MoveCancelAutoSprintGracePeriodInSeconds = 1.00f;
    this->MaxClimbOverDistanceSprinting = 0.00f;
    this->MaxParkourLeftRightDistance = 0.00f;
    this->MaxParkourDistance = 0.00f;
    this->MaxParkourWalkableAngle = 30.00f;
    this->ParkourMinLedgeHeight = 75.00f;
    this->ParkourMaxLedgeHeight = 150.00f;
    this->ParkourLedgeDetectHorizontalDistance = 50.00f;
    this->ParkourLedgeDetectWidth = 25.00f;
    this->ParkourLedgeSweepDepth = 10.00f;
    this->ParkourMantleInterpolationCurve = NULL;
    this->ForceAlignmentThresholdP3P = 0.95f;
    this->ParkourVaultAscentInterpolationCurve = NULL;
    this->ParkourVaultAscentInterpolationDuration = 0.38f;
    this->ParkourVaultDescentInterpolationCurve = NULL;
    this->ParkourInputDeadZone = 0.50f;
    this->ParkourInputHalfAngle = 30.00f;
    this->MaxParkourSpeed = 400.00f;
    this->MinParkourSpeed = 200.00f;
    this->ParkourVerticalOffset = 5.00f;
    this->ParkourVaultHorizontalDistance = 150.00f;
    this->ParkourVaultHorizontalDistanceSprinting = 150.00f;
    this->ParkourVaultVerticalDistance = 50.00f;
    this->CannotDoubleJumpStatusEffect = NULL;
    this->MultiJumpHeight = 115.11f;
    this->MultiJumpDistanceWalking = 310.00f;
    this->MultiJumpDistanceSprinting = 581.00f;
    this->MultiJumpXYSpeedInputDeadzone = 0.20f;
    this->MultiJumpXYSpeedInputHalfAngle = 30.00f;
    this->MultiJumpFallDistanceLimit = 500.00f;
    this->CoverForwardDistance = 200.00f;
    this->CoverLateralDistance = 200.00f;
    this->CoverLateralEdgeDistance = 5.00f;
    this->CoverMoveTime = 0.25f;
    this->CoverStrayDistance = 50.00f;
    this->MaxCoverAngle = 45.00f;
    this->CrouchUpDistance = 100.00f;
    this->CrouchAboveEdgeGoal = 10.00f;
    this->PlayerSpeedMaxRTPC = 600.00f;
}

void UPlayerMovementComponent::SetInputPreferenceSprint(int32 InputPreference) {
}

bool UPlayerMovementComponent::OverElevator() {
    return false;
}

void UPlayerMovementComponent::OnWeaponStartFineAim(UWeapon* Weapon) {
}

void UPlayerMovementComponent::OnWeaponAttack(UWeapon* Weapon) {
}

void UPlayerMovementComponent::OnUnlockAbilityChanged(EUnlockAbility Ability) {
}

void UPlayerMovementComponent::OnPlayerPerspectiveChanged(bool bIsInThirdPerson) {
}

void UPlayerMovementComponent::OnJumpLanded(UIndianaCharMovementComponent* InMovementComponent, float FallDistance) {
}

void UPlayerMovementComponent::OnHolsterToClimbComplete(UWeapon* HolsteredWeapon) {
}

void UPlayerMovementComponent::OnFullyFineAimed() {
}

void UPlayerMovementComponent::OnFineAimEnded() {
}

void UPlayerMovementComponent::OnConversationViewTargetReturnedToPlayer() {
}

bool UPlayerMovementComponent::IsWithinMultiJumpFallDistanceLimit() const {
    return false;
}

void UPlayerMovementComponent::ControllerSensitivityUpdated(float SensitivityIn) {
}

void UPlayerMovementComponent::ControllerADSSensitivityUpdated(float SensititivityIn) {
}

void UPlayerMovementComponent::AcrophobiaEnableDebug(bool bEnable) {
}


