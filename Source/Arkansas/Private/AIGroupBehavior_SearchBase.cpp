#include "AIGroupBehavior_SearchBase.h"
#include "EAIGroupBehaviorCategory.h"
#include "IndianaCharacter.h"
#include "Templates/SubclassOf.h"

UAIGroupBehavior_SearchBase::UAIGroupBehavior_SearchBase() {
    this->Category = EAIGroupBehaviorCategory::SearchSetup;
    this->bEnableContinuousCooking = false;
    this->SearchObjectRestrictionClass = AIndianaCharacter::StaticClass();
}

void UAIGroupBehavior_SearchBase::K2_SetSearchBehaviorWantsToExit(bool bWantsToExit) const {
}

bool UAIGroupBehavior_SearchBase::K2_IsCandidateValidSearcher(AIndianaAiController* InController) const {
    return false;
}

bool UAIGroupBehavior_SearchBase::K2_HandlePendingSearchRequest_Implementation(ASearchPoint* NewSearchPoint, FVector NewSearchLocation) {
    return false;
}


ASearchPoint* UAIGroupBehavior_SearchBase::K2_GetSearchPoint() const {
    return NULL;
}

UObject* UAIGroupBehavior_SearchBase::K2_GetSearchObject(UClass* ObjectClassType, bool& IsValid) const {
    return NULL;
}

FVector UAIGroupBehavior_SearchBase::K2_GetSearchLocation() const {
    return FVector{};
}

TSubclassOf<UFactionData> UAIGroupBehavior_SearchBase::K2_GetSearchFaction() const {
    return NULL;
}


