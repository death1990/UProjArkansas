#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESplineCoordinateSpace -FallbackName=ESplineCoordinateSpace
#include "WodemCarveSplineOptions.h"
#include "WodemDebugDisplayOptions.h"
#include "WodemPointData.h"
#include "WodemSplineResampleOptions.h"
#include "OEIWodemSplineUtilsBlueprintLibrary.generated.h"

class UObject;
class USplineComponent;

UCLASS(Blueprintable)
class OEIWODEMRUNTIME_API UOEIWodemSplineUtilsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEIWodemSplineUtilsBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<FWodemPointData> ResampleSpline(USplineComponent* InSpline, const FWodemSplineResampleOptions InResampleOptions);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FWodemPointData> GetSplineData(USplineComponent* InSpline, TEnumAsByte<ESplineCoordinateSpace::Type> InCoordinateSpace);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> Generate2DCirclePoints(const float InRadius, const int32 InNumberOfPoints);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DisplayDebugSplineData(const UObject* WorldContextObject, const TArray<FWodemPointData> InSplineData, const FWodemDebugDisplayOptions InDisplayOptions);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FWodemPointData> CarveSpline(USplineComponent* InSpline, const FWodemCarveSplineOptions InCarveOptions);
    
};

