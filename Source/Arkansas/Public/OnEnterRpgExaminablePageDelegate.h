#pragma once
#include "CoreMinimal.h"
#include "OnEnterRpgExaminablePageDelegate.generated.h"

class URPGExaminableData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnterRpgExaminablePage, URPGExaminableData*, RPGExaminableData, int32, PageIndex);

