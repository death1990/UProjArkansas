#pragma once
#include "CoreMinimal.h"
#include "OEIVFXShapeLocationParams.h"
#include "OEIVFXShapeLocationParams_Circle.generated.h"

USTRUCT(BlueprintType)
struct OEIVFX_API FOEIVFXShapeLocationParams_Circle : public FOEIVFXShapeLocationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RingRadius;
    
    FOEIVFXShapeLocationParams_Circle();
};

