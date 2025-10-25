#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EBoolResult -FallbackName=EBoolResult
#include "ConversationConditionalsBP.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UConversationConditionalsBP : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConversationConditionalsBP();

    UFUNCTION(BlueprintCallable)
    static bool IsSpeakerDead(FGuid Speaker, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInstanceDead(FGuid Instance, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool HasConversationNodeBeenVisited(FGuid ConversationID, int32 NodeID, EBoolResult& OutResult);
    
};

