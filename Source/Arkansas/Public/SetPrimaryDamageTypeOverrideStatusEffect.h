#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "SetPrimaryDamageTypeOverrideStatusEffect.generated.h"

class UIndianaDamageType;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API USetPrimaryDamageTypeOverrideStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIndianaDamageType> DamageTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyDamageTypeToAllWeaponSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetDamageTypeOnClear;
    
public:
    USetPrimaryDamageTypeOverrideStatusEffect();

};

