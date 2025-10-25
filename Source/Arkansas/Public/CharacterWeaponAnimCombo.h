#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimCombo.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCharacterWeaponAnimCombo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CharacterAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponAnim;
    
    ARKANSAS_API FCharacterWeaponAnimCombo();
};

