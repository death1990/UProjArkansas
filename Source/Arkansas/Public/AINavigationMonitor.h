#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AINavigationMonitor.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, MinimalAPI)
class UAINavigationMonitor : public UObject {
    GENERATED_BODY()
public:
    UAINavigationMonitor();

};

