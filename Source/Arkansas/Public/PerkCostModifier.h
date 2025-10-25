#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PerkCostModifier.generated.h"

class UPerk;

USTRUCT(BlueprintType)
struct FPerkCostModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPerk> Perk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostModifier;
    
    ARKANSAS_API FPerkCostModifier();
};

