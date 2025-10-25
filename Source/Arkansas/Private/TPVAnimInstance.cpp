#include "TPVAnimInstance.h"

UTPVAnimInstance::UTPVAnimInstance() {
    this->bAnimationStateTransitionNoBlend = false;
    this->bDisableArmPoses = false;
    this->bIsCoverActive = false;
    this->bIsRootMotionCoverActive = false;
    this->bUseCoverIdlesAndDisableLocomotion = false;
    this->bShouldCrouchForCover = false;
    this->LocomotionBlendTime = 0.50f;
    this->StationaryRotationSpeed = 180.00f;
    this->MovingRotationSpeed = 180.00f;
    this->MovingRotationSpeedNoTracking = 180.00f;
    this->MaxMovingShuffleAngle = 40.00f;
    this->StationaryRotationType = EStationaryRotationType::None;
    this->bAlwaysFaceTargetWhileStationary = true;
    this->bHasAimLocation = false;
    this->AimPitch = 0.00f;
    this->AimYaw = 0.00f;
    this->SmoothedAimPitch = 0.00f;
    this->SmoothedAimYaw = 0.00f;
    this->HeadPitch = 0.00f;
    this->HeadYaw = 0.00f;
    this->SmoothedHeadYaw = 0.00f;
    this->bCanSnapHeadBlendspacePosition = false;
    this->bHasEyeLocation = false;
    this->EyeStrength = 0.00f;
    this->EyeRotationComfortAngle = 17.00f;
    this->HeadStrength = 0.00f;
    this->EyeSpeed = 6.00f;
    this->HeadSpeed = 6.00f;
    this->TurnDelta = 0.00f;
    this->IsTurning = false;
    this->IsTracking = false;
    this->IsEyeTracking = false;
    this->InCover = false;
    this->IsGibbing = 0.00f;
    this->bCombatEnumIsCombat = false;
    this->bCombatEnumIsPreCombat = false;
    this->bCombatEnumIsNonCombat = true;
    this->bIsTurningAndSpeedIsIdle = false;
    this->bTalking = false;
    this->SmoothedSpeed = 0.00f;
    this->ChatterStrengthSpeed = 8.00f;
    this->ChatterStrength = 0.00f;
    this->LocomotionPlayRate = 1.00f;
    this->HitFlinchAlpha = 0.00f;
    this->WeakPointHitFlinchPercentMultiplier = 1.50f;
    this->HeavyHitFlinchPercent = 0.50f;
    this->LightHitFlinchPercent = 0.30f;
    this->bHoldGundown = false;
    this->CoverType = ECoverTypes::None;
    this->CoverSide = ECoverSide::None;
    this->CoverAction = ECoverActions::None;
    this->bIsCrouchingInCover = false;
    this->InternalActiveCoverAction = ECoverActions::None;
    this->bInternalActiveCoverActionFullyTransitioned = false;
    this->bEndangered = false;
    this->DefaultPersonality = NULL;
    this->CurrentPersonality = NULL;
    this->PersonalityIdleOverrideAnim = NULL;
    this->EmotionData = NULL;
    this->OverrideHeadBlendSpace = NULL;
    this->bHasCustomHeadBlendSpace = false;
    this->bIsEmotionActive = false;
    this->bInConversation = false;
    this->EmotionIndex = 0;
    this->CurrentHeadEmotionWeight = 1.00f;
    this->CombatHobbledPlayRate = 1.00f;
    this->CurrentState = EAnimTreeState::None;
    this->bHasJumpStateMachine = false;
    this->bRunningJumpStateMachine = false;
    this->bMovementStateIsInAir = false;
    this->IsJumping = false;
    this->JumpDirection = 0;
    this->bOnMovingPlatform = false;
    this->CurrentHipPoseStrength = 1.00f;
    this->bEnableNCPoseAdditive = false;
    this->bEnablePersonalityAdditive = false;
    this->bDisableNCArmPose = false;
    this->bRagdollSnapshotActive = false;
    this->GetUpAxis = EAxis::X;
    this->ForwardAxis = EAxis::X;
    this->RightAxis = EAxis::X;
    this->ChestBone = TEXT("Chest");
    this->HipBone = TEXT("Hips_JNT");
    this->bFlipFaceDownForwardVector = false;
    this->bFlipFaceUpForwardVector = true;
    this->bConsiderActorForward = true;
    this->bShouldHideWeapon = false;
    this->bUseGetUpAnimation = true;
    this->UseCurrentCoverAnim = false;
    this->CurrentCoverAnim = NULL;
    this->bUseCurrentCoverAimOffsetBlendSpace = false;
    this->CurrentCoverAimOffsetBlendSpace = NULL;
    this->bIsRaging = false;
    this->bIsAnimNotifyStateHitReaction = false;
    this->LeapAnimation = NULL;
    this->LeapForwardAnimation = NULL;
    this->LeapBackAnimation = NULL;
    this->LeapLeftAnimation = NULL;
    this->LeapRightAnimation = NULL;
    this->MeleeRecoveryTime = 0.00f;
    this->bTurretClosed = false;
    this->bTurretFiring = false;
    this->bIsDead = false;
    this->TailEnable = false;
    this->TailDebug = false;
    this->TailRadius = 400.00f;
    this->TailDrag = 0.01f;
    this->TailInterp = 0.01f;
    this->TailYaw = 0.01f;
    this->bIsUsingAnimProxy = false;
    this->bBodyIdleOverrideUpperbodyLocomotion = false;
    this->BodyIdleOverridesUpperbodyLocomotionAlpha = 0.00f;
    this->bBodyIdleOverrideUpperbodyTurns = false;
    this->bWantsToBurrow = false;
    this->bIsBurrowedNew = false;
    this->bUnholsterWeaponForBodyIdle = false;
    this->bShouldUseAnimProxyOverlay = false;
    this->AnimProxyOverlaySequence = NULL;
    this->CombatAbilityBlendSpace = NULL;
    this->bUseCombatAbilityBlendSpace = false;
    this->bHolsterWeaponForPersonality = false;
    this->bHasWeaponEquipped = false;
    this->DisableGestureCount = 0;
    this->bEnableGestures = true;
    this->EnableGestureCount = 0;
    this->bUnholsterNotify = false;
    this->bShouldHolsterWeapon = false;
    this->DefaultWeaponAttachSocket = TEXT("r_weapon_NSK");
    this->MeleeAttackAimOffsetAlphaInterpSpeed = 10.00f;
    this->MeleeAttackAimOffsetAlpha = 0.00f;
    this->MeleeAttackAimPitchClamped = 0.00f;
    this->MeleeAttackAimYawClamped = 0.00f;
    this->bMeleeAttackAimOffsetEnabled = false;
    this->bShouldMoveMeleeBoneToHand = false;
    this->InertializationDisabledBuffer = 5;
    this->bNoInertializationForBodyIdle = false;
    this->BodyIdleOverrideLocomotionAlphaInterpSpeed = 12.00f;
    this->bCanPlayFallingAnimation = false;
    this->CurrentStateOfBeingBlendTime = 0.10f;
    this->StateOfBeingBlendTime = 0.10f;
}


void UTPVAnimInstance::SpringFloat(float Pos, float Vel, float& OutPos, float& OutVel, float Target, float DampingRatio, float AngularFrequency, float DeltaTime) {
}

void UTPVAnimInstance::SetTurretClosed(bool bClosed) {
}

void UTPVAnimInstance::SetStateTransitioned(EAnimTreeState State, bool Transitioned) {
}

void UTPVAnimInstance::SetPersonalityIdleOverride(UAnimSequence* PersonalityOverrideIn) {
}


bool UTPVAnimInstance::SetNextEmotion(EEmotion Emotion, float Duration, bool Persist, bool ForceNextEmotion) {
    return false;
}

void UTPVAnimInstance::SetMeleeAttackAimOffsetEnabled(bool bEnabled) {
}

void UTPVAnimInstance::SetMeleeAttackAimOffsetBone(FName BoneName) {
}

void UTPVAnimInstance::SetIsCrouchingIsCover(bool bCrouching) {
}

void UTPVAnimInstance::SetEmotion(FGameplayTag Emotion, float Delay, float Duration, float HeadWeight, bool Persist, bool bHead, bool bBody, bool bSnap) {
}

void UTPVAnimInstance::SetCurrentCoverAnim(UAnimSequence* Anim, UAimOffsetBlendSpace* AimOffsetBlendSpace) {
}

void UTPVAnimInstance::SetCombatAbilityBlendSpace(const UAimOffsetBlendSpace* BlendSpace) {
}

void UTPVAnimInstance::SetActiveCoverActionFullyTransitioned(const bool bIsFullyTransitioned) {
}

void UTPVAnimInstance::SetActiveCoverAction(const ECoverActions ActiveCoverAction) {
}

void UTPVAnimInstance::ResetEmotionToDefault() {
}

void UTPVAnimInstance::OnMontageStart(UAnimMontage* Montage) {
}

void UTPVAnimInstance::OnMontageEnd(UAnimMontage* Montage, bool bInterrupted) {
}

bool UTPVAnimInstance::IsStateTransitioned(EAnimTreeState State) const {
    return false;
}

bool UTPVAnimInstance::IsOnRightSide() const {
    return false;
}

bool UTPVAnimInstance::IsFacingUp() const {
    return false;
}

bool UTPVAnimInstance::IsCoverActive() const {
    return false;
}

bool UTPVAnimInstance::IsCoverActionFullyTransitioned() const {
    return false;
}

bool UTPVAnimInstance::GetUseBodyToAim() const {
    return false;
}

void UTPVAnimInstance::GetUpFromRagdoll(float GetUpSpeed) {
}

UAnimMontage* UTPVAnimInstance::GetLeapAnimation(FVector Destination) {
    return NULL;
}

bool UTPVAnimInstance::GetDistractionStartAnimationPlaybackInfo(const AEnvironmentalDistraction* Distraction, bool bReachable, UAnimMontage*& OutStartAnimation, TArray<FTransform>& OutSyncTransforms) const {
    return false;
}

UAnimMontage* UTPVAnimInstance::GetDistractionLoopAnimation(const AEnvironmentalDistraction* Distraction, bool bReachable) const {
    return NULL;
}

UAnimMontage* UTPVAnimInstance::GetDistractionEndAnimation(const AEnvironmentalDistraction* Distraction, bool bReachable) const {
    return NULL;
}

EAnimTreeState UTPVAnimInstance::GetCurrentAnimTreeState() const {
    return EAnimTreeState::None;
}

ECoverActions UTPVAnimInstance::GetActiveCoverAction() const {
    return ECoverActions::None;
}

void UTPVAnimInstance::DisableGestures(bool Disable) {
}

void UTPVAnimInstance::ClearCurrentEmotion() {
}

void UTPVAnimInstance::AnimNotify_UnHolster() {
}

void UTPVAnimInstance::AnimNotify_TurnOffRandomIdle() {
}

void UTPVAnimInstance::AnimNotify_ResetRandomIdle() {
}

void UTPVAnimInstance::AnimNotify_RandomIdleEnd() {
}

void UTPVAnimInstance::AnimNotify_RandomIdle() {
}

void UTPVAnimInstance::AnimNotify_OnLandEnd() {
}

void UTPVAnimInstance::AnimNotify_OnJumpIntroEnd() {
}

void UTPVAnimInstance::AnimNotify_JumpStateMachineComplete() {
}

void UTPVAnimInstance::AnimNotify_IdleStateLeft() {
}

void UTPVAnimInstance::AnimNotify_Holster() {
}

void UTPVAnimInstance::AnimNotify_DisableNCPoseAdditive(bool bDisable) {
}

void UTPVAnimInstance::AnimNotify_DisableNCArmPose(bool bDisable) {
}

void UTPVAnimInstance::AnimNotify_CombatStateEntered() {
}

void UTPVAnimInstance::AnimNotify_ClearFurnitureFlag() {
}

void UTPVAnimInstance::AnimNotify_BodyIdleLoop() {
}

void UTPVAnimInstance::AnimNotify_BodyIdle1Start() {
}

void UTPVAnimInstance::AnimNotify_BodyIdle1End() {
}

void UTPVAnimInstance::AnimNotify_BodyIdle0Start() {
}

void UTPVAnimInstance::AnimNotify_BodyIdle0End() {
}


