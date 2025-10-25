#include "AIBehaviorFunctionHelpersLibrary.h"

UAIBehaviorFunctionHelpersLibrary::UAIBehaviorFunctionHelpersLibrary() {
}

bool UAIBehaviorFunctionHelpersLibrary::IsDeferredDelegateBoundToObject(const FAIBehaviorFunctionContext& Context, const UObject* Object) {
    return false;
}

bool UAIBehaviorFunctionHelpersLibrary::IsDeferredDelegateBound(const FAIBehaviorFunctionContext& Context) {
    return false;
}

AIndianaAiController* UAIBehaviorFunctionHelpersLibrary::GetAIController(const FAIBehaviorFunctionContext& Context) {
    return NULL;
}

AIndianaAiCharacter* UAIBehaviorFunctionHelpersLibrary::GetAICharacter(const FAIBehaviorFunctionContext& Context) {
    return NULL;
}

UOwBlackboardComponent* UAIBehaviorFunctionHelpersLibrary::GetAIBlackboard(const FAIBehaviorFunctionContext& Context) {
    return NULL;
}

void UAIBehaviorFunctionHelpersLibrary::CallDeferredDelegate(const FAIBehaviorFunctionContext& Context, const bool bResult) {
}


