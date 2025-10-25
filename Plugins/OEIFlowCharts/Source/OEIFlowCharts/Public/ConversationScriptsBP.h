#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ConversationReference.h"
#include "ConversationScriptsBP.generated.h"

UCLASS(Blueprintable)
class UConversationScriptsBP : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConversationScriptsBP();

    UFUNCTION(BlueprintCallable)
    static void SetConversationCheckpoint(const FConversationReference& Conversation, int32 CheckpointNodeID);
    
    UFUNCTION(BlueprintCallable)
    static void MarkConversationNodeAsRead(const FConversationReference& Conversation, int32 NodeID);
    
    UFUNCTION(BlueprintCallable)
    static void ClearConversationNodeAsRead(const FConversationReference& Conversation, int32 NodeID);
    
    UFUNCTION(BlueprintCallable)
    static void ClearConversationCheckpoint(const FConversationReference& Conversation);
    
};

