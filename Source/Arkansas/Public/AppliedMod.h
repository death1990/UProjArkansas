#pragma once
#include "CoreMinimal.h"
#include "AppliedMod.generated.h"

class UModVisual;

USTRUCT(BlueprintType)
struct FAppliedMod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UModVisual> Mod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPermanentlyApplied;
    
    ARKANSAS_API FAppliedMod();
};

