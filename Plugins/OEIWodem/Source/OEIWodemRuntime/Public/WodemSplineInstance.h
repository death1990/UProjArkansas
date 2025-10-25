#pragma once
#include "CoreMinimal.h"
#include "EWodemSplineInstanceMode.h"
#include "WodemMeshInstanceProperties.h"
#include "WodemOptimizationProperties.h"
#include "WodemRotationProperties.h"
#include "WodemScaleProperties.h"
#include "WodemSnappingProperties.h"
#include "WodemSplineInstance.generated.h"

USTRUCT(BlueprintType)
struct FWodemSplineInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWodemSplineInstanceMode> InstanceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWodemMeshInstanceProperties MeshProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWodemSnappingProperties SnappingProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWodemScaleProperties ScaleProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWodemRotationProperties RotationProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWodemOptimizationProperties OptimizationProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartSplinePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndSplinePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SegmentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfScatterPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScatterWidth;
    
    OEIWODEMRUNTIME_API FWodemSplineInstance();
};

