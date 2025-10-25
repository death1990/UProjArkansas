#pragma once
#include "CoreMinimal.h"
#include "ETrapEventType.h"
#include "InteractableAudioComponent.h"
#include "TrapAudioComponent.generated.h"

class UAkPlaySoundEventEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UTrapAudioComponent : public UInteractableAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ETrapEventType, UAkPlaySoundEventEffect*> AudioEvents;
    
public:
    UTrapAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop(ETrapEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void Play(ETrapEventType Type);
    
};

