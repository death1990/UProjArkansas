#pragma once
#include "CoreMinimal.h"
#include <AkExternalSourceInfo.h>
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkGameObjectIdWrapper -FallbackName=AkGameObjectIdWrapper
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include <GameplayTagContainer.h>
#include "OEIWwiseEmitter.h"
#include "OEIWwiseEmitterCreationParams.h"
#include "OEIWwiseEmitterParams.h"
#include "OEIWwiseEmitterBlueprintLibrary.generated.h"

class UAkAudioEvent;
class UAkAuxBus;
class UAkRtpc;
class UAkSwitchValue;
class UOEIWwiseEmitterComponent;
class UOEIWwiseObjectPoolWrapper;
class UObject;

UCLASS(Blueprintable)
class OEIWWISE_API UOEIWwiseEmitterBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEIWwiseEmitterBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void WwisePostOneShotOnOwner(UObject* Owner, UOEIWwiseObjectPoolWrapper* EmitterPool, const FGameplayTag CategoryTag, FOEIWwiseEmitterCreationParams CreationParams, const FVector Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static int32 WwisePostEventAtLocationManaged(UObject* WorldContextObject, UAkAudioEvent* Event, FVector Location, FRotator Orientation, UOEIWwiseObjectPoolWrapper* EmitterPool);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 WwisePostEventAtLocation(FOEIWwiseEmitter& Emitter, UAkAudioEvent* Event, FVector Location, FVector Front, UOEIWwiseObjectPoolWrapper* EmitterPool);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static bool WwiseEmitterWaitToComplete(const FOEIWwiseEmitter& Emitter, int32 PlayId, UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterStop(const FOEIWwiseEmitter& Emitter, int32 PlayId, float FadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterSetSwitchOnAll(const TArray<FOEIWwiseEmitter> Emitters, UAkSwitchValue* SWITCH);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterSetSwitch(const FOEIWwiseEmitter& Emitter, UAkSwitchValue* SWITCH);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterSetRTPCOnAll(const TArray<FOEIWwiseEmitter> Emitters, UAkRtpc* RTPC, float Value, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterSetRTPC(const FOEIWwiseEmitter& Emitter, UAkRtpc* RTPC, float Value, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterSetParams(const FOEIWwiseEmitter& Emitter, const FOEIWwiseEmitterParams& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterSetLocation(const FOEIWwiseEmitter& Emitter, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterSetAuxBusOnAll(const TArray<FOEIWwiseEmitter> Emitters, const UAkAuxBus* AuxBus, const TArray<FAkGameObjectIdWrapper>& Listeners);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterSetAuxBus(const FOEIWwiseEmitter& Emitter, const UAkAuxBus* AuxBus, const TArray<FAkGameObjectIdWrapper>& Listeners);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static TArray<int32> WwiseEmitterPostEventOnAll(const TArray<FOEIWwiseEmitter> Emitters, UAkAudioEvent* WwiseEvent, FName SourcePath, FName SourceObj);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 WwiseEmitterPostEventExtenalSource(const FOEIWwiseEmitter& Emitter, UAkAudioEvent* WwiseEvent, const TArray<FAkExternalSourceInfo>& ExternalSources);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 WwiseEmitterPostEvent(const FOEIWwiseEmitter& Emitter, UAkAudioEvent* WwiseEvent, FName SourcePath, FName SourceObj);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterIsValid(const FOEIWwiseEmitter& Emitter);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterIsPlaying(const FOEIWwiseEmitter& Emitter, const UAkAudioEvent* Event);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 WwiseEmitterGetVirtualID(int32 PlayingID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterGetRTPC(const FOEIWwiseEmitter& Emitter, UAkRtpc* RTPC, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 WwiseEmitterGetPlayingID(int32 VirtualID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void WwiseEmitterDestroy(UPARAM(Ref) FOEIWwiseEmitter& Emitter);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterComponentSetSwitchOnAll(const TArray<UOEIWwiseEmitterComponent*> EmitterComponents, UAkSwitchValue* SWITCH);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterComponentSetSwitch(const UOEIWwiseEmitterComponent* EmitterComponent, UAkSwitchValue* SWITCH);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterComponentSetRTPCOnAll(const TArray<UOEIWwiseEmitterComponent*> EmitterComponents, UAkRtpc* RTPC, float Value, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterComponentSetRTPC(const UOEIWwiseEmitterComponent* EmitterComponent, UAkRtpc* RTPC, float Value, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterComponentSetAuxBusOnAll(const TArray<UOEIWwiseEmitterComponent*> EmitterComponents, const UAkAuxBus* AuxBus, const TArray<FAkGameObjectIdWrapper>& Listeners);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseEmitterComponentSetAuxBus(const UOEIWwiseEmitterComponent* EmitterComponent, const UAkAuxBus* AuxBus, const TArray<FAkGameObjectIdWrapper>& Listeners);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static TArray<int32> WwiseEmitterComponentPostEventOnAll(const TArray<UOEIWwiseEmitterComponent*> EmitterComponents, UAkAudioEvent* WwiseEvent, FName SourcePath, FName SourceObj);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 WwiseEmitterComponentPostEvent(const UOEIWwiseEmitterComponent* EmitterComponent, UAkAudioEvent* WwiseEvent, FName SourcePath, FName SourceObj);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WwiseCreateEmitter(FOEIWwiseEmitter& Emitter, FName Name, UObject* Owner, UOEIWwiseObjectPoolWrapper* EmitterPool, const FGameplayTag CategoryTag, const FOEIWwiseEmitterParams& EmitterParams, const FVector Offset, bool bUpdateEmitterPosition, bool bEnableAcousticsDebugDrawing);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 WwiseCreateDetachedEmitter(FOEIWwiseEmitter& Emitter, FName Name, UOEIWwiseObjectPoolWrapper* EmitterPool, FVector Location, FOEIWwiseEmitterCreationParams CreationParams, FOEIWwiseEmitterParams EmitterParams, FVector Forward, bool bEnableAcousticsDebugDrawing);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool SeekOnEvent(const FOEIWwiseEmitter& WwiseEmitter, UAkAudioEvent* EventID, int32 position, bool SeekToNearestMarker, int32 PlayingID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool GetPlaybackPosition(const FOEIWwiseEmitter& WwiseEmitter, int32 in_PlayingID, int32& PlaybackPositionInMs);
    
};

