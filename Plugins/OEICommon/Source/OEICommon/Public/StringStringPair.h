#pragma once
#include "CoreMinimal.h"
#include "StringStringPair.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FStringStringPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Item1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Item2;
    
    FStringStringPair();
};

