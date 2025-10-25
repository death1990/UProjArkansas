#include "BTTask_BehaviorFunction.h"

UBTTask_BehaviorFunction::UBTTask_BehaviorFunction() {
    this->FunctionClassInst = NULL;
    this->CharacterOwner = NULL;
    this->ControllerOwner = NULL;
    this->bWaitForDeferredResult = false;
    this->bRestartFunctionOnResume = false;
}

void UBTTask_BehaviorFunction::OnFunctionClassBlueprintCompiled(UBlueprint* Blueprint) {
}

void UBTTask_BehaviorFunction::OnAIBehaviorFunctionDeferredResult(bool bSuccess) {
}


