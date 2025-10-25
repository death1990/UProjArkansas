#pragma once
#include "CoreMinimal.h"
#include "EFootID.h"
#include "EFootstepType.h"
#include "FootstepSurfaceMatch.h"
#include "FootstepMatch.generated.h"

USTRUCT(BlueprintType)
struct FFootstepMatch : public FFootstepSurfaceMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFootstepType> StepTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFootID> Feet;
    
    ARKANSAS_API FFootstepMatch();
};

