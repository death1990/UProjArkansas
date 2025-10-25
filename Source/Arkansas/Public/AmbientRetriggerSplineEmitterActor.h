#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AmbientRetriggerSplineEmitterActor.generated.h"

class UAmbientRetriggerSplineEmitterComponent;
class USplineComponent;

UCLASS(Blueprintable)
class ARKANSAS_API AAmbientRetriggerSplineEmitterActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAmbientRetriggerSplineEmitterComponent* EmitterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    AAmbientRetriggerSplineEmitterActor(const FObjectInitializer& ObjectInitializer);

};

