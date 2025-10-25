#pragma once
#include "CoreMinimal.h"
#include "BaseItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "QuestItmDefinition.generated.h"

class UQuestItem;

USTRUCT(BlueprintType)
struct FQuestItmDefinition : public FBaseItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestItem> QuestItemClass;
    
    ARKANSAS_API FQuestItmDefinition();
};

