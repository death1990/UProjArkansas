#include "OctreeHelperActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "OctreeRenderingComponent.h"

AOctreeHelperActor::AOctreeHelperActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->RenderComp = CreateDefaultSubobject<UOctreeRenderingComponent>(TEXT("RenderComp"));
}


