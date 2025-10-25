#pragma once
#include "CoreMinimal.h"
#include "BasicCreditName.generated.h"

USTRUCT(BlueprintType)
struct FBasicCreditName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameString;
    
    ARKANSAS_API FBasicCreditName();
};

