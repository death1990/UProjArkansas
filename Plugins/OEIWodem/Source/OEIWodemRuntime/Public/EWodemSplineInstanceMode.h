#pragma once
#include "CoreMinimal.h"
#include "EWodemSplineInstanceMode.generated.h"

UENUM(BlueprintType)
enum EWodemSplineInstanceMode {
    AtEachPoint,
    AlongSpline,
    RandomScatter,
};

