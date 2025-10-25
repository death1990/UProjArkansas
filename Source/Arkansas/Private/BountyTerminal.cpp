#include "BountyTerminal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ABountyTerminal::ABountyTerminal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialChangingStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PosterStaticMesh"));
    this->StaticMaterialElementIndex = 0;
    this->StaticMaterialChangeTime = 5.00f;
}


