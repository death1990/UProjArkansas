#pragma once
#include "CoreMinimal.h"
#include "EBountyLevel.h"
#include "EStandingLevel.h"
#include "BountyForStandingLevel.generated.h"

USTRUCT(BlueprintType)
struct FBountyForStandingLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStandingLevel, EBountyLevel> BountyStandingMap;
    
    ARKANSAS_API FBountyForStandingLevel();
};

