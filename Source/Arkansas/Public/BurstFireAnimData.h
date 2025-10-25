#pragma once
#include "CoreMinimal.h"
#include "AnimMontageArray.h"
#include "CharacterWeaponAnimCombo.h"
#include "EFireAnimMode.h"
#include "BurstFireAnimData.generated.h"

USTRUCT(BlueprintType)
struct FBurstFireAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimCombo DefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireAnimMode AnimSelectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresPoolPerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterWeaponAnimCombo> Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimMontageArray> PooledAnims;
    
    ARKANSAS_API FBurstFireAnimData();
};

