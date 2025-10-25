#pragma once
#include "CoreMinimal.h"
#include "SetThrowableEquippedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetThrowableEquippedSignature, int32, ThrowableIndex);

