#pragma once
#include "CoreMinimal.h"
#include "ETutorialDisplayDefaultType.generated.h"

UENUM(BlueprintType)
enum class ETutorialDisplayDefaultType : uint8 {
    Show,
    ShowWhenFound,
    NeverDisplay,
};

