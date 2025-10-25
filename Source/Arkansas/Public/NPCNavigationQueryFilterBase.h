#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "NPCNavigationQueryFilterBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UNPCNavigationQueryFilterBase : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UNPCNavigationQueryFilterBase();

};

