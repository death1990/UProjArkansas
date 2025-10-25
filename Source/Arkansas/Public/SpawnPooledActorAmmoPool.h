#pragma once
#include "CoreMinimal.h"
#include "AmmoPoolBase.h"
#include "SpawnPooledActorAmmoPool.generated.h"

class AActor;
class UOwActorPool;

UCLASS(Blueprintable, EditInlineNew)
class USpawnPooledActorAmmoPool : public UAmmoPoolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> PooledActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DryFireReloadCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNPCAmmoPool;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOwActorPool* ActorPool;
    
public:
    USpawnPooledActorAmmoPool();

};

