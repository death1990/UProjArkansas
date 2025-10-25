#pragma once
#include "CoreMinimal.h"
#include "AISettings_RangedReposition.generated.h"

USTRUCT(BlueprintType)
struct FAISettings_RangedReposition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackwardWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeWeight;
    
    ARKANSAS_API FAISettings_RangedReposition();
};

