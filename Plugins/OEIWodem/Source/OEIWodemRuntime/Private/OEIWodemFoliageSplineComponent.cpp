#include "OEIWodemFoliageSplineComponent.h"

UOEIWodemFoliageSplineComponent::UOEIWodemFoliageSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bExcludeSpline = true;
    this->bClosedSpline = true;
    this->bUseEdgeFalloff = false;
    this->EdgeFalloff = 10.00f;
}


