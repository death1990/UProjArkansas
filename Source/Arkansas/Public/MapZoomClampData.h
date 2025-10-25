#pragma once
#include "CoreMinimal.h"
#include "MapZoomClampData.generated.h"

USTRUCT(BlueprintType)
struct FMapZoomClampData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZoomFactor;
    
    ARKANSAS_API FMapZoomClampData();
};

