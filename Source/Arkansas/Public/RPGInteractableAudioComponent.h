#pragma once
#include "CoreMinimal.h"
#include "ERPGInteractEventType.h"
#include "InteractableAudioComponent.h"
#include "RPGInteractableAudioComponent.generated.h"

class UAkPlaySoundEventEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URPGInteractableAudioComponent : public UInteractableAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ERPGInteractEventType, UAkPlaySoundEventEffect*> AudioEvents;
    
public:
    URPGInteractableAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop(ERPGInteractEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void Play(ERPGInteractEventType Type);
    
};

