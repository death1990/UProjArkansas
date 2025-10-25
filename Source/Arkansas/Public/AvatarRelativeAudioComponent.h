#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AvatarRelativeAudioComponent.generated.h"

class AIndianaPlayerCharacter;
class UAkRtpc;
class UOEIWwiseEmitterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UAvatarRelativeAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* DistanceToAvatarRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDistanceToAvatarValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIndianaPlayerCharacter* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOEIWwiseEmitterComponent* Emitter;
    
public:
    UAvatarRelativeAudioComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerPerspectiveChanged(bool bInThirdPersonPerspective);
    
    UFUNCTION(BlueprintCallable)
    void OnEmitterVirtualized();
    
    UFUNCTION(BlueprintCallable)
    void OnEmitterPhysicalized();
    
};

