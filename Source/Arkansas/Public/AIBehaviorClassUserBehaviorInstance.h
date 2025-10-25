#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "AIBehaviorClassInitParams.h"
#include "AIBehaviorClassUserBehaviorInstance.generated.h"

USTRUCT(BlueprintType)
struct FAIBehaviorClassUserBehaviorInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIBehaviorClassInitParams InitParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid IdentifierGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdentifierIndex;
    
    ARKANSAS_API FAIBehaviorClassUserBehaviorInstance();
};

