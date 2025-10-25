#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "DropdownOptionWidgetBase.generated.h"

class UButtonBase;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UDropdownOptionWidgetBase : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* OptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* OptionButton;
    
public:
    UDropdownOptionWidgetBase();

};

