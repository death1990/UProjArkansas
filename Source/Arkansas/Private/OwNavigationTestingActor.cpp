#include "OwNavigationTestingActor.h"

AOwNavigationTestingActor::AOwNavigationTestingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavigationFlags = 0;
    this->PlayerForwardDirectionInputMode = EForwardDirectionInputMode::Vector;
    this->TargetForwardDirectionInputMode = EForwardDirectionInputMode::Vector;
    this->UserNavLinkProfile = NULL;
    this->bUserIsCompanion = false;
    this->bUserAllowedInCrouchSpaces = false;
    this->bUserInCombat = false;
    this->bUserZyraniumHazardSafe = false;
    this->MinNavLinkAvoidanceTraversalCost = 5000.00f;
    this->MaxNavLinkAvoidanceTraversalCost = 20000.00f;
    this->NavLinkAvoidancePenaltyMultiplier = 30.00f;
    this->bPlayerConversationActive = false;
    this->bPlayerInCrouchArea = false;
    this->bShowCostInfo = true;
    this->bShowSegmentDistances = true;
}


