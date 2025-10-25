#pragma once
#include "CoreMinimal.h"
#include "SetGadgetEquippedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetGadgetEquippedSignature, int32, GadgetIndex);

