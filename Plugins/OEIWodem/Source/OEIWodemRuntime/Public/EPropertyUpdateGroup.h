#pragma once
#include "CoreMinimal.h"
#include "EPropertyUpdateGroup.generated.h"

UENUM(BlueprintType)
enum EPropertyUpdateGroup {
    PropertyUpdate,
    ScatterUpdate,
    RaycastUpdate,
    UpdateEverything,
};

