#pragma once
#include "CoreMinimal.h"
#include "ExpansionOptions.generated.h"

USTRUCT(BlueprintType)
struct FExpansionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysExpandToMaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInstantExpansion;
    
    ARKANSAS_API FExpansionOptions();
};

