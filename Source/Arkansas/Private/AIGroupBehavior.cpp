#include "AIGroupBehavior.h"

UAIGroupBehavior::UAIGroupBehavior() {
    this->Category = EAIGroupBehaviorCategory::None;
    this->bIsDefaultOptIn = false;
    this->bCanBeCooked = true;
    this->bEnableContinuousCooking = true;
    this->bWaitForAiInterruptsWhenCooking = false;
    this->bAllowDeadNPCs = false;
    this->MaxInstanceCount = 0;
    this->PriorityCooking = 0;
    this->UpdateRateCooking = 0.20f;
    this->UpdateRateRunning = 0.20f;
    this->CookingCooldownTime = 0.00f;
    this->bHasCriticalSection = false;
    this->TimeUntilNextTick = 0.00f;
    this->bIsStarting = false;
    this->bIsEnding = false;
    this->bIsAborting = false;
    this->bIsRunning = false;
    this->bIsCooking = false;
    this->bHasQueuedEnd = false;
    this->bHasQueuedAbort = false;
    this->bIsFromInstantiation = false;
    this->bIsFromGameLoad = false;
    this->bNeedsPostGameLoad = false;
}


