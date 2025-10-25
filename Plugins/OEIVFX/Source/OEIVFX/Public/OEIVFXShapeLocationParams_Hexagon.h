#pragma once
#include "CoreMinimal.h"
#include "OEIVFXShapeLocationParams.h"
#include "OEIVFXShapeLocationParams_Hexagon.generated.h"

USTRUCT(BlueprintType)
struct OEIVFX_API FOEIVFXShapeLocationParams_Hexagon : public FOEIVFXShapeLocationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RingRadius;
    
    FOEIVFXShapeLocationParams_Hexagon();
};

