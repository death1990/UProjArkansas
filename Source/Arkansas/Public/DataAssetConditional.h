#pragma once
#include "CoreMinimal.h"
#include "DataAssetConditional.generated.h"

class ULogicalExpressionDataAsset;

USTRUCT(BlueprintType)
struct FDataAssetConditional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULogicalExpressionDataAsset* LogicalExpressionDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNot;
    
    ARKANSAS_API FDataAssetConditional();
};

