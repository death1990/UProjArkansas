#pragma once
#include "CoreMinimal.h"
#include "OEISettingChangedBool_BPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOEISettingChangedBool_BP, bool, bNewValue);

