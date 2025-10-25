#include "LookAtTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent

ALookAtTrigger::ALookAtTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TriggerVolume"));
    this->bShouldSaveGameState = true;
    this->RequiresLoS = true;
    this->MaximumTriggerDistance = 0.00f;
    this->HoldTimeToActivate = 0.00f;
    this->bShowProgressBar = false;
    this->bInvisibleTrigger = false;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

void ALookAtTrigger::OnNoLongerTargeted() {
}

void ALookAtTrigger::OnNewTarget(bool bHasLoS, float Distance) {
}



