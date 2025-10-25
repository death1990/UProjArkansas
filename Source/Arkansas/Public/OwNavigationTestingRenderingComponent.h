#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavTestRenderingComponent -FallbackName=NavTestRenderingComponent
#include "OwNavigationTestingRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOwNavigationTestingRenderingComponent : public UNavTestRenderingComponent {
    GENERATED_BODY()
public:
    UOwNavigationTestingRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

