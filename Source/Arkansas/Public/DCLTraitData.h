#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DCLTraitData.generated.h"

class UTrait;

USTRUCT(BlueprintType)
struct FDCLTraitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTrait>> Traits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveOtherTraits;
    
    ARKANSAS_API FDCLTraitData();
};

