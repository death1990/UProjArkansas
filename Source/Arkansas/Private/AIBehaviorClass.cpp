#include "AIBehaviorClass.h"

UAIBehaviorClass::UAIBehaviorClass() {
    this->Character = NULL;
    this->Controller = NULL;
    this->BehaviorTree = NULL;
    this->bIsInitialized = false;
    this->bIsFromGameLoad = false;
    this->bIsStarting = false;
    this->bIsStopping = false;
    this->bIsInCleanup = false;
    this->bIsRunning = false;
    this->bIsPaused = false;
    this->bIsCompleted = false;
    this->bIsAborted = false;
    this->bCompletedResult = false;
    this->bIsPausedLogicSuppressed = false;
    this->bAllowsAbort = true;
    this->bNeedsTick = false;
    this->bNeedsPostGameLoad = false;
    this->bNeedsRestartOnResume = false;
    this->bIsPriorityNodeSuspensionHandledManually = false;
}

bool UAIBehaviorClass::GetNeedsTick() const {
    return false;
}

bool UAIBehaviorClass::GetNeedsRestartOnResume() const {
    return false;
}

bool UAIBehaviorClass::GetNeedsPostGameLoad() const {
    return false;
}

bool UAIBehaviorClass::GetIsRunning() const {
    return false;
}

bool UAIBehaviorClass::GetIsCompleted() const {
    return false;
}

bool UAIBehaviorClass::GetIsAborted() const {
    return false;
}

bool UAIBehaviorClass::GetCompletedResult() const {
    return false;
}

void UAIBehaviorClass::FinishBehavior(const bool bResult) {
}

bool UAIBehaviorClass::AllowsAbort() {
    return false;
}

void UAIBehaviorClass::AIDebugPrintTime(const FString& Text, int32 Level, float Time) {
}

void UAIBehaviorClass::AIDebugPrint(const FString& Text, int32 Level) {
}

void UAIBehaviorClass::AbortBehavior() {
}


