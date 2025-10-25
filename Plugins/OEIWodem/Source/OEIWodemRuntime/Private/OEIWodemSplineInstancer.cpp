#include "OEIWodemSplineInstancer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

AOEIWodemSplineInstancer::AOEIWodemSplineInstancer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("UserSpline"));
    this->RandomSeed = 0.00f;
    this->bAlignAlongSpline = true;
    this->Instances.AddDefaulted(1);
    this->BBComp = NULL;
    this->LabelComp = NULL;
    this->UserSpline = (USplineComponent*)RootComponent;
}

void AOEIWodemSplineInstancer::ResnapPoints() {
}


