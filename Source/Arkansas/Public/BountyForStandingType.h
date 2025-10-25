#pragma once
#include "CoreMinimal.h"
#include "BountyForStandingLevel.h"
#include "EStandingType.h"
#include "BountyForStandingType.generated.h"

USTRUCT(BlueprintType)
struct FBountyForStandingType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStandingType, FBountyForStandingLevel> BountyStandingMap;
    
    ARKANSAS_API FBountyForStandingType();
};

