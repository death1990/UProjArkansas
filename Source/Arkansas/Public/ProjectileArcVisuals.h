#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ParameterValue.h"
#include "ProjectileArcDecalSettings.h"
#include "Templates/SubclassOf.h"
#include "ProjectileArcVisuals.generated.h"

class AProjectile;
class UCameraModifier;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, Config=Game)
class UProjectileArcVisuals : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraModifier> CameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParameterValue OnApplyScalarParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParameterValue OnTickVectorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraBeamSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileArcDecalSettings BounceLocationDecalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileArcDecalSettings StopLocationDecalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* StopLocationNiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopLocationPulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLocations;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> SimulatedProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakedTrajectorySimFrequency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimilarNormalHalfAngle;
    
public:
    UProjectileArcVisuals();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBeamValues_BP(UNiagaraComponent* NiagaraComponent, const TArray<FVector>& Locations, const TArray<FVector>& Tangents);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSimulatedProjectileStop(const FHitResult& ImpactResult);
    
};

