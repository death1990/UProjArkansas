#pragma once
#include "CoreMinimal.h"
#include "RadioPlayerWeakArray.generated.h"

class ARadioPlayer;

USTRUCT(BlueprintType)
struct FRadioPlayerWeakArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ARadioPlayer>> RadioPlayers;
    
    ARKANSAS_API FRadioPlayerWeakArray();
};

