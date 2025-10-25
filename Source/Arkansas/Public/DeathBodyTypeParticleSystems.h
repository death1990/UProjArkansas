#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DeathBodyTypeParticleSystems.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class UDeathBodyTypeParticleSystems : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> ParticleSystems;
    
    UDeathBodyTypeParticleSystems();

};

