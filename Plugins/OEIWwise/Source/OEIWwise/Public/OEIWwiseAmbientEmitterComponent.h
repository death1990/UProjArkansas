#pragma once
#include "CoreMinimal.h"
#include "AmbientAudioEvent.h"
#include "OEIWwiseEmitterComponent.h"
#include "OEIWwiseAmbientEmitterComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIWWISE_API UOEIWwiseAmbientEmitterComponent : public UOEIWwiseEmitterComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAmbientAudioEvent> AmbientAudioEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool bAutoPost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAttenuationRadius;
    
    UOEIWwiseAmbientEmitterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopAmbientSound();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartAmbientSound();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PostWwiseEvent(UAkAudioEvent* WwiseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool IsCurrentlyPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void AddAmbientSound(UAkAudioEvent* AudioEvent);
    
};

