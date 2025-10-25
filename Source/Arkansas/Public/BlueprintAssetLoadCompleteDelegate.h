#pragma once
#include "CoreMinimal.h"
#include "BlueprintAssetLoadCompleteDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FBlueprintAssetLoadComplete, UObject*, LoadedObject);

