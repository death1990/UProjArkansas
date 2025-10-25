#pragma once
#include "CoreMinimal.h"
#include "GenericScriptDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGenericScriptDelegate, const FString&, KeyString, const FString&, StringParam, int32, IntParam, float, FloatParam);

