#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "OEIWodemCoverGrassComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIWODEMRUNTIME_API UOEIWodemCoverGrassComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UOEIWodemCoverGrassComponent(const FObjectInitializer& ObjectInitializer);

};

