#include "OEICineConversationInstance.h"
#include "CinematicData.h"

UOEICineConversationInstance::UOEICineConversationInstance() {
    this->CinematicData = CreateDefaultSubobject<UCinematicData>(TEXT("CinematicData"));
    this->CachedWorldContextObject = NULL;
    this->Stage = NULL;
    this->StageAsset = NULL;
    this->CinematicRuntimeDataAsset = NULL;
    this->PresentationMode = NULL;
}

void UOEICineConversationInstance::K2_GetSpeakingSpeaker(FGuid& SpeakerID, AActor*& Actor) const {
}

void UOEICineConversationInstance::K2_GetListeningSpeaker(FGuid& SpeakerID, AActor*& Actor) const {
}


