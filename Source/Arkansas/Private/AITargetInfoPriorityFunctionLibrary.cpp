#include "AITargetInfoPriorityFunctionLibrary.h"

UAITargetInfoPriorityFunctionLibrary::UAITargetInfoPriorityFunctionLibrary() {
}

FPriorityNodeHandle UAITargetInfoPriorityFunctionLibrary::SetDetectedTargetComparisonLogic(AIndianaAiController* Controller, EPriorityNodeValue Priority, FCompareDetectedTargetsDelegate Delegate) {
    return FPriorityNodeHandle{};
}

FPriorityNodeHandle UAITargetInfoPriorityFunctionLibrary::SetCanSwitchToTargetLogic(AIndianaAiController* Controller, EPriorityNodeValue Priority, FCanSwitchToTargetDelegate Delegate) {
    return FPriorityNodeHandle{};
}

FPriorityNodeHandle UAITargetInfoPriorityFunctionLibrary::OverridePrimaryTarget(AIndianaAiController* Controller, EPriorityNodeValue Priority, FDynamicOverridePrimaryTargetDelegate Delegate) {
    return FPriorityNodeHandle{};
}

FPriorityNodeHandle UAITargetInfoPriorityFunctionLibrary::ForceOverridePrimaryTarget(AIndianaAiController* Controller, EPriorityNodeValue Priority, AActor* ForcedTargetActor) {
    return FPriorityNodeHandle{};
}

FPriorityNodeHandle UAITargetInfoPriorityFunctionLibrary::DisableTargeting(AIndianaAiController* Controller, EPriorityNodeValue Priority) {
    return FPriorityNodeHandle{};
}


