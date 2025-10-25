#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OEIWwiseAmbientSound.generated.h"

class UAkAudioEvent;
class UOEIWwiseAmbientEmitterComponent;
class UOEIWwiseEmitterComponent;

UCLASS(Blueprintable)
class OEIWWISE_API AOEIWwiseAmbientSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOEIWwiseAmbientEmitterComponent* AmbientEmitterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOEIWwiseEmitterComponent* EmitterComponent;
    
    AOEIWwiseAmbientSound(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopAmbientSound();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartAmbientSound();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PostWwiseEvent(UAkAudioEvent* WwiseEvent);
    
};

