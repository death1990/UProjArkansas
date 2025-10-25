#include "SoftCoverVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "SoftCoverVolumeComponent.h"

ASoftCoverVolume::ASoftCoverVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USoftCoverVolumeComponent>(TEXT("SceneComp"));
    this->bEnabled = true;
    this->CollisionStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionStaticMesh"));
    this->CollisionStaticMeshComponent->SetupAttachment(RootComponent);
}

void ASoftCoverVolume::SetSoftCoverEnabled(bool bNewEnabled) {
}

bool ASoftCoverVolume::IsSoftCoverEnabled() {
    return false;
}


