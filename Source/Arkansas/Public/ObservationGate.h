#pragma once
#include "CoreMinimal.h"
#include "ESkillDifficultyRange.h"
#include "ObservationGate.generated.h"

USTRUCT(BlueprintType)
struct FObservationGate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillDifficultyRange DifficultyRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DifficultyThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreGateForInteraction;
    
public:
    ARKANSAS_API FObservationGate();
};

