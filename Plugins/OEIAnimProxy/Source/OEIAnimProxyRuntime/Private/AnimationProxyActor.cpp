#include "AnimationProxyActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "AnimationProxyComponent.h"

AAnimationProxyActor::AAnimationProxyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->AnimationProxyComponent = CreateDefaultSubobject<UAnimationProxyComponent>(TEXT("AnimationProxyComponent"));
    this->AnimationProxyComponent->SetupAttachment(RootComponent);
}


