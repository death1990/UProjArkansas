#pragma once
#include "CoreMinimal.h"
#include "ECharacterCreationPageType.generated.h"

UENUM(BlueprintType)
enum class ECharacterCreationPageType : uint8 {
    Attributes,
    Skills,
    Aptitude,
    Physical,
    Naming,
    Summary,
    Count,
};

