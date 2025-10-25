#pragma once
#include "CoreMinimal.h"
#include "ClipPreventData.h"
#include "HelmetOptions.generated.h"

class UHelmet;

USTRUCT(BlueprintType)
struct FHelmetOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UHelmet>> HelmetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClipPreventData ClipPrevent;
    
    ARKANSAS_API FHelmetOptions();
};

