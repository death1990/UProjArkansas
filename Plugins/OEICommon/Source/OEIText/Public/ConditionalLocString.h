#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "LocStringConditionalPair.h"
#include "ConditionalLocString.generated.h"

USTRUCT(BlueprintType)
struct OEITEXT_API FConditionalLocString {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DefaultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocStringConditionalPair> AlternateStrings;
    
public:
    FConditionalLocString();
};

