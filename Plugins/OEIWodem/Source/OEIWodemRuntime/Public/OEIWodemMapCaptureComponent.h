#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "OEIWodemMapCaptureComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIWODEMRUNTIME_API UOEIWodemMapCaptureComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UOEIWodemMapCaptureComponent(const FObjectInitializer& ObjectInitializer);

};

