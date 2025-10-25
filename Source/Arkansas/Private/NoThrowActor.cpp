#include "NoThrowActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ANoThrowActor::ANoThrowActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Radius = 500.00f;
    this->ZExtent = 1000.00f;
}

bool ANoThrowActor::Blocks(FVector Start, FVector End) {
    return false;
}


