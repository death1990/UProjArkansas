#pragma once
#include "CoreMinimal.h"
#include "EDitherState.h"
#include "DitheredCharacter.generated.h"

class AOwBaseCharacter;

USTRUCT(BlueprintType)
struct FDitheredCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOwBaseCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDitherState DitherState;
    
    ARKANSAS_API FDitheredCharacter();
};

