#pragma once
#include "CoreMinimal.h"
#include "ChargeLevelInfo.generated.h"

USTRUCT(BlueprintType)
struct FChargeLevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChargeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowFlash;
    
    ARKANSAS_API FChargeLevelInfo();
};

