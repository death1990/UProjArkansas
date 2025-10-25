#pragma once
#include "CoreMinimal.h"
#include "EWireAudoEventType.h"
#include "InteractableAudioComponent.h"
#include "WireAudioComponent.generated.h"

class UAkPlaySoundEventEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UWireAudioComponent : public UInteractableAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EWireAudoEventType, UAkPlaySoundEventEffect*> AudioEvents;
    
public:
    UWireAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop(EWireAudoEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void Play(EWireAudoEventType Type);
    
};

