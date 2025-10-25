#pragma once
#include "CoreMinimal.h"
#include "CharacterSkillsBasePage.h"
#include "CCSkillsPageWidget.generated.h"

class UImage;
class UInputLabelGroupWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCCSkillsPageWidget : public UCharacterSkillsBasePage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ScrollIndicator;
    
public:
    UCCSkillsPageWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUserScrolled(float ScrollAmount);
    
};

