#include "OEIAkGameplayStatics.h"

UOEIAkGameplayStatics::UOEIAkGameplayStatics() {
}

void UOEIAkGameplayStatics::StopSoundByID(int32 InPlayingID, int32 InFadeTime) {
}

void UOEIAkGameplayStatics::SetSwitchValueOnEventObject(UAkAudioEvent* AkEvent, UAkSwitchValue* SWITCH) {
}

void UOEIAkGameplayStatics::SetRTPCValueOnPlayingID(int32 PlayingID, UAkRtpc* RTPC, float Value, int32 InterpolationTimeMs) {
}

bool UOEIAkGameplayStatics::SetRTPCOnEventObject(UAkAudioEvent* AkEvent, UAkRtpc* RTPC, float Value, int32 InterpolationTimeMs) {
    return false;
}

void UOEIAkGameplayStatics::SetGlobalRTPC(const UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs) {
}

bool UOEIAkGameplayStatics::SetBusEffect(const FString& AudioNode, int32 FXIndex, const FString& ShareSetID) {
    return false;
}

bool UOEIAkGameplayStatics::SetAuxBusToListenerOnAkComponent(const UAkComponent* AkComponent, const TArray<UAkAuxBus*>& AuxBuses, const TArray<UAkComponent*>& Listeners) {
    return false;
}

bool UOEIAkGameplayStatics::SetAuxBusOnAkComponent(const UAkComponent* AkComponent, const UAkAuxBus* AuxBus, const TArray<UAkComponent*>& Listeners) {
    return false;
}

int32 UOEIAkGameplayStatics::PostExternalSourceInfoEvent(UAkAudioEvent* AkEvent, AActor* Actor, const FAkExternalSourceInfo& ExternalSource, bool StopWhenAttachedToDestroyed) {
    return 0;
}

int32 UOEIAkGameplayStatics::PostExternalSourceInfoArrayEvent(UAkAudioEvent* AkEvent, AActor* Actor, const TArray<FAkExternalSourceInfo>& ExternalSources, bool StopWhenAttachedToDestroyed) {
    return 0;
}

int32 UOEIAkGameplayStatics::PostEvent2D(UAkAudioEvent* AkEvent) {
    return 0;
}

FAkGameObjectIdWrapper UOEIAkGameplayStatics::GetGameObjectIdForAkComponent(const UAkComponent* AkComponent) {
    return FAkGameObjectIdWrapper{};
}


