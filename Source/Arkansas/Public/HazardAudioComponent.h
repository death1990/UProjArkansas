#pragma once
#include "CoreMinimal.h"
#include "EHazardEventType.h"
#include "InteractableAudioComponent.h"
#include "HazardAudioComponent.generated.h"

class UAkPlaySoundEventEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UHazardAudioComponent : public UInteractableAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EHazardEventType, UAkPlaySoundEventEffect*> AudioEvents;
    
public:
    UHazardAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop(EHazardEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void Play(EHazardEventType Type);
    
};

