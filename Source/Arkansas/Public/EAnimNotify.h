#pragma once
#include "CoreMinimal.h"
#include "EAnimNotify.generated.h"

UENUM(BlueprintType)
enum class EAnimNotify : uint8 {
    CalledShotCameraStart,
    WeaponFire,
    MeleeAllowInput,
    MeleeDisallowInput,
    MeleeCanStartQueuedAction,
    MeleeActionFinished,
    MeleeRecoilFrame,
    MeleeCheckInput,
    MeleeDamageTypePending,
    MeleeDamageTypeNext,
    AnimationFinished,
    RefillAmmo,
    AttachWeapon,
    DetachWeapon,
    UseMedKit,
    MedKitEnd,
    Finished,
    MeleeEnableBlock,
    DeployThrowable,
    AttachThrowable,
    Interact,
    ReloadOneBullet,
    SetFineAim,
    SetFineAimOff,
    FuelReloadStart,
    FuelReloadTick,
    FuelReloadStop,
    MineDisarmStart,
    MineDisarmAttach,
    InteractComplete,
    SwapMesh,
    ShowGel,
    IgnoreInputSuppression,
    UnignoreInputSuppression,
    Invalid,
};

