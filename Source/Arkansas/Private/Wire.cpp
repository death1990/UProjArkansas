#include "Wire.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent

AWire::AWire(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Wiring Spline"));
    this->bShouldSaveGameState = true;
    this->SplineComponent = (USplineComponent*)RootComponent;
    this->SplineMaterial = NULL;
    this->StaticMesh = NULL;
    this->bPoweredOn = false;
    this->IDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

void AWire::WireSetPower(bool bEnabled) {
}


void AWire::OnGadgetDeactivated(FGameplayTag GameplayTag) {
}

void AWire::OnGadgetActivated(FGameplayTag GameplayTag) {
}

bool AWire::IsWireStateEquals(bool bCompare) const {
    return false;
}


