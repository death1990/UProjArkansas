#include "OwAnimationProxyComponent.h"

UOwAnimationProxyComponent::UOwAnimationProxyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bExitDuringConversation = true;
    this->bExitWhenFacingAwayFromPlayer = true;
    this->bUseRootOffsetForFloorValidation = false;
    this->bOverrideSkipProxyExitForConversation = false;
    this->bSkipProxyExitForConversation = true;
}


