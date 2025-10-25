#include "OEIWodemCoverGrass.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "OEIWodemCoverGrassComponent.h"
#include "OEIWodemScatterComponent.h"

AOEIWodemCoverGrass::AOEIWodemCoverGrass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UOEIWodemCoverGrassComponent>(TEXT("Root"));
    this->GrassComp = (UOEIWodemCoverGrassComponent*)RootComponent;
    this->BBComp = NULL;
    this->LabelComp = NULL;
    this->InfoTextComp = NULL;
    this->ScatterComp = CreateDefaultSubobject<UOEIWodemScatterComponent>(TEXT("ScatterComp"));
    this->SplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));
    this->Instances.AddDefaulted(1);
    this->bShowDebug = true;
    this->SplineComp->SetupAttachment(RootComponent);
}


