#pragma once
#include "CoreMinimal.h"
#include "OnPageChoiceSelectDelegate.generated.h"

class URPGExaminableData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPageChoiceSelect, URPGExaminableData*, RPGExaminableData, int32, PageIndex, int32, PageChoiceIndex);

