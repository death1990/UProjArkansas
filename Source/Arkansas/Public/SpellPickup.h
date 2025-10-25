#pragma once
#include "CoreMinimal.h"
#include "Pickup.h"
#include "Templates/SubclassOf.h"
#include "SpellPickup.generated.h"

class USpell;

UCLASS(Blueprintable)
class ARKANSAS_API ASpellPickup : public APickup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> Spell;
    
public:
    ASpellPickup(const FObjectInitializer& ObjectInitializer);

};

