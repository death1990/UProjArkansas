#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIGlobalVariables -ObjectName=GlobalVariableReference -FallbackName=GlobalVariableReference
#include "WantsToTalkGlobalVariables.generated.h"

USTRUCT(BlueprintType)
struct FWantsToTalkGlobalVariables {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalVariableReference> Variables;
    
    ARKANSAS_API FWantsToTalkGlobalVariables();
};

