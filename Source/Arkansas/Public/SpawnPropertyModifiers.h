#pragma once
#include "CoreMinimal.h"
#include "BehaviorPackage.h"
#include "Templates/SubclassOf.h"
#include "SpawnPropertyModifiers.generated.h"

class UStaticLootList;
class UTeamData;

USTRUCT(BlueprintType)
struct FSpawnPropertyModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTeamData> TeamOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticLootList*> AdditionalLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideOutOfCombatBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBehaviorPackage OutOfCombatBehavior;
    
    ARKANSAS_API FSpawnPropertyModifiers();
};

