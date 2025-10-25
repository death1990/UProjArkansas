#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIScripting -ObjectName=ScriptLibrary -FallbackName=ScriptLibrary
#include "ConversationScripts.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UConversationScripts : public UScriptLibrary {
    GENERATED_BODY()
public:
    UConversationScripts();

    UFUNCTION(BlueprintCallable)
    static void SetConversationCheckpoint(FGuid ConversationID, int32 CheckpointNodeID);
    
    UFUNCTION(BlueprintCallable)
    static void MarkConversationNodeAsRead(FGuid ConversationID, int32 NodeID);
    
    UFUNCTION(BlueprintCallable)
    static void ClearNodePersistence(FGuid ConversationID, int32 NodeID);
    
    UFUNCTION(BlueprintCallable)
    static void ClearConversationNodeAsRead(FGuid ConversationID, int32 NodeID);
    
    UFUNCTION(BlueprintCallable)
    static void ClearConversationCheckpoint(FGuid ConversationID);
    
};

