#pragma once
#include "CoreMinimal.h"
#include "EIKGoalTarget.h"
#include "PropIKTargets.generated.h"

USTRUCT(BlueprintType)
struct FPropIKTargets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIKGoalTarget UserBodyPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PropIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    OEIANIMPROXYRUNTIME_API FPropIKTargets();
};

