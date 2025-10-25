#pragma once
#include "CoreMinimal.h"
#include "EMaterialParamType.h"
#include "AppliedMaterialParam.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FAppliedMaterialParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMaterialInstanceDynamic> DynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    ARKANSAS_API FAppliedMaterialParam();
};

