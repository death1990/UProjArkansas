#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OEICineShotControllerActor.generated.h"

class APawn;
class UOEICineShotControllerComponent;

UCLASS(Blueprintable)
class OEICINEMATICS_API AOEICineShotControllerActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOEICineShotControllerComponent* ShotControllerComponent;
    
public:
    AOEICineShotControllerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TransitionOut();
    
    UFUNCTION(BlueprintCallable)
    void TransitionIn(APawn* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOEICineShotControllerComponent* GetShotControllerComponent() const;
    
};

