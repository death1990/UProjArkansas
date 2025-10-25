#pragma once
#include "CoreMinimal.h"
#include "EAttackRestrictions.generated.h"

UENUM(Flags)
enum class EAttackRestrictions {
    None,
    PendingReload,
    Sprinting,
    Blocking = 4,
    AttackSuspended = 8,
    InputSuppressed = 16,
    Reloading = 32,
    NoAmmo = 64,
    QuickMeleeCooldown = 128,
    FireCooldown = 256,
    UsingAnimProxy = 512,
    ReloadUninterruptible = 1024,
    Overheated = 2048,
    Sliding = 4096,
    Parkour = 8192,
    RequiresTargetLock = 16384,
    InPlayerShip = 32768,
};

