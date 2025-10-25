#pragma once
#include "CoreMinimal.h"
#include "CrosshairVisuals.h"
#include "CrosshairStates.generated.h"

USTRUCT(BlueprintType)
struct FCrosshairStates {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrosshairVisuals Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrosshairVisuals Hostile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrosshairVisuals Neutral;
    
    ARKANSAS_API FCrosshairStates();
};

