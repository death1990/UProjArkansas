#pragma once
#include "CoreMinimal.h"
#include "AimTargets.generated.h"

USTRUCT(BlueprintType)
struct FAimTargets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    ARKANSAS_API FAimTargets();
};

