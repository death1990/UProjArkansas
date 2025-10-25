#pragma once
#include "CoreMinimal.h"
#include "ParameterValue.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    ARKANSAS_API FParameterValue();
};

