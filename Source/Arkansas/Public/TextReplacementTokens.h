#pragma once
#include "CoreMinimal.h"
#include "TextReplacementTokens.generated.h"

USTRUCT(BlueprintType)
struct FTextReplacementTokens {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SearchForToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplaceWithToken;
    
    ARKANSAS_API FTextReplacementTokens();
};

