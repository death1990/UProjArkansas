#include "PlayerTPVAnimInstance.h"

UPlayerTPVAnimInstance::UPlayerTPVAnimInstance() {
    this->bInThirdPerson = false;
    this->HolsterWeaponAnimationsClass = NULL;
    this->HolsterWeaponAnimations = NULL;
    this->bIsSliding = false;
    this->bIsUsingSecondaryShoulder = false;
    this->bIsInCombat = false;
    this->bIsPlayerInCombatState = false;
    this->bIsInThrowingState = false;
    this->bIsPerformingWindupPowerAttack = false;
    this->bIsUsingQuickMelee = false;
    this->bIsUsing1HMelee = false;
    this->bIsUsing2HMelee = false;
    this->CurrentPlayerWeaponAnimations = NULL;
    this->bIsParkouring = false;
    this->PlayerMovementComponent = NULL;
    this->PlayerMedkitComponent = NULL;
    this->PlayerTargetingComponent = NULL;
    this->bDepictMidair = false;
    this->MidairGroundDistance = 20.00f;
    this->MidairVerticalSpeed = 150.00f;
    this->bIsMultiJumping = false;
    this->bIsHovering = false;
    this->bIsUsingMedkit = false;
    this->bNRayAnimationActive = false;
    this->bWantsToCrouch = false;
    this->bWantsFineAim = false;
    this->bIsFineAiming = false;
    this->bGunPointIKEnabled = true;
    this->NonCombatCrouchAimOffsetYawInterpSpeed = 5.00f;
    this->MeleeAttackAimoffsetCurveName = TEXT("Melee Attack Aimoffset");
    this->MeleeAimoffsetAlpha = 0.00f;
    this->bIsUsingMeleeWeapon = false;
    this->bIsUsingLightMeleeWeapon = false;
    this->PlasmaPistolSprintChargeSpeedThreshold = 550.00f;
    this->PistolSprintFireSpeedThreshold = 570.00f;
    this->RangedTwoHandedSprintFireSpeedThreshold = 530.00f;
    this->PostFiringGunBlockedCooldownSeconds = 2.00f;
    this->bReloading = false;
    this->bFiring = false;
    this->bRechambering = false;
    this->HeavyArmorAdditiveAlpha = 0.00f;
    this->SlideIKAimAlpha = 0.00f;
    this->LeaningAlpha = 0.00f;
    this->AimOffsetAlpha = 1.00f;
    this->EnableAimOffsetName = TEXT("EnableAimOffset");
    this->bSlideTransitionOngoing = false;
    this->bStopTransitionOngoing = false;
    this->bSprintFireOngoing = false;
    this->bCrouchTransitionOngoing = false;
    this->LookAtClamp = 40.00f;
    this->Spine01NonCombatAimAlpha = 0.10f;
    this->Spine02NonCombatAimAlpha = 0.20f;
    this->Spine03NonCombatAimAlpha = 0.30f;
    this->HeadNonCombatAimAlpha = 1.00f;
    this->HandIKAdjustmentAngle = 5.00f;
    this->FlinchAlpha = 0.00f;
    this->HoverTurnAlpha = 0.00f;
    this->StandCrouchStance = 0.00f;
    this->bUse1HIKAim = false;
    this->bUse2HIKAim = false;
    this->bDirectionChanged = false;
    this->bDoSprintImpulse = false;
    this->bCombatStateChanged = false;
    this->TimeSinceCombatStateChanged = 0.00f;
    this->ControlRotationDirection = 0.00f;
    this->PointingConfig = NULL;
    this->bCanPlayStarts = true;
    this->bCanPlayStops = true;
    this->RunStartElapsedTime = 0.00f;
    this->ObstacleInputAlignment = 0.80f;
    this->bInputIntoObstacle = false;
    this->bOverrideMontageLowerBody = false;
    this->LeftBackAngle_NC = -135.00f;
    this->LeftFrontAngle_NC = -45.00f;
    this->RightFrontAngle_NC = 45.00f;
    this->RightBackAngle_NC = 135.00f;
    this->LeftBackAngle_CombatStand = -135.00f;
    this->LeftFrontAngle_CombatStand = -45.00f;
    this->RightFrontAngle_CombatStand = 45.00f;
    this->RightBackAngle_CombatStand = 135.00f;
    this->LeftBackAngle_Sprinting = -135.00f;
    this->LeftFrontAngle_Sprinting = -45.00f;
    this->RightFrontAngle_Sprinting = 45.00f;
    this->RightBackAngle_Sprinting = 135.00f;
    this->LeftBackAngle_CombatCrouch = -135.00f;
    this->LeftFrontAngle_CombatCrouch = -45.00f;
    this->RightFrontAngle_CombatCrouch = 45.00f;
    this->RightBackAngle_CombatCrouch = 135.00f;
    this->LeftBackAngle_NonCombatCrouch = -135.00f;
    this->LeftFrontAngle_NonCombatCrouch = -45.00f;
    this->RightFrontAngle_NonCombatCrouch = 45.00f;
    this->RightBackAngle_NonCombatCrouch = 135.00f;
    this->LeftBackAngle_FineAimBlock = -135.00f;
    this->LeftFrontAngle_FineAimBlock = -45.00f;
    this->RightFrontAngle_FineAimBlock = 45.00f;
    this->RightBackAngle_FineAimBlock = 135.00f;
    this->MovementAngleRelativeToCapsule = 0.00f;
    this->bMovingForward = false;
    this->bMovingBackward = false;
    this->bMovingLeft = false;
    this->bMovingRight = false;
    this->EaseRelativeInputAngleInterpSpeed = 5.00f;
    this->RelativePlayerInputAngle = 0.00f;
    this->RelativeBackwardPlayerInputAngle = 0.00f;
    this->EaseRelativeForwardInputAngle = 0.00f;
    this->EaseRelativeBackwardInputAngle = 0.00f;
    this->EaseRelativeInputAngle = 0.00f;
    this->bInputIsForward = false;
    this->bInputIsBackward = false;
    this->bInputIsLeftward = false;
    this->bInputIsRightward = false;
    this->bReactLight = false;
    this->bReactHeavy = false;
    this->bReactKnockback = false;
    this->bShouldApplyBodyOrient = false;
    this->BodyOrientRates = NULL;
    this->BodyOrientRateFactor_Reversal = 2.00f;
    this->BodyOrientRates_Crouched = NULL;
    this->BodyOrientRateFactor_Reversal_Crouched = 2.00f;
    this->BodyOrientRates_Starting = NULL;
    this->BodyOrientRates_Hovering = NULL;
    this->BodyOrientCheckSensitivity = 1.00f;
    this->BodyOrientUpdateSensitivity = 10.00f;
    this->bIgnoreNonCombatBodyOrientation = false;
    this->HipsOrientInterpSpeedDefault = 1.00f;
    this->HipsOrientInterpSpeedSprinting = 1.00f;
    this->HipsOrientation = 0.00f;
    this->HipsOrientationForward = 0.00f;
    this->bIsStopping = false;
    this->MovementInputAmount = 0.00f;
    this->PreviousMovementInputAmount = 0.00f;
    this->bHasMovementInput = false;
    this->MaxStopFrameCount = 3;
    this->StopAngleRelativeToCapsule = 0.00f;
    this->PivotAngleAcceptance = 50.00f;
    this->bDisablePivots = false;
    this->bIsPivoting = false;
    this->bPivotRightToLeft = false;
    this->bPivotLeftToRight = false;
    this->bPivotForwardToBackward = false;
    this->bPivotBackwardToForward = false;
    this->PivotOrientation = 0.00f;
    this->TurnInPlaceRotationIncident = 90.00f;
    this->bIsTurningInPlace = false;
    this->TurningInPlaceDistance = 0.00f;
    this->CurrentBodyOrientAngleNonCombatJump = 0.00f;
    this->bDematerializerStateMachineInProgress = false;
    this->bDematerializerLoopAnimationRequested = false;
    this->bDematerializerCancelRequested = false;
    this->bHasCatalyzingPerkSpell = false;
    this->DematerializerAnimations = NULL;
    this->SprayCatalyzingPerkSpell = NULL;
    this->bIsDematerializerActive = false;
}

void UPlayerTPVAnimInstance::StartHovering() {
}

void UPlayerTPVAnimInstance::SetUseSecondaryShoulder(bool bUseSecondaryShoulder) {
}


void UPlayerTPVAnimInstance::OnThrowAnimStarted(const UThrowable* Throwable) {
}

void UPlayerTPVAnimInstance::OnThrowAnimEnded(UThrowable* Throwable) {
}

void UPlayerTPVAnimInstance::OnThrowableHoldLoopStart() {
}

void UPlayerTPVAnimInstance::OnStartParkour(const FParkourMove& ParkourMove) {
}

void UPlayerTPVAnimInstance::OnStartCrouch(UIndianaCharMovementComponent* InMovementComponent, bool bPlayerToggled) {
}

void UPlayerTPVAnimInstance::OnStartClimb() {
}

void UPlayerTPVAnimInstance::OnPerkSpellsApplied() {
}

void UPlayerTPVAnimInstance::OnMultiJump() {
}

void UPlayerTPVAnimInstance::OnJumpUpdate(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UPlayerTPVAnimInstance::OnJumpInitialUpdate(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UPlayerTPVAnimInstance::OnGadgetUnequipped(const UGadget* Gadget) {
}

void UPlayerTPVAnimInstance::OnGadgetEquipped(const UGadget* Gadget) {
}

void UPlayerTPVAnimInstance::OnGadgetActivate(FGameplayTag GameplayTag) {
}

void UPlayerTPVAnimInstance::OnFineAimStart() {
}

void UPlayerTPVAnimInstance::OnFineAimEnd() {
}

void UPlayerTPVAnimInstance::OnEquippedWeaponUnholsterInstant(UEquipmentComponent* EquipmentComponentIn, UWeapon* Weapon) {
}

void UPlayerTPVAnimInstance::OnEquippedWeaponStartUnholster(UEquipmentComponent* UhholsterEquipmentComponent, UWeapon* Weapon) {
}

void UPlayerTPVAnimInstance::OnEquippedWeaponStartHolster(UEquipmentComponent* HolsterEquipmentComponent, UWeapon* Weapon) {
}

void UPlayerTPVAnimInstance::OnEquippedWeaponStartEquip(UWeapon* Weapon) {
}

void UPlayerTPVAnimInstance::OnEquippedWeaponHolsterInstant(UEquipmentComponent* EquipmentComponentIn, UWeapon* Weapon) {
}

void UPlayerTPVAnimInstance::OnEquippedWeaponEndUnholster(UWeapon* Weapon) {
}

void UPlayerTPVAnimInstance::OnEquippedWeaponEndUnequip(UEquipmentComponent* HolsterEquipmentComponent, UWeapon* Weapon) {
}

void UPlayerTPVAnimInstance::OnEquippedWeaponEndHolster(UWeapon* Weapon) {
}

void UPlayerTPVAnimInstance::OnEndParkour(const FParkourMove& ParkourMove) {
}

void UPlayerTPVAnimInstance::OnAttackComplete(AActor* Attacker, int32 AttackID, bool bIsQuickMelee) {
}

bool UPlayerTPVAnimInstance::IsWeaponTwoHanded() const {
    return false;
}

bool UPlayerTPVAnimInstance::IsWeaponRangedHeavy() const {
    return false;
}

bool UPlayerTPVAnimInstance::IsWeaponOneHanded() const {
    return false;
}

bool UPlayerTPVAnimInstance::IsWeaponHolstered() const {
    return false;
}

bool UPlayerTPVAnimInstance::IsSprinting() const {
    return false;
}

bool UPlayerTPVAnimInstance::IsPlayerInCombat() const {
    return false;
}

bool UPlayerTPVAnimInstance::IsNonCombatMovingForward() const {
    return false;
}

bool UPlayerTPVAnimInstance::IsNonCombatMovingBackward() const {
    return false;
}

bool UPlayerTPVAnimInstance::IsMoving(const float Tolerance) const {
    return false;
}

bool UPlayerTPVAnimInstance::IsInputRelativelyRightSide() const {
    return false;
}

bool UPlayerTPVAnimInstance::HasTimeElapsedForGunBlockedPose() const {
    return false;
}

float UPlayerTPVAnimInstance::GetTurnInPlaceYawOffset() const {
    return 0.0f;
}

UBlendSpace* UPlayerTPVAnimInstance::GetRightWalkRunBlendspace() const {
    return NULL;
}

float UPlayerTPVAnimInstance::GetParkourMinigunAdjustmentAlpha() const {
    return 0.0f;
}

UAnimSequenceBase* UPlayerTPVAnimInstance::GetNonCombatRunStartRight90() const {
    return NULL;
}

UAnimSequenceBase* UPlayerTPVAnimInstance::GetNonCombatRunStartLeft90() const {
    return NULL;
}

UAnimSequenceBase* UPlayerTPVAnimInstance::GetNonCombatPivotRightToLeft() const {
    return NULL;
}

UAnimSequenceBase* UPlayerTPVAnimInstance::GetNonCombatPivotLeftToRight() const {
    return NULL;
}

UBlendSpace* UPlayerTPVAnimInstance::GetLeftWalkRunBlendspace() const {
    return NULL;
}

bool UPlayerTPVAnimInstance::GetInputIntoObstacle() {
    return false;
}

UAnimSequenceBase* UPlayerTPVAnimInstance::GetCombatRunStartRight90() const {
    return NULL;
}

UAnimSequenceBase* UPlayerTPVAnimInstance::GetCombatRunStartLeft90() const {
    return NULL;
}

UAnimSequenceBase* UPlayerTPVAnimInstance::GetCombatPivotRightToLeft() const {
    return NULL;
}

UAnimSequenceBase* UPlayerTPVAnimInstance::GetCombatPivotLeftToRight() const {
    return NULL;
}

FBlockedPose UPlayerTPVAnimInstance::GetBlockedPose() const {
    return FBlockedPose{};
}

bool UPlayerTPVAnimInstance::GetAvoidWeaponClipping() const {
    return false;
}

void UPlayerTPVAnimInstance::EndHovering() {
}

void UPlayerTPVAnimInstance::EndFlinch() {
}

void UPlayerTPVAnimInstance::EndDisableReaction() {
}

bool UPlayerTPVAnimInstance::CanUseWeaponFineAimSlot() const {
    return false;
}

bool UPlayerTPVAnimInstance::CanUseRangedTwoHandedSprintFire() const {
    return false;
}

bool UPlayerTPVAnimInstance::CanUsePlasmaPistolSprintCharge() const {
    return false;
}

bool UPlayerTPVAnimInstance::CanUsePistolSprintFire() const {
    return false;
}

bool UPlayerTPVAnimInstance::CanTurnInPlaceRight() const {
    return false;
}

bool UPlayerTPVAnimInstance::CanTurnInPlaceLeft() const {
    return false;
}

bool UPlayerTPVAnimInstance::CanThrowableUseLowerbodyLocomotion() const {
    return false;
}

bool UPlayerTPVAnimInstance::CanPivotRightExit() const {
    return false;
}

bool UPlayerTPVAnimInstance::CanPivotLeftExit() const {
    return false;
}

bool UPlayerTPVAnimInstance::CanPivotForwardExit() const {
    return false;
}

bool UPlayerTPVAnimInstance::CanPivotBackwardExit() const {
    return false;
}

float UPlayerTPVAnimInstance::CalcStandStartRateLeftRight() const {
    return 0.0f;
}

float UPlayerTPVAnimInstance::CalcStandStartRateForward() const {
    return 0.0f;
}

float UPlayerTPVAnimInstance::CalcStandStartRateBackward() const {
    return 0.0f;
}

float UPlayerTPVAnimInstance::CalcSprintRate() const {
    return 0.0f;
}

float UPlayerTPVAnimInstance::CalcFlinchAlpha_Implementation() {
    return 0.0f;
}

float UPlayerTPVAnimInstance::CalcCrouchStartRateLeftRight() const {
    return 0.0f;
}

float UPlayerTPVAnimInstance::CalcCrouchStartRateForward() const {
    return 0.0f;
}

float UPlayerTPVAnimInstance::CalcCrouchStartRateBackward() const {
    return 0.0f;
}



bool UPlayerTPVAnimInstance::AreArmsDeviated() const {
    return false;
}

void UPlayerTPVAnimInstance::AnimNotify_OnRunStartExit() {
}

void UPlayerTPVAnimInstance::AnimNotify_OnRunStartEnter() {
}

void UPlayerTPVAnimInstance::AnimNotify_OnDematerializerStateMachineComplete() {
}


