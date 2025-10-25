#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SettingsMenuButtonSlotWidget.generated.h"

class UButtonBase;
class USettingsMenuWidget;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USettingsMenuButtonSlotWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* ChildButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* ButtonTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuWidget* SettingsMenu;
    
public:
    USettingsMenuButtonSlotWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
};

