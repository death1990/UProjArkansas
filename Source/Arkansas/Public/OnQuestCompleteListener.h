#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EventListener.h"
#include "OnQuestCompleteListener.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnQuestCompleteListener : public UEventListener {
    GENERATED_BODY()
public:
    UOnQuestCompleteListener();

protected:
    UFUNCTION(BlueprintCallable)
    void OnQuestComplete(const FGuid& QuestID) const;
    
};

