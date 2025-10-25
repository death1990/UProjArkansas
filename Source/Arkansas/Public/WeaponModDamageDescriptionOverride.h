#pragma once
#include "CoreMinimal.h"
#include "DamageDescription.h"
#include "WeaponModDamageDescriptionOverride.generated.h"

class UWeaponMod;

USTRUCT(BlueprintType)
struct FWeaponModDamageDescriptionOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponMod* WeaponMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageDescription DamageDescription;
    
    ARKANSAS_API FWeaponModDamageDescriptionOverride();
};

