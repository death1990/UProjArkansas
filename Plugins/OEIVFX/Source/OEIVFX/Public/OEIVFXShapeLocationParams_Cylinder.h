#pragma once
#include "CoreMinimal.h"
#include "OEIVFXShapeLocationParams.h"
#include "OEIVFXShapeLocationParams_Cylinder.generated.h"

USTRUCT(BlueprintType)
struct OEIVFX_API FOEIVFXShapeLocationParams_Cylinder : public FOEIVFXShapeLocationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CylinderHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CylinderRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CylinderHeightMidpoint;
    
    FOEIVFXShapeLocationParams_Cylinder();
};

