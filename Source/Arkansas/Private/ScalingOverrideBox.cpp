#include "ScalingOverrideBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AScalingOverrideBox::AScalingOverrideBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->MinEffectiveLevel = 0;
    this->MaxEffectiveLevel = 0;
    this->bApplyLevelModifier = false;
    this->FlatLevelModifier = 0;
    this->BoxShape = (UBoxComponent*)RootComponent;
}


