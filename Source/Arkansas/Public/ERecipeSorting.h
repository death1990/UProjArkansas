#pragma once
#include "CoreMinimal.h"
#include "ERecipeSorting.generated.h"

UENUM(BlueprintType)
enum class ERecipeSorting : uint8 {
    CustomSort,
    Alphabetical,
    Requirements,
    RecipeType,
};

