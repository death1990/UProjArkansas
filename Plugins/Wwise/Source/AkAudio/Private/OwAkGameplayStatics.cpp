#include "OwAkGameplayStatics.h"

UOwAkGameplayStatics::UOwAkGameplayStatics() {
}

void UOwAkGameplayStatics::SetSwitchByID(FName SwitchGroup, int32 SwitchStateID, AActor* Actor) {
}

void UOwAkGameplayStatics::SetRTPCValueChecked(FName RTPC, float Value, int32 InterpolationTimeMs, AActor* Actor) {
}

void UOwAkGameplayStatics::SetRTPCValueByNameOnPlayingID(int32 PlayingID, FName RTPCName, float Value, int32 InterpolationTimeMs) {
}

int32 UOwAkGameplayStatics::PostExternalSourceEvent(UAkAudioEvent* AkEvent, AActor* Actor, const FString& ExternalSource, const FString& SourceEvent, bool StopWhenAttachedToDestroyed) {
    return 0;
}

int32 UOwAkGameplayStatics::PostEventNoCB(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const FString& EventName, bool bEnableGetSourcePlayPosition) {
    return 0;
}

int32 UOwAkGameplayStatics::PostEventAtLocationByEvent(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, UObject* WorldContextObject) {
    return 0;
}

bool UOwAkGameplayStatics::GetSwitch(FName SwitchGroup, int32& OutState, AActor* Actor) {
    return false;
}

float UOwAkGameplayStatics::GetSourcePosition(int32 EventID) {
    return 0.0f;
}


