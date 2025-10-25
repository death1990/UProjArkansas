#pragma once
#include "CoreMinimal.h"
#include "AimFrictionConfig.generated.h"

USTRUCT(BlueprintType)
struct OEIAIMASSIST_API FAimFrictionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrictionPercentScalar;
    
    FAimFrictionConfig();
};

