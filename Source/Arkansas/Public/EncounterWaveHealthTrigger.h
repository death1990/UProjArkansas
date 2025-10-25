#pragma once
#include "CoreMinimal.h"
#include "EncounterWaveHealthTrigger.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FEncounterWaveHealthTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TriggeringActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPercentage;
    
    ARKANSAS_API FEncounterWaveHealthTrigger();
};

