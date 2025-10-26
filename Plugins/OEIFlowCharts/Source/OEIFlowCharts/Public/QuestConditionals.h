#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ConditionalLibrary.h"
#include "QuestConditionals.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UQuestConditionals : public UConditionalLibrary {
    GENERATED_BODY()
public:
    UQuestConditionals();

    UFUNCTION(BlueprintCallable)
    static bool IsQuestSucceeded(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStatus(FGuid QuestID, bool bFailed, bool bActive, bool bComplete, bool bMentioned, bool bStarted);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStateVisited(FGuid QuestID, int32 NodeID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStateIrrelevant(FGuid QuestID, int32 NodeID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStateActive(FGuid QuestID, int32 NodeID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStarted(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestMentioned(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestEventTriggered(FGuid QuestID, int32 QuestEventID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestEndStateTriggered(FGuid QuestID, int32 EndStateID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestComplete(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestAddendumTriggered(FGuid QuestID, int32 AddendumID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestActive(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestSucceeded(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestStateSucceeded(FGuid QuestID, int32 NodeID);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestStateFailedOrIsIrrelevant(FGuid QuestID, int32 NodeID);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestStateFailed(FGuid QuestID, int32 NodeID);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestFailed(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestEnded(FGuid QuestID);
    
};

