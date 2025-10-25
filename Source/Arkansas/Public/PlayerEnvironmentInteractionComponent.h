#pragma once
#include "CoreMinimal.h"
#include "EnvironmentInteractionComponent.h"
#include "PlayerEnvironmentInteractionComponent.generated.h"

class AIndianaCharacter;
class UAkAudioEvent;
class UAkRtpc;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerEnvironmentInteractionComponent : public UEnvironmentInteractionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoftCoverEnteredEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoftCoverExitedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* SoftCoverRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoftCoverRTPCName;
    
public:
    UPlayerEnvironmentInteractionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerCombatStateChanged(AIndianaCharacter* Character, bool bIsInCombat, bool bRestoring);
    
};

