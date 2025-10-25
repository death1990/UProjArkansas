#pragma once
#include "CoreMinimal.h"
#include "QueuedProjectileSpawn.generated.h"

class APawn;
class UWorld;

USTRUCT(BlueprintType)
struct FQueuedProjectileSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> Owner;
    
    ARKANSAS_API FQueuedProjectileSpawn();
};

