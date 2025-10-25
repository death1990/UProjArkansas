#pragma once
#include "CoreMinimal.h"
#include "SkillModTableRow.h"
#include "SkillModTable.generated.h"

USTRUCT(BlueprintType)
struct FSkillModTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillModTableRow> SkillModifierTable;
    
    ARKANSAS_API FSkillModTable();
};

