#pragma once
#include "CoreMinimal.h"
#include "ModInstalledDelegateDelegate.generated.h"

class UCharacterInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FModInstalledDelegate, UCharacterInventoryComponent*, CIC);

