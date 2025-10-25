#pragma once
#include "CoreMinimal.h"
#include "EDestructibleEventType.h"
#include "InteractableAudioComponent.h"
#include "DestructibleAudioComponent.generated.h"

class UAkPlaySoundEventEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UDestructibleAudioComponent : public UInteractableAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EDestructibleEventType, UAkPlaySoundEventEffect*> AudioEvents;
    
public:
    UDestructibleAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop(EDestructibleEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void Play(EDestructibleEventType Type);
    
};

