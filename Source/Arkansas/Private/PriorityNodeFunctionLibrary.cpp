#include "PriorityNodeFunctionLibrary.h"

UPriorityNodeFunctionLibrary::UPriorityNodeFunctionLibrary() {
}

bool UPriorityNodeFunctionLibrary::IsValid(FPriorityNodeHandle& PriorityNodeHandle) {
    return false;
}

FPriorityNodeHandle UPriorityNodeFunctionLibrary::DefaultFunctionSignature(AIndianaAiController* Controller, EPriorityNodeValue Priority) {
    return FPriorityNodeHandle{};
}

bool UPriorityNodeFunctionLibrary::Deactivate(FPriorityNodeHandle& PriorityNodeHandle) {
    return false;
}

void UPriorityNodeFunctionLibrary::AssignTickDelegates(FPriorityNodeHandle& PriorityNodeHandle, FOnPriorityNodeTickedScriptDelegate Tick) {
}

void UPriorityNodeFunctionLibrary::AssignOutputDelegates(FPriorityNodeHandle& PriorityNodeHandle, FOnPriorityNodeStartedScriptDelegate Start, FOnPriorityNodeStoppedScriptDelegate Stop) {
}

bool UPriorityNodeFunctionLibrary::Activate(FPriorityNodeHandle& PriorityNodeHandle, UObject* Owner, const FString& FromWhere) {
    return false;
}


