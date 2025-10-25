#pragma once
#include "CoreMinimal.h"
#include "EUsableCoverTypes.h"
#include "AISettings_CoverFire.generated.h"

USTRUCT(BlueprintType)
struct FAISettings_CoverFire {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUsableCoverTypes CoverTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoverUseCount;
    
    ARKANSAS_API FAISettings_CoverFire();
};

