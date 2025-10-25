#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ComboBoxSelectedOptionBase.generated.h"

class UButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UComboBoxSelectedOptionBase : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* OptionButton;
    
public:
    UComboBoxSelectedOptionBase();

};

