#pragma once
#include "CoreMinimal.h"
#include "TrajectoryResult.h"
#include "CustomArcTrajectoryResult.generated.h"

USTRUCT(BlueprintType)
struct FCustomArcTrajectoryResult : public FTrajectoryResult {
    GENERATED_BODY()
public:
    ARKANSAS_API FCustomArcTrajectoryResult();
};

