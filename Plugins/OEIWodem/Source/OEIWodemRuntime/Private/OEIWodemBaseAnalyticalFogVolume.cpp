#include "OEIWodemBaseAnalyticalFogVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AOEIWodemBaseAnalyticalFogVolume::AOEIWodemBaseAnalyticalFogVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->InsideSphereFog = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InsideSphereFog"));
    this->OutsideSphereFog = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OutsideSphereFog"));
    this->InsideCubeFog = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InsideCubeFog"));
    this->OutsideCubeFog = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OutsideCubeFog"));
    this->InsideCubeFog->SetupAttachment(RootComponent);
    this->InsideSphereFog->SetupAttachment(RootComponent);
    this->OutsideCubeFog->SetupAttachment(RootComponent);
    this->OutsideSphereFog->SetupAttachment(RootComponent);
}


