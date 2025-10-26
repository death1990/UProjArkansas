#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ConditionalLibrary.h"
#include "ConversationConditionals.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UConversationConditionals : public UConditionalLibrary {
    GENERATED_BODY()
public:
    UConversationConditionals();

    UFUNCTION(BlueprintCallable)
    static bool IsSpeakerDead(FGuid Speaker);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInstanceDead(FGuid Instance);
    
    UFUNCTION(BlueprintCallable)
    static bool HasConversationNodeBeenVisited(FGuid ConversationID, int32 NodeID);
    
};

