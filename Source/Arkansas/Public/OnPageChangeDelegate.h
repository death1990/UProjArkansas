#pragma once
#include "CoreMinimal.h"
#include "ECharacterCreationPageType.h"
#include "OnPageChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPageChange, ECharacterCreationPageType, NewPage);

