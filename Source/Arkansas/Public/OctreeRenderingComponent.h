#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "OctreeRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOctreeRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UOctreeRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

