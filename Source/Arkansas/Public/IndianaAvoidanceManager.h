#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AvoidanceManager -FallbackName=AvoidanceManager
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavEdgeProviderInterface -FallbackName=NavEdgeProviderInterface
#include "IndianaAvoidanceManager.generated.h"

UCLASS(Blueprintable)
class UIndianaAvoidanceManager : public UAvoidanceManager, public INavEdgeProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvoidanceSweepMaxSampleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceSweepDeltaAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceSweepMinDeltaAngleFromDesiredVelocity;
    
public:
    UIndianaAvoidanceManager();


    // Fix for true pure virtual functions not being implemented
};

