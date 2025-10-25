#pragma once
#include "CoreMinimal.h"
#include "ImpactAudioDamageTypeOverlays.generated.h"

class UAkAudioEvent;
class UIndianaDamageType;

USTRUCT(BlueprintType)
struct FImpactAudioDamageTypeOverlays {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UIndianaDamageType>, UAkAudioEvent*> DamageTypeOverlays;
    
    ARKANSAS_API FImpactAudioDamageTypeOverlays();
};

