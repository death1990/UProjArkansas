#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "RecipeStatusEffect.generated.h"

class UCraftingRecipe;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API URecipeStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCraftingRecipe> CraftingRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLearnRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevertLearnOnRemove;
    
public:
    URecipeStatusEffect();

};

