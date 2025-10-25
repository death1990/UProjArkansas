#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "AIGroupBehaviorClassSelector.generated.h"

USTRUCT(BlueprintType)
struct ARKANSAS_API FAIGroupBehaviorClassSelector : public FSoftClassPath {
    GENERATED_BODY()
public:
    FAIGroupBehaviorClassSelector();
};

