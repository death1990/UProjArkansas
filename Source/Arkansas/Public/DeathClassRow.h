#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DeathClassRow.generated.h"

class UDeathBodyTypeAudioEvents;
class UDeathBodyTypeParticleSystems;
class UDeathClass;

USTRUCT(BlueprintType)
struct FDeathClassRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDeathClass> DeathClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeathBodyTypeParticleSystems* ParticleSystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeathBodyTypeAudioEvents* AudioEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExagerateVerticalImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExageratedStrength;
    
    ARKANSAS_API FDeathClassRow();
};

