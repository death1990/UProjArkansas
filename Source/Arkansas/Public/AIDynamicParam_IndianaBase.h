#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EAIParamType -FallbackName=EAIParamType
#include "AISelector_EQSParameter.h"
#include "AIDynamicParam_IndianaBase.generated.h"

USTRUCT(BlueprintType)
struct FAIDynamicParam_IndianaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISelector_EQSParameter ValueSelector;
    
    ARKANSAS_API FAIDynamicParam_IndianaBase();
};

