#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "KillOnSightConditional.generated.h"

class UFactionData;

USTRUCT(BlueprintType)
struct FKillOnSightConditional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFactionData> Faction;
    
    ARKANSAS_API FKillOnSightConditional();
};

