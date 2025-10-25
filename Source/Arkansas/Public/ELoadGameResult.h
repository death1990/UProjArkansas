#pragma once
#include "CoreMinimal.h"
#include "ELoadGameResult.generated.h"

UENUM(BlueprintType)
enum class ELoadGameResult : uint8 {
    Success,
    Unimplemented,
    Restricted,
    MissingFile,
    FileReadingFailure,
    CorruptionDetected,
    UnableToRestorePlayerState,
    UnableToRestoreCompanionState,
    NoCompanionManager,
    ClassDependencyLoadFailure,
    SpawnFailure,
    InvalidQuicksaveIndex,
    InvalidAutosaveIndex,
    SaveOfGivenNameNotFound,
    PlatformLoadUnsuccessful,
    StorageUninitialized,
    SaveVersionUnsupported,
    SaveFromNewerBuild,
    MapLoadFailure,
    ChunkInstallation,
    CompressedGameStateUnpackFailure,
    LoadCanceledByUser,
};

