#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "Templates/SubclassOf.h"
#include "OnSpellCast.generated.h"

class AActor;
class USpell;

UCLASS(Blueprintable, EditInlineNew)
class UOnSpellCast : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> Spell;
    
public:
    UOnSpellCast();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSpellCast(AActor* Caster, TSubclassOf<USpell> NewSpell, AActor* TargetActor) const;
    
};

