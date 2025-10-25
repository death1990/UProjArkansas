#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "WeaponSettingsStatusEffect.generated.h"

class UAISettings_Weapon;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UWeaponSettingsStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAISettings_Weapon* WeaponSettings;
    
public:
    UWeaponSettingsStatusEffect();

};

