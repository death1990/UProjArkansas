#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "LootOnBreakdown.generated.h"

class UStaticLootList;

USTRUCT(BlueprintType)
struct FLootOnBreakdown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkill Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticLootList* LootTable;
    
    ARKANSAS_API FLootOnBreakdown();
};

