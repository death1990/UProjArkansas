#pragma once
#include "CoreMinimal.h"
#include "ESwitchEventType.h"
#include "InteractableAudioComponent.h"
#include "SwitchAudioComponent.generated.h"

class UAkPlaySoundEventEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwitchAudioComponent : public UInteractableAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ESwitchEventType, UAkPlaySoundEventEffect*> AudioEvents;
    
public:
    USwitchAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop(ESwitchEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void Play(ESwitchEventType Type);
    
};

