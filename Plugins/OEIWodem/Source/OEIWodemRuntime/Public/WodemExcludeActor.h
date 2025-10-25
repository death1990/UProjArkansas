#pragma once
#include "CoreMinimal.h"
#include "WodemExcludeActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWodemExcludeActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ExcludeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FalloffDistance;
    
    OEIWODEMRUNTIME_API FWodemExcludeActor();
};

