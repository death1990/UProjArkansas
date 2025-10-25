#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SpellConditional.h"
#include "SpellConditional_MeleeWeaponCategory.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_MeleeWeaponCategory : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponCategory;
    
public:
    USpellConditional_MeleeWeaponCategory();

};

