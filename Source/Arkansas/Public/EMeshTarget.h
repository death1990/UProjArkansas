#pragma once
#include "CoreMinimal.h"
#include "EMeshTarget.generated.h"

UENUM(BlueprintType)
enum class EMeshTarget : uint8 {
    FirstMesh,
    CurrentCharacterMesh,
    WeaponMesh,
};

