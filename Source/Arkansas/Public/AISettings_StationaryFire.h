#pragma once
#include "CoreMinimal.h"
#include "AISettings_FiringPattern.h"
#include "AISettings_StationaryFire.generated.h"

USTRUCT(BlueprintType)
struct FAISettings_StationaryFire {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISettings_FiringPattern FiringPattern;
    
    ARKANSAS_API FAISettings_StationaryFire();
};

