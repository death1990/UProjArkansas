#pragma once
#include "CoreMinimal.h"
#include "ESaveLoadRestriction.generated.h"

UENUM(BlueprintType)
enum class ESaveLoadRestriction : uint8 {
    NoCurrentRestriction,
    SystemUnimplemented,
    InvalidStorageProvider,
    RunningPlayInEditor,
    NoPlayerPresent,
    CinematicInProgress,
    PlayerInConversation,
    PlayerInCombat,
    PlayerCrimeDetected,
    LevelTraveling,
    ModalInterface,
    PlayerIsIncapacitated,
    SaveInProgress,
    LoadInProgress,
    TimeDilation,
    ManualRestriction,
    Unsupported,
    DeviceFull,
    PlatformSaveSystemNull,
    PlatformStorageInaccessible,
    PlayerFalling,
    PlayerParkouring,
    PlayerOnLadder,
    PlayerInActiveHazard,
    PlayerInterpolatingToSpline,
    PlayerDeadOrDying,
    PlayerInAnimProxy,
    PlayerWeaponIsHolsteringOrUnholstering,
    PlayerMotionWarping,
    SuperNovaOnlySaveOnShip,
    UserLoggingOut,
    UIWindowActive,
    UICharacterCreationActive,
    CompanionReviving,
};

