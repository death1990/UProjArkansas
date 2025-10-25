#include "ItemVisualizer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AItemVisualizer::AItemVisualizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->VisualRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ConstructedVisualsRoot"));
    this->VisualRootComponent->SetupAttachment(RootComponent);
}


