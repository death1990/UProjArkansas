#pragma once
#include "CoreMinimal.h"
#include "DialogBoxWidget.h"
#include "BreakdownDialogBoxWidget.generated.h"

class UBreakdownGainContainerWidget;
class UTextBlockBase;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UBreakdownDialogBoxWidget : public UDialogBoxWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* UniqueScienceWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* ModWarningTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakdownGainContainerWidget* BreakdownGainContainer;
    
public:
    UBreakdownDialogBoxWidget();

};

