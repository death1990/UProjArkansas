#pragma once
#include "CoreMinimal.h"
#include "SpellSet.generated.h"

class USpell;

USTRUCT(BlueprintType)
struct FSpellSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<USpell>> SpellTypes;
    
public:
    ARKANSAS_API FSpellSet();
};

