#include "IndianaTargetPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent

AIndianaTargetPoint::AIndianaTargetPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}


