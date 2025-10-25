#pragma once
#include "CoreMinimal.h"
#include "OnExitRpgExaminablePageDelegate.generated.h"

class URPGExaminableData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnExitRpgExaminablePage, URPGExaminableData*, RPGExaminableData, int32, PageIndex, bool, bWasUIClosed);

