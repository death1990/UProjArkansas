#pragma once
#include "CoreMinimal.h"
#include "ERpgStatGroup.h"
#include "EStatModifierType.h"
#include "StatModifierDescriptionBase.generated.h"

class URpgStat;

USTRUCT(BlueprintType)
struct FStatModifierDescriptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URpgStat* RpgStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERpgStatGroup Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatModifierType ModifierType;
    
    ARKANSAS_API FStatModifierDescriptionBase();
};

