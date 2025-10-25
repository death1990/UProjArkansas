#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CCNameSelectionWidget.generated.h"

class UButtonBase;
class UInputLabelGroupWidget;
class UTextEntryWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCCNameSelectionWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextEntryWidget* TextEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* InvisibleButton;
    
public:
    UCCNameSelectionWidget();

};

