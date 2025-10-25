#pragma once
#include "CoreMinimal.h"
#include "CCCharacterCustomizationBaseWdgt.h"
#include "FocusableOptionPresenterWidget.generated.h"

class UButtonBase;
class UOptionPresenterWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFocusableOptionPresenterWidget : public UCCCharacterCustomizationBaseWdgt {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* GamepadButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionPresenterWidget* OptionSelector;
    
public:
    UFocusableOptionPresenterWidget();

};

