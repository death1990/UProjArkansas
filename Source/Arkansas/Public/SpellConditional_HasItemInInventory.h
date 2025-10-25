#pragma once
#include "CoreMinimal.h"
#include "SpellConditional.h"
#include "Templates/SubclassOf.h"
#include "SpellConditional_HasItemInInventory.generated.h"

class UItem;

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_HasItemInInventory : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
public:
    USpellConditional_HasItemInInventory();

};

