#pragma once
#include "CoreMinimal.h"
#include "BasePlayAnimEventEffect.h"
#include "BurstFireAnimData.h"
#include "CharacterWeaponAnimCombo.h"
#include "BurstFireAnimEventEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UBurstFireAnimEventEffect : public UBasePlayAnimEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimCombo DefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBurstFireAnimData> AnimsByBurstCount;
    
public:
    UBurstFireAnimEventEffect();

};

