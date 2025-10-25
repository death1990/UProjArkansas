#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EOCLEventType.h"
#include "InteractableAudioComponent.h"
#include "OCLAudioComponent.generated.h"

class UAkPlaySoundEventEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UOCLAudioComponent : public UInteractableAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EOCLEventType, UAkPlaySoundEventEffect*> AudioEvents;
    
public:
    UOCLAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop(EOCLEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void PlayAtLocation(EOCLEventType Type, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void Play(EOCLEventType Type);
    
};

