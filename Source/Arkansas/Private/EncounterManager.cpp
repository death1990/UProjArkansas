#include "EncounterManager.h"
#include "AIGroupBehaviorInstanceKitComponent.h"
#include "EncounterManagerComponent.h"

AEncounterManager::AEncounterManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UEncounterManagerComponent>(TEXT("RootComponent"));
    this->AIGroupBehaviorInstanceKitComponent = CreateDefaultSubobject<UAIGroupBehaviorInstanceKitComponent>(TEXT("AIGroupBehaviorKit"));
    this->bEnableDynamicHardpoint = false;
    this->MinNumToTriggerDynamicHardpoint = 1;
    this->DynamicHardpoint = NULL;
}


