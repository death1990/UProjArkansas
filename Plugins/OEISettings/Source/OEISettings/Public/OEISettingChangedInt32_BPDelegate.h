#pragma once
#include "CoreMinimal.h"
#include "OEISettingChangedInt32_BPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOEISettingChangedInt32_BP, int32, NewValue);

