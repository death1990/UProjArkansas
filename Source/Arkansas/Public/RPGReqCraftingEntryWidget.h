#pragma once
#include "CoreMinimal.h"
#include "RPGInteractableBaseEntryWidget.h"
#include "RPGReqCraftingEntryWidget.generated.h"

class UTextBlockBase;
class UWidget;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API URPGReqCraftingEntryWidget : public URPGInteractableBaseEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* XofYRequirementTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* PassFailSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CraftingSuccessDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CraftingFailureDisplay;
    
public:
    URPGReqCraftingEntryWidget();

};

