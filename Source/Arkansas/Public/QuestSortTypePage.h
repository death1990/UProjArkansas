#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "EQuestSortingOptions.h"
#include "QuestSortTypePage.generated.h"

USTRUCT(BlueprintType)
struct FQuestSortTypePage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestSortingOptions OptionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString SortingTypeString;
    
    ARKANSAS_API FQuestSortTypePage();
};

