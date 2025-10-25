#pragma once
#include "CoreMinimal.h"
#include "EMarkType.generated.h"

UENUM(BlueprintType)
enum class EMarkType : uint8 {
    None,
    Player,
    Owner,
    Companion1,
    Companion2,
    Companion3,
    Companion4,
    NPC1,
    NPC2,
    NPC3,
    NPC4,
    NPC5,
    NPC6,
    NPC7,
    NPC8,
    NPC9,
    Custom,
    Count,
};

