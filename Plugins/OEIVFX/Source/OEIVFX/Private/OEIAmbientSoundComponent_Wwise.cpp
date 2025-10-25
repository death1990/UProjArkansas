#include "OEIAmbientSoundComponent_Wwise.h"

UOEIAmbientSoundComponent_Wwise::UOEIAmbientSoundComponent_Wwise(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoPost = true;
    this->bIsAudioEnabled = false;
}


