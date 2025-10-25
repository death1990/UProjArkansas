#pragma once
#include "CoreMinimal.h"
#include "ENPCOverrideType.generated.h"

UENUM(BlueprintType)
enum class ENPCOverrideType : uint8 {
    LocString,
    Texture2D,
    Int32,
    FName,
    Name = LocString,
    Description = LocString,
    Image = Texture2D,
    Age = Int32,
    Occupation = LocString,
    Location = FName,
};

