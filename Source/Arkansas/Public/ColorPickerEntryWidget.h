#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ColorPickerEntryWidget.generated.h"

class UButtonBase;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UColorPickerEntryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ColorImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectedImage;
    
public:
    UColorPickerEntryWidget();

};

