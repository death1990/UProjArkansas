#pragma once
#include "CoreMinimal.h"
#include "AkExternalSourceInfo.h"
#include "AkGameObjectIdWrapper.h"
#include "AkGameplayStatics.h"
#include "OEIAkGameplayStatics.generated.h"

class AActor;
class UAkAudioEvent;
class UAkAuxBus;
class UAkComponent;
class UAkRtpc;
class UAkSwitchValue;

UCLASS(Blueprintable)
class AKAUDIO_API UOEIAkGameplayStatics : public UAkGameplayStatics {
    GENERATED_BODY()
public:
    UOEIAkGameplayStatics();

    UFUNCTION(BlueprintCallable)
    static void StopSoundByID(int32 InPlayingID, int32 InFadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetSwitchValueOnEventObject(UAkAudioEvent* AkEvent, UAkSwitchValue* SWITCH);
    
    UFUNCTION(BlueprintCallable)
    static void SetRTPCValueOnPlayingID(int32 PlayingID, UAkRtpc* RTPC, float Value, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable)
    static bool SetRTPCOnEventObject(UAkAudioEvent* AkEvent, UAkRtpc* RTPC, float Value, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalRTPC(const UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBusEffect(const FString& AudioNode, int32 FXIndex, const FString& ShareSetID);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAuxBusToListenerOnAkComponent(const UAkComponent* AkComponent, const TArray<UAkAuxBus*>& AuxBuses, const TArray<UAkComponent*>& Listeners);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAuxBusOnAkComponent(const UAkComponent* AkComponent, const UAkAuxBus* AuxBus, const TArray<UAkComponent*>& Listeners);
    
    UFUNCTION(BlueprintCallable)
    static int32 PostExternalSourceInfoEvent(UAkAudioEvent* AkEvent, AActor* Actor, const FAkExternalSourceInfo& ExternalSource, bool StopWhenAttachedToDestroyed);
    
    UFUNCTION(BlueprintCallable)
    static int32 PostExternalSourceInfoArrayEvent(UAkAudioEvent* AkEvent, AActor* Actor, const TArray<FAkExternalSourceInfo>& ExternalSources, bool StopWhenAttachedToDestroyed);
    
    UFUNCTION(BlueprintCallable)
    static int32 PostEvent2D(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAkGameObjectIdWrapper GetGameObjectIdForAkComponent(const UAkComponent* AkComponent);
    
};

