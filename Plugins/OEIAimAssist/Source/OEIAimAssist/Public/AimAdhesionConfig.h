#pragma once
#include "CoreMinimal.h"
#include "AimAdhesionConfig.generated.h"

USTRUCT(BlueprintType)
struct OEIAIMASSIST_API FAimAdhesionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdhesionRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdhesionDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdhesionPercentMultiplier;
    
    FAimAdhesionConfig();
};

