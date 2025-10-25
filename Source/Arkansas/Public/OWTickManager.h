#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEITickManager -ObjectName=OEITickManager -FallbackName=OEITickManager
#include "OWTickManager.generated.h"

UCLASS(Blueprintable)
class UOWTickManager : public UOEITickManager {
    GENERATED_BODY()
public:
    UOWTickManager();

};

