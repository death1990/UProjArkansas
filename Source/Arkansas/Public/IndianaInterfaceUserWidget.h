#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "IndianaInterfaceUserWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UIndianaInterfaceUserWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
    UIndianaInterfaceUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetInterfaceUserFocus();
    
    UFUNCTION(BlueprintCallable)
    void SetCursorVisible(bool bVisible);
    
};

