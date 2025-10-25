#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "Templates/SubclassOf.h"
#include "OnSpellRemoved.generated.h"

class AActor;
class USpell;

UCLASS(Blueprintable, EditInlineNew)
class UOnSpellRemoved : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> Spell;
    
public:
    UOnSpellRemoved();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSpellRemoved(AActor* Caster, TSubclassOf<USpell> RemovedSpell) const;
    
};

