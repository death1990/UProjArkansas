#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "OwCrowdController.generated.h"

UCLASS(Blueprintable)
class AOwCrowdController : public AAIController {
    GENERATED_BODY()
public:
    AOwCrowdController(const FObjectInitializer& ObjectInitializer);

};

