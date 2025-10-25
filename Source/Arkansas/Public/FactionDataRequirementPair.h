#pragma once
#include "CoreMinimal.h"
#include "ERankLevel.h"
#include "Templates/SubclassOf.h"
#include "FactionDataRequirementPair.generated.h"

class UFactionData;

USTRUCT(BlueprintType)
struct FFactionDataRequirementPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFactionData> Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERankLevel RankRequirement;
    
    ARKANSAS_API FFactionDataRequirementPair();
};

