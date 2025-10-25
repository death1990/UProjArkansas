#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea -FallbackName=NavArea
#include "NavArea_Destructible.generated.h"

UCLASS(Blueprintable)
class UNavArea_Destructible : public UNavArea {
    GENERATED_BODY()
public:
    UNavArea_Destructible();

};

