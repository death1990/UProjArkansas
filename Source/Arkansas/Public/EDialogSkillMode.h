#pragma once
#include "CoreMinimal.h"
#include "EDialogSkillMode.generated.h"

UENUM(BlueprintType)
enum class EDialogSkillMode : uint8 {
    Never,
    OnlyWhenClose,
    Always,
};

