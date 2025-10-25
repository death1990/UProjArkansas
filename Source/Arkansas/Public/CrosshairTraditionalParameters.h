#pragma once
#include "CoreMinimal.h"
#include "CrosshairTraditionalParameters.generated.h"

USTRUCT(BlueprintType)
struct FCrosshairTraditionalParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraditionalCrosshairOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraditionalCrosshairOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraditionalShadowOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraditionalShadowOpacity;
    
    ARKANSAS_API FCrosshairTraditionalParameters();
};

