#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "DropdownBoxWidgetBase.generated.h"

class UDropdownOptionWidgetBase;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UDropdownBoxWidgetBase : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* OptionsScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDropdownOptionWidgetBase> OptionClass;
    
public:
    UDropdownBoxWidgetBase();

};

