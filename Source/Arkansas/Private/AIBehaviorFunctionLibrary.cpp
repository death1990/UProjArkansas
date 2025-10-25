#include "AIBehaviorFunctionLibrary.h"

UAIBehaviorFunctionLibrary::UAIBehaviorFunctionLibrary() {
}

bool UAIBehaviorFunctionLibrary::PreFunctionCall(const FAIBehaviorFunctionContext& Context, UClass* Library, UFunction* Function) {
    return false;
}

void UAIBehaviorFunctionLibrary::PostFunctionCall(const FAIBehaviorFunctionContext& Context, const EAIBehaviorFunctionResult ReturnValue, UClass* Library, UFunction* Function) {
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary::DefaultFunctionSignature(const FAIBehaviorFunctionContext& Context) {
    return EAIBehaviorFunctionResult::Success;
}

void UAIBehaviorFunctionLibrary::CreateContextForInstanceWithDelegate(UObject* Instance, const FAIBehaviorFunctionDeferredResult& OnDeferredResult, FAIBehaviorFunctionContext& OutContext, UObject*& OutWorldContext) {
}

void UAIBehaviorFunctionLibrary::CreateContextForInstance(UObject* Instance, FAIBehaviorFunctionContext& OutContext, UObject*& OutWorldContext) {
}


