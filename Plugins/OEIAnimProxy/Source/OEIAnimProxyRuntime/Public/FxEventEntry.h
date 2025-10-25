#pragma once
#include "CoreMinimal.h"
#include "OnPropEventDelegate.h"
#include "FxEventEntry.generated.h"

USTRUCT(BlueprintType)
struct FFxEventEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPropEvent EventFunc;
    
    OEIANIMPROXYRUNTIME_API FFxEventEntry();
};

