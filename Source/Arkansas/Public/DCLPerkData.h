#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DCLPerkData.generated.h"

class UPerk;

USTRUCT(BlueprintType)
struct FDCLPerkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPerk>> Perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearExistingPerks;
    
    ARKANSAS_API FDCLPerkData();
};

