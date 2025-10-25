#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AIAnimationMonitor.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, MinimalAPI)
class UAIAnimationMonitor : public UObject {
    GENERATED_BODY()
public:
    UAIAnimationMonitor();

};

