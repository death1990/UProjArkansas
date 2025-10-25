#pragma once
#include "CoreMinimal.h"
#include "SpellConditional.h"
#include "Templates/SubclassOf.h"
#include "SpellConditional_IsFaction.generated.h"

class UFactionData;

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_IsFaction : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFactionData> Faction;
    
public:
    USpellConditional_IsFaction();

};

