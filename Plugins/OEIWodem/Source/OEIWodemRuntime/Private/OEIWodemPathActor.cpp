#include "OEIWodemPathActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AOEIWodemPathActor::AOEIWodemPathActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->bRaycastPoints = true;
    this->RuntimePathSplineMesh = NULL;
    this->EditorPathSplineMesh = NULL;
    this->bUseSplineMesh = true;
    this->UserSplineMesh = NULL;
    this->PathWidth = 1.00f;
    this->LeftShoulderWidth = 1.00f;
    this->RightShoulderWidth = 1.00f;
}

void AOEIWodemPathActor::ToggleMeshVisibility(bool bShowRenderMeshes) {
}

void AOEIWodemPathActor::SetUserSplineMesh(UStaticMesh* InUserSplineMesh, bool InbUseSplineMesh) {
}

void AOEIWodemPathActor::RaycastSplinePoints() {
}

TArray<USplineMeshComponent*> AOEIWodemPathActor::GetRenderSplineMeshes() {
    return TArray<USplineMeshComponent*>();
}


