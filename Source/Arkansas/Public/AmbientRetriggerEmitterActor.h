#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AmbientRetriggerEmitterActor.generated.h"

class UAmbientRetriggerEmitterComponent;

UCLASS(Blueprintable)
class ARKANSAS_API AAmbientRetriggerEmitterActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAmbientRetriggerEmitterComponent* EmitterComponent;
    
public:
    AAmbientRetriggerEmitterActor(const FObjectInitializer& ObjectInitializer);

};

