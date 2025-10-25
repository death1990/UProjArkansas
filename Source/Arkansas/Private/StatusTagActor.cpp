#include "StatusTagActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "StatusWidgetComponent.h"

AStatusTagActor::AStatusTagActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->StatusTagComponent = CreateDefaultSubobject<UStatusWidgetComponent>(TEXT("StatusWidgetComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->StatusTagComponent->SetupAttachment(RootComponent);
}


