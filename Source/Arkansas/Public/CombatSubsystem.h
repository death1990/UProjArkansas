#pragma once
#include "CoreMinimal.h"
#include "OwGameInstanceSubsystem.h"
#include "QueuedProjectileSpawn.h"
#include "RadialExpansion.h"
#include "CombatSubsystem.generated.h"

UCLASS(Blueprintable)
class UCombatSubsystem : public UOwGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadialExpansion> RadialExpansions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedProjectileSpawn> QueuedProjectileSpawns;
    
public:
    UCombatSubsystem();

};

