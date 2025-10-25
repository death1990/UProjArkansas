#pragma once
#include "CoreMinimal.h"
#include "EGameDifficulty.h"
#include "SpellConditional.h"
#include "SpellConditional_IsDifficulty.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_IsDifficulty : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGameDifficulty> AllowedDifficulties;
    
public:
    USpellConditional_IsDifficulty();

};

