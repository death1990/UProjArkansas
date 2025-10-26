#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ScriptLibrary.h"
#include "QuestScripts.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UQuestScripts : public UScriptLibrary {
    GENERATED_BODY()
public:
    UQuestScripts();

    UFUNCTION(BlueprintCallable)
    static void TriggerQuestAddendum(FGuid QuestID, int32 AddendumID, bool DisplayNotification, bool bAlwaysShowInHUD);
    
    UFUNCTION(BlueprintCallable)
    static void StartQuestWithAlternateDescription(FGuid QuestID, int32 QuestDescriptionID);
    
    UFUNCTION(BlueprintCallable)
    static void StartQuest(FGuid QuestID);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuestAlternateDescription(FGuid QuestID, int32 QuestDescriptionID);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectiveAlternateDescription(FGuid QuestID, int32 ObjectiveID, int32 ObjectiveDescriptionID);
    
    UFUNCTION(BlueprintCallable)
    static void MentionQuest(FGuid QuestID, int32 QuestDescriptionID);
    
    UFUNCTION(BlueprintCallable)
    static void DebugAdvanceQuest(FGuid QuestID);
    
};

