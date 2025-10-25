#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "AIBehaviorClass.h"
#include "AIBehaviorClass_EmergeNode.generated.h"

class AActor;
class UAnimMontage;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ARKANSAS_API UAIBehaviorClass_EmergeNode : public UAIBehaviorClass {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayingMontage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetryMaxTime;
    
    UAIBehaviorClass_EmergeNode();

private:
    UFUNCTION(BlueprintCallable)
    void ReadyToStartDeferredResult(bool Result);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimMontageDeferredResult(bool bResult);
    
    UFUNCTION(BlueprintCallable)
    void OnSplineMovementEnded(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipWeapon(bool Result);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBumpEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBumpBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void NavigateToExitResult(bool bResult);
    
};

