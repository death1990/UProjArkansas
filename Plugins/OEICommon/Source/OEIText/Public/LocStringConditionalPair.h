#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIScripting -ObjectName=Conditional -FallbackName=Conditional
#include "LocString.h"
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

