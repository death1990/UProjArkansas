#pragma once
#include "CoreMinimal.h"
#include "CompanionDistanceSetting.generated.h"

USTRUCT(BlueprintType)
struct FCompanionDistanceSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdealDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    ARKANSAS_API FCompanionDistanceSetting();
};

