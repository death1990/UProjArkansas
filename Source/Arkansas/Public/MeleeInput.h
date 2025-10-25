#pragma once
#include "CoreMinimal.h"
#include "EButtonPress.h"
#include "EMeleeAction.h"
#include "MeleeInput.generated.h"

USTRUCT(BlueprintType)
struct FMeleeInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeleeAction PreviousAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EButtonPress ButtonPress;
    
    ARKANSAS_API FMeleeInput();
};

