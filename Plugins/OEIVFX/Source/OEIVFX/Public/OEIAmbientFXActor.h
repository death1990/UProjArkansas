#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OEIAmbientFXActor.generated.h"

class UBoxComponent;
class UNiagaraSystem;
class UOEIAmbientSoundComponent;
class UOEIInstancedNiagaraComponent;

UCLASS(Abstract, Blueprintable)
class OEIVFX_API AOEIAmbientFXActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* AmbientNiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOEIAmbientSoundComponent* AmbientSoundManager;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOEIInstancedNiagaraComponent* InstancedNiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> NSIntParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> NSFloatParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> NSVectorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AActor*> NSActorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLinearColor> NSColorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> NSBoolParams;
    
public:
    AOEIAmbientFXActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSystem(bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetInstanceRotation(int32 Index, FQuat Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetInstanceLocation(int32 Index, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioEnabled(bool bInAudioEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInstance(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllInstances();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAudioEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 InstanceCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTransform> GetInstanceTransforms() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOEIInstancedNiagaraComponent* GetInstancedNiagaraComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOEIAmbientSoundComponent* GetAmbientSoundManager();
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateSystem();
    
    UFUNCTION(BlueprintCallable)
    int32 AddInstance(const FTransform& Transform);
    
};

