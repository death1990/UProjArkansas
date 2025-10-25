#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "OEIVFXShapeLocationParams.h"
#include "OEIVFXShapeLocationParams_Box.generated.h"

USTRUCT(BlueprintType)
struct OEIVFX_API FOEIVFXShapeLocationParams_Box : public FOEIVFXShapeLocationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f BoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f BoxMidpoint;
    
    FOEIVFXShapeLocationParams_Box();
};

