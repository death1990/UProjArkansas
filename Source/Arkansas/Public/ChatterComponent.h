#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EDodgeDirection.h"
#include "ChatterComponent.generated.h"

class AActor;
class UIndianaCharMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UChatterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostileDetectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HostileDetectionFrameCharacterProcessLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostileDetectionTickInterval;
    
public:
    UChatterComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnLanded(UIndianaCharMovementComponent* MovementComponent, float Distance);
    
    UFUNCTION(BlueprintCallable)
    void OnJumped(UIndianaCharMovementComponent* MovementComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnDodged(UIndianaCharMovementComponent* InMovementComponent, EDodgeDirection DodgeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockHit(AActor* Blocker, AActor* Attacker, bool bIsMeleeHit);
    
};

