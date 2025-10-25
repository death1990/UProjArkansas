#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RotatingMovementComponent -FallbackName=RotatingMovementComponent
#include "OwRotatingMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UOwRotatingMovementComponent : public URotatingMovementComponent {
    GENERATED_BODY()
public:
    UOwRotatingMovementComponent(const FObjectInitializer& ObjectInitializer);

};

