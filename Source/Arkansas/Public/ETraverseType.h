#pragma once
#include "CoreMinimal.h"
#include "ETraverseType.generated.h"

UENUM(BlueprintType)
enum class ETraverseType : uint8 {
    None,
    JumpAcross,
    Crouch,
    Climb,
    Mantle,
    Vault,
    DropDown,
};

