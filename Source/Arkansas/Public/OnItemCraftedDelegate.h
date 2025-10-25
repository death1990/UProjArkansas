#pragma once
#include "CoreMinimal.h"
#include "OnItemCraftedDelegate.generated.h"

class UCraftingRecipe;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemCrafted, const UCraftingRecipe*, Recipe);

