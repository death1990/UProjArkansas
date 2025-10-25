#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "DamageDescription.h"
#include "EImpactAIType.h"
#include "ImpactAIDataOverride.h"
#include "IndianaDamageEvent.h"
#include "ImpactDataSet.generated.h"

class AActor;
class AProjectile;
class UCameraPostProcessingAsset;
class UImpactAudioData;
class UImpactFxData;
class UObject;
class UWeapon;

UCLASS(Blueprintable)
class UImpactDataSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysPlayAtImpactPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayForAllAppliedDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UImpactFxData* FxData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UImpactAudioData* AudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraPostProcessingAsset* CameraPostProcessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EImpactAIType AISoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AISoundRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FImpactAIDataOverride> ImpactAIDataOverrides;
    
public:
    UImpactDataSet();

    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContext"))
    void PlayImpactForHit(const UObject* WorldContext, const FHitResult& InitialImpact, const FIndianaDamageEvent& DamageEvent, const FDamageDescription& DamageDescription, AActor* Instigator, const UWeapon* Weapon, AProjectile* Projectile) const;
    
};

