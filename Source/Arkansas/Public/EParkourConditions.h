#pragma once
#include "CoreMinimal.h"
#include "EParkourConditions.generated.h"

UENUM()
enum class EParkourConditions {
    None,
    Shared_ValidData,
    Shared_ValidMaxLedgeHeight,
    Shared_ValidLedgeDetectDistance = 4,
    Shared_Falling = 8,
    Shared_InputMagnitude = 16,
    Shared_InputDirection = 32,
    Shared_MaxLedgeHeightClear = 64,
    Shared_LedgeDetected = 128,
    Shared_LedgeSupported = 256,
    AllShared = 511,
    Mantle_InterpolationCurveValid,
    Mantle_SweepUpClear = 1024,
    Mantle_SweepForwardClear = 2048,
    Mantle_SweepDownHitValid = 4096,
    Mantle_SweepDownHitWalkable = 8192,
    Mantle_SweepDownHitWithinEdgeTolerance = 16384,
    AllShared_And_AllMantle = 32767,
    AllMantle = 32256,
    Vault_InterpolationCurvesValid = 32768,
    Vault_SweepForwardClear = 65536,
    Vault_SweepDownClear = 131072,
    AllShared_And_AllMantle_And_AllVault = 262143,
    AllVault = 229376,
};

