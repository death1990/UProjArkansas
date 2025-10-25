#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "RPGInteractionPromptWidget.generated.h"

class URPGInteractionContainerWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API URPGInteractionPromptWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URPGInteractionContainerWidget* RPGInteractionContainer1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URPGInteractionContainerWidget* RPGInteractionContainer2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URPGInteractionContainerWidget* RPGInteractionContainer3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ContentVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSimplifiedDisplay;
    
public:
    URPGInteractionPromptWidget();

};

