#pragma once
#include "CoreMinimal.h"
#include "BlueprintAssetsLoadedCompleteDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FBlueprintAssetsLoadedComplete, const TArray<UObject*>&, LoadedObjects);

