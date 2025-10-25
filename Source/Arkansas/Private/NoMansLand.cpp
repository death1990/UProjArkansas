#include "NoMansLand.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "NoMansLandComponent.h"

ANoMansLand::ANoMansLand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UNoMansLandComponent>(TEXT("SceneComp"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->bEnable = true;
    this->BoxComponent->SetupAttachment(RootComponent);
}


