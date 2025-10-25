#pragma once
#include "CoreMinimal.h"
#include "OEIVFXShapeLocationParams.h"
#include "OEIVFXShapeLocationParams_Torus.generated.h"

USTRUCT(BlueprintType)
struct OEIVFX_API FOEIVFXShapeLocationParams_Torus : public FOEIVFXShapeLocationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandleRadius;
    
    FOEIVFXShapeLocationParams_Torus();
};

