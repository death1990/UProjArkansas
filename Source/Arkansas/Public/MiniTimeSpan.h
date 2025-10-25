#pragma once
#include "CoreMinimal.h"
#include "MiniTimeSpan.generated.h"

USTRUCT(BlueprintType)
struct FMiniTimeSpan {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Milliseconds;
    
    ARKANSAS_API FMiniTimeSpan();
};

