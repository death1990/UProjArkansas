#pragma once
#include "CoreMinimal.h"
#include "DialogBoxWidget.h"
#include "BindingConflictDialogWidget.generated.h"

class UImage;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UBindingConflictDialogWidget : public UDialogBoxWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SwapDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* OldInputIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NewInputIcon;
    
public:
    UBindingConflictDialogWidget();

};

