#pragma once
#include "CoreMinimal.h"
#include "EHolsterRequestSource.generated.h"

UENUM()
enum class EHolsterRequestSource {
    None,
    Player,
    Ladder,
    Medkit = 4,
    Scripted = 8,
    Throwable = 16,
    AnimProxy = 32,
    Conversation = 64,
    MapDesignated = 128,
    Gadget = 256,
    SneakAttack = 512,
};

