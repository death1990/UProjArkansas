#pragma once
#include "CoreMinimal.h"
#include "SpellConditional.h"
#include "SpellConditional_RandomChance.generated.h"

class URpgStat;

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_RandomChance : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URpgStat* ChanceStat;
    
public:
    USpellConditional_RandomChance();

};

