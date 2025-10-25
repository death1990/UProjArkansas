#pragma once
#include "CoreMinimal.h"
#include "EAttachTarget.generated.h"

UENUM(BlueprintType)
enum class EAttachTarget : uint8 {
    FirstMesh,
    CurrentCharacterMesh,
    WeaponMesh,
    FirstPersonCamera,
};

