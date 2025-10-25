#pragma once
#include "CoreMinimal.h"
#include "ParameterizerSettings.generated.h"

USTRUCT(BlueprintType)
struct FParameterizerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargeChartsImportance;
    
    SIMPLYGONUOBJECTS_API FParameterizerSettings();
};

