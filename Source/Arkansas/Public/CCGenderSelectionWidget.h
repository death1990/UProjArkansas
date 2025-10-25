#pragma once
#include "CoreMinimal.h"
#include "FocusableOptionPresenterWidget.h"
#include "CCGenderSelectionWidget.generated.h"

class UButtonBase;
class UOptionPresenterWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCCGenderSelectionWidget : public UFocusableOptionPresenterWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* PresetButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionPresenterWidget* PresetSelector;
    
public:
    UCCGenderSelectionWidget();

};

