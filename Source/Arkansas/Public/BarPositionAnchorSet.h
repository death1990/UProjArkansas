#pragma once
#include "CoreMinimal.h"
#include "BarPositionData.h"
#include "BarPositionAnchorSet.generated.h"

USTRUCT(BlueprintType)
struct FBarPositionAnchorSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBarPositionData Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBarPositionData Right;
    
    ARKANSAS_API FBarPositionAnchorSet();
};

