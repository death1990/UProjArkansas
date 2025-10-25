#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea -FallbackName=NavArea
#include "NavArea_NavLinkBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API UNavArea_NavLinkBase : public UNavArea {
    GENERATED_BODY()
public:
    UNavArea_NavLinkBase();

};

