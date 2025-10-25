#include "RadioPlayerComponent.h"

URadioPlayerComponent::URadioPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RadioType = ERadioPlayerType::Invalid;
    this->CurrentStationData = NULL;
    this->bInitialState = false;
    this->BeginPlayAudioEvents.AddDefaulted(1);
    this->EndPlayAudioEvents.AddDefaulted(1);
    this->EnabledAudioEvents.AddDefaulted(1);
    this->DisabledAudioEvents.AddDefaulted(1);
    this->TunedAudioEvents.AddDefaulted(1);
    this->bAllowUserOnOff = false;
    this->bAllowUserTune = false;
    this->bTuneOnStartUp = false;
    this->AkComponent = NULL;
    this->EmitterComponent = NULL;
    this->bCurrentState = false;
}

void URadioPlayerComponent::TurnRadioOn() {
}

void URadioPlayerComponent::TurnRadioOff() {
}

void URadioPlayerComponent::TuneToStation(const URadioStationDataAsset* StationAsset, bool bShouldEnableRadio, bool bIsPlayer) {
}

void URadioPlayerComponent::TuneRadio(bool bSeekNext) {
}

void URadioPlayerComponent::ToggleRadio() {
}

void URadioPlayerComponent::SetState(bool bSetToOn) {
}




bool URadioPlayerComponent::IsTunedToStation(const URadioStationDataAsset* RadioStation) const {
    return false;
}

bool URadioPlayerComponent::GetState() const {
    return false;
}


