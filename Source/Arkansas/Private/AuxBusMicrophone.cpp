#include "AuxBusMicrophone.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent

AAuxBusMicrophone::AAuxBusMicrophone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpeakerActor = NULL;
    this->DynamicFxAuxBus = NULL;
    this->bEnabled = true;
    this->MicrophoneRoutingAuxBus = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
}

void AAuxBusMicrophone::EnableMicrophone() {
}

void AAuxBusMicrophone::DisableMicrophone() {
}


