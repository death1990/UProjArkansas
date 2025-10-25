#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimCombo.h"
#include "EFireAnimMode.h"
#include "AnimMontageArray.generated.h"

USTRUCT(BlueprintType)
struct FAnimMontageArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireAnimMode AnimSelectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterWeaponAnimCombo> Anims;
    
    ARKANSAS_API FAnimMontageArray();
};

