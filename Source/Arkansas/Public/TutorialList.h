#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GenericCollapsableList.h"
#include "TutorialList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTutorialList : public UGenericCollapsableList {
    GENERATED_BODY()
public:
    UTutorialList();

    UFUNCTION(BlueprintCallable)
    void AddNewCompletedTutorial(const FGameplayTag& TutorialTag);
    
};

