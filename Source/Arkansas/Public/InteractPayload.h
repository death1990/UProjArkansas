#pragma once
#include "CoreMinimal.h"
#include "InteractPayload.generated.h"

USTRUCT(BlueprintType)
struct FInteractPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 int32_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float float_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String_1;
    
    ARKANSAS_API FInteractPayload();
};

