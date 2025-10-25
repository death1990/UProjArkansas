#pragma once
#include "CoreMinimal.h"
#include "SkillModTableRow.generated.h"

USTRUCT(BlueprintType)
struct FSkillModTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalBonusMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalBonusMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillModifier;
    
    ARKANSAS_API FSkillModTableRow();
};

