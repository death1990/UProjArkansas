#include "CompanionSelectionVisualizer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ACompanionSelectionVisualizer::ACompanionSelectionVisualizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bIsSelected = false;
    this->bIsHovered = false;
}




