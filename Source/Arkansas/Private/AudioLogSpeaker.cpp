#include "AudioLogSpeaker.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent

AAudioLogSpeaker::AAudioLogSpeaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("VoiceOverFaceFXExternalAudio"));
    this->VoiceOverAudioComponent = (USceneComponent*)RootComponent;
    this->SpeakerInfoComponent = NULL;
}

void AAudioLogSpeaker::OnConversationEnded(UOwConversationInstance* ConversationInstance) {
}


