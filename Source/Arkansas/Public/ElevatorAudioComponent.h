#pragma once
#include "CoreMinimal.h"
#include "EElevatorEventType.h"
#include "InteractableAudioComponent.h"
#include "ElevatorAudioComponent.generated.h"

class UAkPlaySoundEventEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UElevatorAudioComponent : public UInteractableAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EElevatorEventType, UAkPlaySoundEventEffect*> AudioEvents;
    
public:
    UElevatorAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop(EElevatorEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void Play(EElevatorEventType Type);
    
};

