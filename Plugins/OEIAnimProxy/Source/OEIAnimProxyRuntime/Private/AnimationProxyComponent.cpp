#include "AnimationProxyComponent.h"

UAnimationProxyComponent::UAnimationProxyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideExitTransform = false;
    this->bManuallyAddActorsToIgnore = false;
    this->MinDuration = 5.00f;
    this->MaxDuration = 5.00f;
    this->MinCoolDown = 5.00f;
    this->MaxCoolDown = 5.00f;
    this->bCanSpawn = true;
    this->bCanSpawnWhenClose = false;
    this->bCanAttract = true;
    this->bCanDestroy = false;
    this->bIgnoreFloorCheckForExit = false;
    this->bDisableLinkedProxies = true;
    this->bMaintainCrouchStateOnExit = true;
}

bool UAnimationProxyComponent::BP_IsAvailable(const AActor* Context, bool bIgnoreCooldown) const {
    return false;
}

void UAnimationProxyComponent::BP_GetClosestAnimationStartLocation(const AActor* Context, bool& bFoundLocation, FVector& OutLocation) const {
}


