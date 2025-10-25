#include "AIGroupBehaviorAlgorithm.h"

FAIGroupBehaviorAlgorithm::FAIGroupBehaviorAlgorithm() {
    this->AlgorithmLastResultCycles = 0;
    this->TimeForNextContinuousRun = 0;
    this->ContinuousUpdateRateCookingCycles = 0;
    this->ContinuousUpdateRateRunningCycles = 0;
    this->ContinuousUpdateRateCookingSeconds = 0.00f;
    this->ContinuousUpdateRateRunningSeconds = 0.00f;
    this->AlgorithmState = EAIGroupBehaviorAlgorithmState::Empty;
    this->bIsContinuousWhileCooking = false;
    this->bIsContinuousWhileRunning = false;
    this->bIsSetFromInstantiation = false;
    this->bIsNative = false;
}

