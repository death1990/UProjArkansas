#pragma once
#include "CoreMinimal.h"
#include "CrowdScalabilitySettings.generated.h"

USTRUCT(BlueprintType)
struct FCrowdScalabilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMovingCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCrowdCharacters;
    
    OEICROWDMANAGERRUNTIME_API FCrowdScalabilitySettings();
};

