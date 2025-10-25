#include "BroadcastStationAsset.h"

UBroadcastStationAsset::UBroadcastStationAsset() {
    this->Conversation = NULL;
    this->bHidden = false;
    this->bStartOnBeginPlay = true;
    this->bShowSubtitles = true;
    this->ListenerAuxBus = NULL;
    this->OutputAuxBus = NULL;
    this->BroadcastVolumeRTPC = NULL;
    this->SizeToShuffleAt = 5;
    this->FactionButton = NULL;
    this->FactionLogo = NULL;
}


