#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EBoolResult -FallbackName=EBoolResult
#include "QuestConditionalsBP.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UQuestConditionalsBP : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestConditionalsBP();

    UFUNCTION(BlueprintCallable)
    static bool IsQuestSucceeded(FGuid QuestID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStatus(FGuid QuestID, bool bFailed, bool bActive, bool bComplete, bool bMentioned, bool bStarted, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStateVisited(FGuid QuestID, int32 NodeID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStateIrrelevant(FGuid QuestID, int32 NodeID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStateActive(FGuid QuestID, int32 NodeID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestStarted(FGuid QuestID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestMentioned(FGuid QuestID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestEndStateTriggered(FGuid QuestID, int32 EndStateID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestComplete(FGuid QuestID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestAddendumTriggered(FGuid QuestID, int32 AddendumID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestSucceeded(FGuid QuestID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestStateSucceeded(FGuid QuestID, int32 NodeID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestStateFailedOrIsIrrelevant(FGuid QuestID, int32 NodeID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestStateFailed(FGuid QuestID, int32 NodeID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestFailed(FGuid QuestID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool HasQuestEnded(FGuid QuestID, EBoolResult& OutResult);
    
};

