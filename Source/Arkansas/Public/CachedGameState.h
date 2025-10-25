#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PendingDeferredSpawn.h"
#include "CachedGameState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCachedGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPendingDeferredSpawn> PendingDeferredSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AActor*> DeferredSpawnsByGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FGuid> DeferredSpawnGUIDs;
    
    ARKANSAS_API FCachedGameState();
};

