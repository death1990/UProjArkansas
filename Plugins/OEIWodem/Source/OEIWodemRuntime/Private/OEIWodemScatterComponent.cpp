#include "OEIWodemScatterComponent.h"

UOEIWodemScatterComponent::UOEIWodemScatterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RandomSeed = 0;
    this->PointOffset = 0.50f;
    this->GridSpacing = 199.00f;
}

TArray<FWodemScatterPoint> UOEIWodemScatterComponent::GenerateGridPoints(FWodemActorBounds InActorBounds, float ZLocation) {
    return TArray<FWodemScatterPoint>();
}

TArray<FWodemScatterPoint> UOEIWodemScatterComponent::CheckSplines(TArray<FWodemScatterPoint> InPoints, TArray<USplineComponent*> InSplines, bool bInvert) {
    return TArray<FWodemScatterPoint>();
}


