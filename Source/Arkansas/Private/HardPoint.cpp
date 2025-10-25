#include "HardPoint.h"
#include "HardPointComponent.h"

AHardPoint::AHardPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHardPointComponent>(TEXT("SceneComp"))) {
    this->bTether = false;
}


