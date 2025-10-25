#pragma once
#include "CoreMinimal.h"
#include "OEISettingChangedFloat_BPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOEISettingChangedFloat_BP, float, NewValue);

