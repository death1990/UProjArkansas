#pragma once
#include "CoreMinimal.h"
#include "FootLocomotionData.generated.h"

USTRUCT(BlueprintType)
struct FFootLocomotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FootDownKeys;
    
    ARKANSAS_API FFootLocomotionData();
};

