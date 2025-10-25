#pragma once
#include "CoreMinimal.h"
#include "BoxShapeData.h"
#include "CapsuleShapeData.h"
#include "EOEIShapeType.h"
#include "SphereShapeData.h"
#include "ShapeVariant.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FShapeVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOEIShapeType ShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoxShapeData BoxData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSphereShapeData SphereData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCapsuleShapeData CapsuleData;
    
    FShapeVariant();
};

