#pragma once
#include "CoreMinimal.h"
#include "EFXAttachLocationType.generated.h"

UENUM(BlueprintType)
enum class EFXAttachLocationType : uint8 {
    Root,
    SocketByName,
    SocketByParams,
    BoneNearestCenterOfMass,
    BoneNearestSkeletalCenterOfMass,
    FirstWeakSpot,
};

