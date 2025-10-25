#pragma once
#include "CoreMinimal.h"
#include "EComputerTerminalEventType.h"
#include "InteractableAudioComponent.h"
#include "ComputerTerminalAudioComponent.generated.h"

class UAkPlaySoundEventEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UComputerTerminalAudioComponent : public UInteractableAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EComputerTerminalEventType, UAkPlaySoundEventEffect*> AudioEvents;
    
public:
    UComputerTerminalAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop(EComputerTerminalEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void Play(EComputerTerminalEventType Type);
    
};

