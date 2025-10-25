#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TemporaryActor.generated.h"

UCLASS(Blueprintable)
class ATemporaryActor : public AActor {
    GENERATED_BODY()
public:
    ATemporaryActor(const FObjectInitializer& ObjectInitializer);

};

