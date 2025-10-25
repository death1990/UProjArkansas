#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
#include "OEIWodemMapCaptureComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIWODEMRUNTIME_API UOEIWodemMapCaptureComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UOEIWodemMapCaptureComponent(const FObjectInitializer& ObjectInitializer);

};

