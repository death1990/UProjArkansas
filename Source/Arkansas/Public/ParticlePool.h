#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ParticleSystemPool.h"
#include "PendingParticleSpawnInfo.h"
#include "ParticlePool.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class UParticlePool : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UParticleSystem*, FParticleSystemPool> Pools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPendingParticleSpawnInfo> PendingPrespawns;
    
public:
    UParticlePool();

protected:
    UFUNCTION(BlueprintCallable)
    void ParticleFreed(UParticleSystemComponent* Particle);
    
};

