#pragma once
#include "CoreMinimal.h"
#include "TextReplacementTokens.h"
#include "TextReplacementPair.generated.h"

USTRUCT(BlueprintType)
struct FTextReplacementPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextReplacementTokens StartToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextReplacementTokens EndToken;
    
    ARKANSAS_API FTextReplacementPair();
};

