#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent
#include "OwPostProcessComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOwPostProcessComponent : public UPostProcessComponent {
    GENERATED_BODY()
public:
    UOwPostProcessComponent(const FObjectInitializer& ObjectInitializer);

};

