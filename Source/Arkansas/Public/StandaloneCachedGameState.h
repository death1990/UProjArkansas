#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PendingDeferredSpawn.h"
#include "StandaloneCachedGameState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FStandaloneCachedGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPendingDeferredSpawn> PendingDeferredSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DeferredSpawnStandaloneActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AActor*> DeferredSpawnsByGUID;
    
    ARKANSAS_API FStandaloneCachedGameState();
};

