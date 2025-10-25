#include "OEIAkSettings.h"

UOEIAkSettings::UOEIAkSettings() {
    this->VoiceCodec = AkCodecId::AkOpusWEM;
    this->DefaultAudioEventMaxDistance = 60000.00f;
    this->AudioEventTypes.AddDefaulted(77);
}


