#pragma once
#include "CoreMinimal.h"
#include "PercentageRange.h"
#include "Templates/SubclassOf.h"
#include "RadToxicityRangeData.generated.h"

class USpell;

USTRUCT(BlueprintType)
struct FRadToxicityRangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPercentageRange ToxicityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> RangeSpell;
    
    ARKANSAS_API FRadToxicityRangeData();
};

