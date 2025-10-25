#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDynamicParam -FallbackName=AIDynamicParam
#include "EQSSelectorParam.generated.h"

class UAIEQSParameter;

USTRUCT(BlueprintType)
struct ARKANSAS_API FEQSSelectorParam : public FAIDynamicParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAIEQSParameter> ValueSelector;
    
    FEQSSelectorParam();
};

