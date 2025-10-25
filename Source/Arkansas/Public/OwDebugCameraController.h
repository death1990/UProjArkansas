#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugCameraController -FallbackName=DebugCameraController
#include "OwDebugCameraController.generated.h"

UCLASS(Blueprintable)
class AOwDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    AOwDebugCameraController(const FObjectInitializer& ObjectInitializer);

};

