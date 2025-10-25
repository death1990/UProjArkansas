#pragma once
#include "CoreMinimal.h"
#include "ETrackingRegion.generated.h"

UENUM(BlueprintType)
enum ETrackingRegion {
    TR_Head,
    TR_Body,
    TR_Eyes,
    TR_WeaponAim,
    TR_Count,
};

