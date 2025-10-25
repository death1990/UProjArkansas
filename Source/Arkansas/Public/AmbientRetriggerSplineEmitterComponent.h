#pragma once
#include "CoreMinimal.h"
#include "AmbientRetriggerEmitterComponent.h"
#include "AmbientRetriggerSplineEmitterComponent.generated.h"

class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UAmbientRetriggerSplineEmitterComponent : public UAmbientRetriggerEmitterComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UAmbientRetriggerSplineEmitterComponent(const FObjectInitializer& ObjectInitializer);

};

