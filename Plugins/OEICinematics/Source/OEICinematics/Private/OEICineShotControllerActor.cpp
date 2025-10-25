#include "OEICineShotControllerActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "OEICineShotControllerComponent.h"

AOEICineShotControllerActor::AOEICineShotControllerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ShotControllerComponent = CreateDefaultSubobject<UOEICineShotControllerComponent>(TEXT("ShotControllerComponent"));
}

void AOEICineShotControllerActor::TransitionOut() {
}

void AOEICineShotControllerActor::TransitionIn(APawn* Player) {
}

UOEICineShotControllerComponent* AOEICineShotControllerActor::GetShotControllerComponent() const {
    return NULL;
}


