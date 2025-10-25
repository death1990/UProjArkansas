#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AIGroupBehaviorInstanceSpawner.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, HideDropdown, NotPlaceable, Transient)
class UAIGroupBehaviorInstanceSpawner : public UObject {
    GENERATED_BODY()
public:
    UAIGroupBehaviorInstanceSpawner();

};

