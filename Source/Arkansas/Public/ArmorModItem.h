#pragma once
#include "CoreMinimal.h"
#include "ArmorModifier.h"
#include "ArmorVisualProperties.h"
#include "EArmorModSlot.h"
#include "ItemMod.h"
#include "NewArmorModVisual.h"
#include "StatModifierDescription.h"
#include "ArmorModItem.generated.h"

class USpell;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UArmorModItem : public UItemMod {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewArmorModVisual> NewVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorVisualProperties VisualProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArmorModifier> ArmorModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatModifierDescription> StatModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USpell> Spell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmorModSlot ArmorModSlot;
    
public:
    UArmorModItem();

};

