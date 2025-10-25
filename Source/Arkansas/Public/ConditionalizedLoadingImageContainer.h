#pragma once
#include "CoreMinimal.h"
#include "LogicalExpression.h"
#include "WeightedImageData.h"
#include "ConditionalizedLoadingImageContainer.generated.h"

USTRUCT(BlueprintType)
struct FConditionalizedLoadingImageContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeightedImageData Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalExpression Conditional;
    
public:
    ARKANSAS_API FConditionalizedLoadingImageContainer();
};

