#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SpellConditional.h"
#include "SpellConditional_IsImmune.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_IsImmune : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ImmuneTag;
    
public:
    USpellConditional_IsImmune();

};

