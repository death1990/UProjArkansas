#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NewPlayFxState.generated.h"

class USpell;

USTRUCT(BlueprintType)
struct FNewPlayFxState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> ParentSpell;
    
    ARKANSAS_API FNewPlayFxState();
};

