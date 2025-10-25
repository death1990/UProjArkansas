#include "PlayerHeadsetSpeaker.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
#include "OwSpeakerInfoComponent.h"

APlayerHeadsetSpeaker::APlayerHeadsetSpeaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("VoiceOverFaceFXExternalAudio"));
    this->VoiceOverAudioComponent = (USceneComponent*)RootComponent;
    this->SpeakerInfoComponent = CreateDefaultSubobject<UOwSpeakerInfoComponent>(TEXT("SpeakerInfo"));
}


