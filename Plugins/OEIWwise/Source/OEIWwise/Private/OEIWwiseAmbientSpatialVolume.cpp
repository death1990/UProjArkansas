#include "OEIWwiseAmbientSpatialVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkLateReverbComponent -FallbackName=AkLateReverbComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkRoomComponent -FallbackName=AkRoomComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkSurfaceReflectorSetComponent -FallbackName=AkSurfaceReflectorSetComponent
#include "AkSurfaceReflectorSetComponent.h"
#include "AkRoomComponent.h"
#include "AkLateReverbComponent.h"


AOEIWwiseAmbientSpatialVolume::AOEIWwiseAmbientSpatialVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceReflectorSet = CreateDefaultSubobject<UAkSurfaceReflectorSetComponent>(TEXT("SurfaceReflector"));
    this->LateReverb = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("LateReverb"));
    this->Room = CreateDefaultSubobject<UAkRoomComponent>(TEXT("Room"));
    this->LateReverb->SetupAttachment(RootComponent);
    this->Room->SetupAttachment(RootComponent);
    this->SurfaceReflectorSet->SetupAttachment(RootComponent);
}


