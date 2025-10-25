#pragma once
#include "CoreMinimal.h"
#include "DCLInventoryData.generated.h"

class UStaticLootList;

USTRUCT(BlueprintType)
struct FDCLInventoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludePlayerSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludePlayerPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticLootList* Loot;
    
    ARKANSAS_API FDCLInventoryData();
};

