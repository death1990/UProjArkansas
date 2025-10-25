#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputComponent -FallbackName=InputComponent
#include "IndianaInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UIndianaInputComponent : public UInputComponent {
    GENERATED_BODY()
public:
    UIndianaInputComponent(const FObjectInitializer& ObjectInitializer);

};

