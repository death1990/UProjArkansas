#pragma once
#include "CoreMinimal.h"
#include "ComboBoxSelectedOptionBase.h"
#include "ComboBoxTextSelectedOptionWidget.generated.h"

class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UComboBoxTextSelectedOptionWidget : public UComboBoxSelectedOptionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* OptionTextBlock;
    
public:
    UComboBoxTextSelectedOptionWidget();

};

