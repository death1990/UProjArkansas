#include "NavLinkGenerationDebugHelperActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ANavLinkGenerationDebugHelperActor::ANavLinkGenerationDebugHelperActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->NavLinkProfile = NULL;
    this->EvaluatedTypes = 0;
    this->bDrawParkourDebugLines = false;
    this->bDrawDropDownDebugLines = false;
    this->bDrawJumpDebugLines = false;
    this->bDrawSurfaceValidationDebugLines = false;
    this->SpriteComponent = NULL;
    this->ArrowComponent = NULL;
}

void ANavLinkGenerationDebugHelperActor::ReRunTests() {
}

void ANavLinkGenerationDebugHelperActor::ClearDebugDraws() {
}


