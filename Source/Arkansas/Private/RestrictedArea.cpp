#include "RestrictedArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent
#include "RestrictedAreaComponent.h"

ARestrictedArea::ARestrictedArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<URestrictedAreaComponent>(TEXT("RootComponent"));
    this->bShouldSaveGameState = true;
    this->IDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->CurrentAreaState = ERestrictedAreaState::AccessGranted;
}

void ARestrictedArea::SetRestrictedAreaState(ERestrictedAreaState NewState) {
}

void ARestrictedArea::SetRestrictedAreaAccess(bool bOverrideAccessIn) {
}

bool ARestrictedArea::PassesRequirement() const {
    return false;
}

bool ARestrictedArea::IsEnabled() const {
    return false;
}

ERestrictedAreaState ARestrictedArea::GetRestrictedAreaState() {
    return ERestrictedAreaState::AccessGranted;
}

int32 ARestrictedArea::GetHighestRankRequirement() const {
    return 0;
}


