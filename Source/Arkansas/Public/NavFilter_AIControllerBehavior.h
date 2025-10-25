#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "NavFilter_AIControllerBehavior.generated.h"

UCLASS(Blueprintable)
class UNavFilter_AIControllerBehavior : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UNavFilter_AIControllerBehavior();

};

