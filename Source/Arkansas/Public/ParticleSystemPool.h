#pragma once
#include "CoreMinimal.h"
#include "ParticleSystemPool.generated.h"

class UPooledParticleSystemComponent;

USTRUCT(BlueprintType)
struct FParticleSystemPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPooledParticleSystemComponent*> ActiveComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPooledParticleSystemComponent*> FreeComponents;
    
    ARKANSAS_API FParticleSystemPool();
};

