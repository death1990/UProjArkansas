#pragma once
#include "CoreMinimal.h"
#include "IndianaWidgetComponent.h"
#include "ComputerTerminalWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UComputerTerminalWidgetComponent : public UIndianaWidgetComponent {
    GENERATED_BODY()
public:
    UComputerTerminalWidgetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVideoLogActive(bool bActive);
    
};

