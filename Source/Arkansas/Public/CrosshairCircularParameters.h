#pragma once
#include "CoreMinimal.h"
#include "CrosshairCircularParameters.generated.h"

USTRUCT(BlueprintType)
struct FCrosshairCircularParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCircularCrosshairOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircularCrosshairOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCircularShadowOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircularShadowOpacity;
    
    ARKANSAS_API FCrosshairCircularParameters();
};

