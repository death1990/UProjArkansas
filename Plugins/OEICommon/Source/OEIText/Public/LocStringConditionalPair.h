#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include <Conditional.h>
#include "LocStringConditionalPair.generated.h"


USTRUCT(BlueprintType)
struct OEITEXT_API FLocStringConditionalPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditional Conditional;
    
    FLocStringConditionalPair();
};

