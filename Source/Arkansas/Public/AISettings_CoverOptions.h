#pragma once
#include "CoreMinimal.h"
#include "AISettings_CoverOptions.generated.h"

USTRUCT(BlueprintType)
struct FAISettings_CoverOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverWeight;
    
    ARKANSAS_API FAISettings_CoverOptions();
};

