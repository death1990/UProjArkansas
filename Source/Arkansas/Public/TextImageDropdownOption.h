#pragma once
#include "CoreMinimal.h"
#include "DropdownOptionWidgetBase.h"
#include "TextImageDropdownOption.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTextImageDropdownOption : public UDropdownOptionWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* OptionImage;
    
public:
    UTextImageDropdownOption();

};

