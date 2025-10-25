#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ComboBoxBaseWidget.generated.h"

class UComboBoxSelectedOptionBase;
class UMenuAnchor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UComboBoxBaseWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxSelectedOptionBase* SelectedOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* DropdownAnchor;
    
public:
    UComboBoxBaseWidget();

};

