#include "GhostNavMesh.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "GhostNavMeshComponent.h"
#include "OwNavModifierComponent.h"

AGhostNavMesh::AGhostNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->GhostNavMeshComponent = CreateDefaultSubobject<UGhostNavMeshComponent>(TEXT("Ghost Nav Mesh"));
    this->NavModifierComponent = CreateDefaultSubobject<UOwNavModifierComponent>(TEXT("NavModifierComponent"));
    this->GhostNavMeshComponent->SetupAttachment(RootComponent);
}


