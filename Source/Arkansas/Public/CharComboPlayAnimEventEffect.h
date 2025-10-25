#pragma once
#include "CoreMinimal.h"
#include "BasePlayAnimEventEffect.h"
#include "CharComboPlayAnimEventEffect.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UCharComboPlayAnimEventEffect : public UBasePlayAnimEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CharacterAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponAnim;
    
public:
    UCharComboPlayAnimEventEffect();

};

