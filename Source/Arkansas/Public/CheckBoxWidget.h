#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CheckBoxWidget.generated.h"

class UButtonBase;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCheckBoxWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* CheckBoxButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CheckedImage;
    
public:
    UCheckBoxWidget();

};

