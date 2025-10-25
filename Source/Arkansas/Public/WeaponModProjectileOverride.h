#pragma once
#include "CoreMinimal.h"
#include "WeaponModProjectileOverride.generated.h"

class AProjectile;
class UInstantHitData;
class UWeaponMod;

USTRUCT(BlueprintType)
struct FWeaponModProjectileOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UWeaponMod>> Mods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideWeaponModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AProjectile> OverrideProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInstantHitData> OverrideInstantHitData;
    
    ARKANSAS_API FWeaponModProjectileOverride();
};

