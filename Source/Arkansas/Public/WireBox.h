#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WireInterface.h"
#include "WirePowerChangedDelegateDelegate.h"
#include "WireBox.generated.h"

class AWire;
class UAkComponent;
class UNiagaraSystem;
class USceneComponent;

UCLASS(Blueprintable)
class ARKANSAS_API AWireBox : public AActor, public IWireInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWirePowerChangedDelegate OnWirePowerChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* FxSystemEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* FxSystemDisabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AWire> OwnerWire;
    
public:
    AWireBox(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateParticles(bool bHasPower);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPower() const;
    

    // Fix for true pure virtual functions not being implemented
};

