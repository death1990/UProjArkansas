#pragma once
#include "CoreMinimal.h"
#include "DialogBoxWidget.h"
#include "DialogBoxRespecWidget.generated.h"

class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UDialogBoxRespecWidget : public UDialogBoxWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* TextBlockMiddle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* TextBlockEnd;
    
public:
    UDialogBoxRespecWidget();

};

