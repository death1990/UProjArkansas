#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnItemCrafted.generated.h"

class UCraftingRecipe;

UCLASS(Blueprintable, EditInlineNew)
class UOnItemCrafted : public UEventListener {
    GENERATED_BODY()
public:
    UOnItemCrafted();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemCrafted(const UCraftingRecipe* Recipe);
    
};

