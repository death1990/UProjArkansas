#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CCSkillSummaryWidget.generated.h"

class UCCSkillsSummaryListWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCCSkillSummaryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCCSkillsSummaryListWidget* SkillsList;
    
public:
    UCCSkillSummaryWidget();

};

