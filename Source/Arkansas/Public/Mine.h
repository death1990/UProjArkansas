#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ChildDestructibleDestroyedDelegate.h"
#include "DamageDescription.h"
#include "OwActorPoolInterface.h"
#include "Templates/SubclassOf.h"
#include "TrapTrigger.h"
#include "Mine.generated.h"

class AActor;
class UDamageType;
class UDestructibleAudioComponent;
class UHealthComponent;
class UImpactDataSet;
class UIndianaCharMovementComponent;
class UMaterialInterface;
class UOwActorPool;
class UPrimitiveComponent;
class USphereComponent;
class UStaticMeshComponent;
class UThrowable;
class UTrapAudioComponent;
class UTravelRegionData;

UCLASS(Blueprintable)
class ARKANSAS_API AMine : public ATrapTrigger, public IOwActorPoolInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChildDestructibleDestroyed OnChildDestructibleDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTrapAudioComponent> TrapAudioClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDestructibleAudioComponent> DestructibleAudioClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* DetonationVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UTravelRegionData*, TSoftObjectPtr<UMaterialInterface>> RegionMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerPlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DetonateDestructibleDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElevatorSearchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LOSCheckOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UThrowable> ThrowableActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageDescription DamageDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UImpactDataSet* ImpactDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UImpactDataSet* DestroyedDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AISoundRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AISoundVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InnerMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OuterMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> ArmedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> PlayerPlacedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> ActiveMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> DisarmedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrapAudioComponent* TrapAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleAudioComponent* DestructibleAudioComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPooled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOwActorPool* OwningPool;
    
public:
    AMine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TriggerMine_BP(AActor* Initiator, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    bool TriggerMine(AActor* Initiator, bool bForce);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTrapDeployed();
    
    UFUNCTION(BlueprintCallable)
    void OnStopCrouch(UIndianaCharMovementComponent* InMovementComponent, bool bPlayerToggled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedFromPoolBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReaquiredFromPoolBP();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPlacedMineCountIncremented();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(UHealthComponent* InHealthComponent, float PrevNormalizedHealth, float CurrNormalizedHealth, AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFreedToPoolBP();
    
    UFUNCTION(BlueprintCallable)
    void OnDetonationVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDetonationVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeferredSpawnCompleteBP();
    
    UFUNCTION(BlueprintCallable)
    void OnCrouch();
    
    UFUNCTION(BlueprintCallable)
    void OnActivationTriggerExited(AActor* Initiator);
    
    UFUNCTION(BlueprintCallable)
    void OnActivationTriggerEntered(AActor* Initiator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInActorPool();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FreeToPoolBP();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteOnDestructibleDestroyed(AActor* Initiator);
    

    // Fix for true pure virtual functions not being implemented
};

