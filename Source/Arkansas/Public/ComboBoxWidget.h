#pragma once
#include "CoreMinimal.h"
#include "ComboBoxBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "ComboBoxWidget.generated.h"

class UDropdownBoxWidgetBase;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UComboBoxWidget : public UComboBoxBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDropdownBoxWidgetBase> DropdownBoxClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDropdownBoxWidgetBase* DropdownBox;
    
public:
    UComboBoxWidget();

protected:
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetContents();
    
};

