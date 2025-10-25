#pragma once
#include "CoreMinimal.h"
#include "PendingParticleSpawnInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FPendingParticleSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Template;
    
    ARKANSAS_API FPendingParticleSpawnInfo();
};

