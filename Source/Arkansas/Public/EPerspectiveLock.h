#pragma once
#include "CoreMinimal.h"
#include "EPerspectiveLock.generated.h"

UENUM()
enum class EPerspectiveLock {
    FineAim = 1,
    Reload,
    Equip = 4,
    Unequip = 8,
    ForceP1P = 16,
    Interact = 32,
    Parkour = 64,
    DownOrDead = 128,
    Gadget = 256,
    Throwable = 512,
    Melee = 1024,
    SneakAttack = 2048,
};

