#pragma once
#include "CoreMinimal.h"
#include "BaseWorkbenchActivtyWidget.h"
#include "IndianaUserWidget.h"
#include "WBLandingPageWidget.generated.h"

class UInputLabelGroupWidget;
class UInputLabelWidget;
class ULandingPageButtonWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UWBLandingPageWidget : public UIndianaUserWidget, public IBaseWorkbenchActivtyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULandingPageButtonWidget* TinkerButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULandingPageButtonWidget* ModsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULandingPageButtonWidget* PartyUpgradeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULandingPageButtonWidget* BreakdownButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelWidget* ExitLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
public:
    UWBLandingPageWidget();


    // Fix for true pure virtual functions not being implemented
};

