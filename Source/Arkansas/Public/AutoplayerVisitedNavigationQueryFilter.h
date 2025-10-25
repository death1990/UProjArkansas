#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "AutoplayerVisitedNavigationQueryFilter.generated.h"

UCLASS(Blueprintable)
class UAutoplayerVisitedNavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UAutoplayerVisitedNavigationQueryFilter();

};

