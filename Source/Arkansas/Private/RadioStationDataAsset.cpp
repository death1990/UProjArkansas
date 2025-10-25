#include "RadioStationDataAsset.h"

URadioStationDataAsset::URadioStationDataAsset() {
    this->bSaveToPlayer = false;
    this->bGloballyAvailableOnceDiscovered = false;
    this->Frequency = 0.00f;
    this->bIsMandatoryListen = false;
    this->bLooping = true;
    this->bLoudspeaker = false;
    this->RestartAfterTime = 0.00f;
    this->Conversation = NULL;
    this->StartNode = 0;
}


