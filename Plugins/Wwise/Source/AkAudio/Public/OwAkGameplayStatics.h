#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OEIAkGameplayStatics.h"
#include "OwAkGameplayStatics.generated.h"

class AActor;
class UAkAudioEvent;
class UObject;

UCLASS(Blueprintable)
class AKAUDIO_API UOwAkGameplayStatics : public UOEIAkGameplayStatics {
    GENERATED_BODY()
public:
    UOwAkGameplayStatics();

    UFUNCTION(BlueprintCallable)
    static void SetSwitchByID(FName SwitchGroup, int32 SwitchStateID, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetRTPCValueChecked(FName RTPC, float Value, int32 InterpolationTimeMs, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetRTPCValueByNameOnPlayingID(int32 PlayingID, FName RTPCName, float Value, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable)
    static int32 PostExternalSourceEvent(UAkAudioEvent* AkEvent, AActor* Actor, const FString& ExternalSource, const FString& SourceEvent, bool StopWhenAttachedToDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEventNoCB(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const FString& EventName, bool bEnableGetSourcePlayPosition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PostEventAtLocationByEvent(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSwitch(FName SwitchGroup, int32& OutState, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static float GetSourcePosition(int32 EventID);
    
};

