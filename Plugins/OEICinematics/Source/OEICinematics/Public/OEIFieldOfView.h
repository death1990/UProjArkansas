#pragma once
#include "CoreMinimal.h"
#include "EOEIFieldOfViewAxis.h"
#include "OEIFieldOfView.generated.h"

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FOEIFieldOfView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOEIFieldOfViewAxis Axis;
    
    FOEIFieldOfView();
};

