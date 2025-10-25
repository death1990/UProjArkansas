#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "WodemActorBounds.h"
#include "WodemScatterPoint.h"
#include "OEIWodemScatterComponent.generated.h"

class USplineComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIWODEMRUNTIME_API UOEIWodemScatterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridSpacing;
    
    UOEIWodemScatterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<FWodemScatterPoint> GenerateGridPoints(FWodemActorBounds InActorBounds, float ZLocation);
    
    UFUNCTION(BlueprintCallable)
    TArray<FWodemScatterPoint> CheckSplines(TArray<FWodemScatterPoint> InPoints, TArray<USplineComponent*> InSplines, bool bInvert);
    
};

