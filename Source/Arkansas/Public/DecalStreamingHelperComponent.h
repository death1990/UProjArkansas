#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "DecalStreamingHelperComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UDecalStreamingHelperComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDecalStreamingHelperComponent(const FObjectInitializer& ObjectInitializer);

};

