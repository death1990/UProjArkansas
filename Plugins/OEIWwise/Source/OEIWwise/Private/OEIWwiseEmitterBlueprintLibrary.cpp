#include "OEIWwiseEmitterBlueprintLibrary.h"

UOEIWwiseEmitterBlueprintLibrary::UOEIWwiseEmitterBlueprintLibrary() {
}

void UOEIWwiseEmitterBlueprintLibrary::WwisePostOneShotOnOwner(UObject* Owner, UOEIWwiseObjectPoolWrapper* EmitterPool, const FGameplayTag CategoryTag, FOEIWwiseEmitterCreationParams CreationParams, const FVector Offset) {
}

int32 UOEIWwiseEmitterBlueprintLibrary::WwisePostEventAtLocationManaged(UObject* WorldContextObject, UAkAudioEvent* Event, FVector Location, FRotator Orientation, UOEIWwiseObjectPoolWrapper* EmitterPool) {
    return 0;
}

int32 UOEIWwiseEmitterBlueprintLibrary::WwisePostEventAtLocation(FOEIWwiseEmitter& Emitter, UAkAudioEvent* Event, FVector Location, FVector Front, UOEIWwiseObjectPoolWrapper* EmitterPool) {
    return 0;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterWaitToComplete(const FOEIWwiseEmitter& Emitter, int32 PlayId, UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterStop(const FOEIWwiseEmitter& Emitter, int32 PlayId, float FadeTime) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterSetSwitchOnAll(const TArray<FOEIWwiseEmitter> Emitters, UAkSwitchValue* SWITCH) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterSetSwitch(const FOEIWwiseEmitter& Emitter, UAkSwitchValue* SWITCH) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterSetRTPCOnAll(const TArray<FOEIWwiseEmitter> Emitters, UAkRtpc* RTPC, float Value, int32 InterpolationTimeMs) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterSetRTPC(const FOEIWwiseEmitter& Emitter, UAkRtpc* RTPC, float Value, int32 InterpolationTimeMs) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterSetParams(const FOEIWwiseEmitter& Emitter, const FOEIWwiseEmitterParams& Params) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterSetLocation(const FOEIWwiseEmitter& Emitter, const FVector& Location) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterSetAuxBusOnAll(const TArray<FOEIWwiseEmitter> Emitters, const UAkAuxBus* AuxBus, const TArray<FAkGameObjectIdWrapper>& Listeners) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterSetAuxBus(const FOEIWwiseEmitter& Emitter, const UAkAuxBus* AuxBus, const TArray<FAkGameObjectIdWrapper>& Listeners) {
    return false;
}

TArray<int32> UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterPostEventOnAll(const TArray<FOEIWwiseEmitter> Emitters, UAkAudioEvent* WwiseEvent, FName SourcePath, FName SourceObj) {
    return TArray<int32>();
}

int32 UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterPostEventExtenalSource(const FOEIWwiseEmitter& Emitter, UAkAudioEvent* WwiseEvent, const TArray<FAkExternalSourceInfo>& ExternalSources) {
    return 0;
}

int32 UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(const FOEIWwiseEmitter& Emitter, UAkAudioEvent* WwiseEvent, FName SourcePath, FName SourceObj) {
    return 0;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterIsValid(const FOEIWwiseEmitter& Emitter) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterIsPlaying(const FOEIWwiseEmitter& Emitter, const UAkAudioEvent* Event) {
    return false;
}

int32 UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterGetVirtualID(int32 PlayingID) {
    return 0;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterGetRTPC(const FOEIWwiseEmitter& Emitter, UAkRtpc* RTPC, float& Value) {
    return false;
}

int32 UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterGetPlayingID(int32 VirtualID) {
    return 0;
}

void UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterDestroy(FOEIWwiseEmitter& Emitter) {
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterComponentSetSwitchOnAll(const TArray<UOEIWwiseEmitterComponent*> EmitterComponents, UAkSwitchValue* SWITCH) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterComponentSetSwitch(const UOEIWwiseEmitterComponent* EmitterComponent, UAkSwitchValue* SWITCH) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterComponentSetRTPCOnAll(const TArray<UOEIWwiseEmitterComponent*> EmitterComponents, UAkRtpc* RTPC, float Value, int32 InterpolationTimeMs) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterComponentSetRTPC(const UOEIWwiseEmitterComponent* EmitterComponent, UAkRtpc* RTPC, float Value, int32 InterpolationTimeMs) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterComponentSetAuxBusOnAll(const TArray<UOEIWwiseEmitterComponent*> EmitterComponents, const UAkAuxBus* AuxBus, const TArray<FAkGameObjectIdWrapper>& Listeners) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterComponentSetAuxBus(const UOEIWwiseEmitterComponent* EmitterComponent, const UAkAuxBus* AuxBus, const TArray<FAkGameObjectIdWrapper>& Listeners) {
    return false;
}

TArray<int32> UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEventOnAll(const TArray<UOEIWwiseEmitterComponent*> EmitterComponents, UAkAudioEvent* WwiseEvent, FName SourcePath, FName SourceObj) {
    return TArray<int32>();
}

int32 UOEIWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(const UOEIWwiseEmitterComponent* EmitterComponent, UAkAudioEvent* WwiseEvent, FName SourcePath, FName SourceObj) {
    return 0;
}

bool UOEIWwiseEmitterBlueprintLibrary::WwiseCreateEmitter(FOEIWwiseEmitter& Emitter, FName Name, UObject* Owner, UOEIWwiseObjectPoolWrapper* EmitterPool, const FGameplayTag CategoryTag, const FOEIWwiseEmitterParams& EmitterParams, const FVector Offset, bool bUpdateEmitterPosition, bool bEnableAcousticsDebugDrawing) {
    return false;
}

int32 UOEIWwiseEmitterBlueprintLibrary::WwiseCreateDetachedEmitter(FOEIWwiseEmitter& Emitter, FName Name, UOEIWwiseObjectPoolWrapper* EmitterPool, FVector Location, FOEIWwiseEmitterCreationParams CreationParams, FOEIWwiseEmitterParams EmitterParams, FVector Forward, bool bEnableAcousticsDebugDrawing) {
    return 0;
}

bool UOEIWwiseEmitterBlueprintLibrary::SeekOnEvent(const FOEIWwiseEmitter& WwiseEmitter, UAkAudioEvent* EventID, int32 position, bool SeekToNearestMarker, int32 PlayingID) {
    return false;
}

bool UOEIWwiseEmitterBlueprintLibrary::GetPlaybackPosition(const FOEIWwiseEmitter& WwiseEmitter, int32 in_PlayingID, int32& PlaybackPositionInMs) {
    return false;
}


