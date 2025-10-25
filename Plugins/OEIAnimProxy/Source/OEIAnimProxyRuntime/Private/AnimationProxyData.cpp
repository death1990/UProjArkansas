#include "AnimationProxyData.h"

UAnimationProxyData::UAnimationProxyData() {
    this->DefaultBodyIdleAsset = NULL;
    this->StartRotatorUseFlags = 2;
    this->ExitRotatorUseFlags = 2;
    this->EntryPointAreaSweepSize = 45.00f;
    this->EntryPointAreaSweepHeight = 96.00f;
    this->OverrideControllerPitch = true;
    this->OverrideControllerYaw = true;
    this->bManuallyEditRootOffset = false;
    this->ManualRootOffsetRotation = 0.00f;
    this->bIgnoreRootOffsetTranslation = false;
    this->bInvertRootOffsetX = false;
    this->bInvertRootOffsetY = false;
    this->bInvertRootOffsetZ = false;
    this->bIgnoreRootOffsetRotation = false;
    this->RootOffsetRotationAdjustment = 180.00f;
    this->bShouldPreventConversations = false;
    this->bIsValidWithinConversation = false;
    this->bIncludesFacialAnimations = false;
    this->bIsLooping = false;
    this->bForceCameraRotationToCharacterForward = false;
    this->bIgnoreZVelocity = true;
    this->bPlayAsMontage = true;
    this->bLockControlOrientation = false;
    this->bOverrideIntersectionThresholdForIgnoringActors = false;
    this->IntersectionThresholdForIgnoringActors = 5.00f;
    this->bSpawner = false;
    this->bDespawner = false;
    this->bIsGravityEnabled = true;
    this->bIsLoaded = false;
}

bool UAnimationProxyData::ShouldIgnoreZVelocity() const {
    return false;
}

bool UAnimationProxyData::HasPropCurveData(FGameplayTag Key, int32 PropIndex) {
    return false;
}

UCurveVector* UAnimationProxyData::GetPropTranslationCurve(FGameplayTag Key, int32 PropIndex) const {
    return NULL;
}

UCurveVector* UAnimationProxyData::GetPropRotationCurve(FGameplayTag Key, int32 PropIndex) const {
    return NULL;
}

FPropCurveExtractionModifiers UAnimationProxyData::GetPropCurveExtractionModifiers(int32 PropIndex) const {
    return FPropCurveExtractionModifiers{};
}

int32 UAnimationProxyData::GetPositionalIndexByAnimationKey(FGameplayTag Key) const {
    return 0;
}

int32 UAnimationProxyData::GetPositionalByIndex(FGameplayTag Key) const {
    return 0;
}

FTransform UAnimationProxyData::GetPctTransformByIndex(int32 Index, const FTransform& SourceTransform, float Pct) const {
    return FTransform{};
}

FTransform UAnimationProxyData::GetFinalTransformByIndex(int32 Index, const FTransform& SourceTransform) const {
    return FTransform{};
}

FTransform UAnimationProxyData::GetFinalTransform(FGameplayTag Key, const FTransform& SourceTransform, int32& OutIndex) const {
    return FTransform{};
}

FTransform UAnimationProxyData::GetFinalPropTransform(FGameplayTag Key, int32 PropIndex, const FTransform& SourceTransform) const {
    return FTransform{};
}


