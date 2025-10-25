#pragma once
#include "CoreMinimal.h"
#include "SpellConditional.h"
#include "Templates/SubclassOf.h"
#include "SpellConditional_DoesEquippedWeaponUseAmmoType.generated.h"

class UAmmo;

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_DoesEquippedWeaponUseAmmoType : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAmmo> AmmoClass;
    
public:
    USpellConditional_DoesEquippedWeaponUseAmmoType();

};

