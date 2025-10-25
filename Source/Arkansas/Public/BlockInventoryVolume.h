#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "BlockInventoryVolume.generated.h"

UCLASS(Blueprintable)
class ABlockInventoryVolume : public AVolume {
    GENERATED_BODY()
public:
    ABlockInventoryVolume(const FObjectInitializer& ObjectInitializer);

};

