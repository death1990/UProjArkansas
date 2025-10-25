#pragma once
#include "CoreMinimal.h"
#include "OEIVFXShapeLocationParams.h"
#include "OEIVFXShapeLocationParams_SphericalWedge.generated.h"

USTRUCT(BlueprintType)
struct OEIVFX_API FOEIVFXShapeLocationParams_SphericalWedge : public FOEIVFXShapeLocationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WedgeHorizontalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WedgeVerticalAngle;
    
    FOEIVFXShapeLocationParams_SphericalWedge();
};

