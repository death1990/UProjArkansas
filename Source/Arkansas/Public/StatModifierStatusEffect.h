#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "SkillScalableStatusEffect.h"
#include "StatModifierDescription.h"
#include "StatModifierStatusEffect.generated.h"

class UCharacterInfoComponent;
class USpellConditional;

UCLASS(Blueprintable, EditInlineNew)
class UStatModifierStatusEffect : public USkillScalableStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USpellConditional*> AttackFilterConditionals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DesignerComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatModifierDescription StatModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReapplyOnSkillChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowStackingWithAttackFilterConditionals;
    
public:
    UStatModifierStatusEffect();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSkillUpdated(UCharacterInfoComponent* InCharacterInfoComponent, ESkill UpdatedSkill, int32 NewValue);
    
};

