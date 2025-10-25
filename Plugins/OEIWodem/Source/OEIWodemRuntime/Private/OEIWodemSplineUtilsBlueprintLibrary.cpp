#include "OEIWodemSplineUtilsBlueprintLibrary.h"

UOEIWodemSplineUtilsBlueprintLibrary::UOEIWodemSplineUtilsBlueprintLibrary() {
}

TArray<FWodemPointData> UOEIWodemSplineUtilsBlueprintLibrary::ResampleSpline(USplineComponent* InSpline, const FWodemSplineResampleOptions InResampleOptions) {
    return TArray<FWodemPointData>();
}

TArray<FWodemPointData> UOEIWodemSplineUtilsBlueprintLibrary::GetSplineData(USplineComponent* InSpline, TEnumAsByte<ESplineCoordinateSpace::Type> InCoordinateSpace) {
    return TArray<FWodemPointData>();
}

TArray<FVector> UOEIWodemSplineUtilsBlueprintLibrary::Generate2DCirclePoints(const float InRadius, const int32 InNumberOfPoints) {
    return TArray<FVector>();
}

void UOEIWodemSplineUtilsBlueprintLibrary::DisplayDebugSplineData(const UObject* WorldContextObject, const TArray<FWodemPointData> InSplineData, const FWodemDebugDisplayOptions InDisplayOptions) {
}

TArray<FWodemPointData> UOEIWodemSplineUtilsBlueprintLibrary::CarveSpline(USplineComponent* InSpline, const FWodemCarveSplineOptions InCarveOptions) {
    return TArray<FWodemPointData>();
}


