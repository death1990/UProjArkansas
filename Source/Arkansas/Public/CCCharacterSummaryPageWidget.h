#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CCCharacterSummaryPageWidget.generated.h"

class UCCAptitudeSummaryWidget;
class UCCAttributeSummaryWidget;
class UCCSkillsSummaryListWidget;
class UCharacterSkillsDescriptionPanel;
class UInputLabelGroupWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCCCharacterSummaryPageWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCCAptitudeSummaryWidget* AptitudeSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCCAttributeSummaryWidget* AttributeSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCCSkillsSummaryListWidget* SkillSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterSkillsDescriptionPanel* DescriptionPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadScrollMultiplier;
    
public:
    UCCCharacterSummaryPageWidget();

};

