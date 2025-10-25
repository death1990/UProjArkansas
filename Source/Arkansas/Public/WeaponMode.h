#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DamageDescription.h"
#include "EFireFlags.h"
#include "EIndianaDamageType.h"
#include "OnAttackBPDelegate.h"
#include "Templates/SubclassOf.h"
#include "WeaponInputBuffer.h"
#include "WeaponModDamageDescriptionOverride.h"
#include "WeaponMode.generated.h"

class UAimAssistData;
class UIndianaDamageType;
class URpgStat;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class UWeaponMode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackBP OnAttackBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponModDamageDescriptionOverride> WeaponModDamageDescriptionOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageDescription DamageDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimAssistData* AimAssistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactSoundRadiusOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIBaseDamageOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URpgStat* DamageModStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackTTDScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIndianaDamageType> DamageTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponInputBuffer PrimaryTriggerQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponInputBuffer QuickMeleeQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireFlags DefaultFlags;
    
public:
    UWeaponMode();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyAimed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrimaryDamageTypeStacks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIndianaDamageType GetPrimaryDamageTypeEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UIndianaDamageType> GetPrimaryDamageType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseDamage() const;
    
};

