#pragma once
#include "CoreMinimal.h"
#include "WeaponSlot.generated.h"

class UWeapon;

USTRUCT(BlueprintType)
struct FWeaponSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWeapon> Weapon;
    
    ARKANSAS_API FWeaponSlot();
};

