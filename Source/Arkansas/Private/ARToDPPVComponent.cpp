#include "ARToDPPVComponent.h"

UARToDPPVComponent::UARToDPPVComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExposureCurve = NULL;
    this->bAngleBasedCurve = false;
    this->bSetExposureCompensation = false;
    this->bSetMinEV100 = false;
    this->bSetMaxEV100 = false;
}


