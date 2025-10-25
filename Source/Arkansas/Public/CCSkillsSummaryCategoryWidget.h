#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CCSkillsSummaryCategoryWidget.generated.h"

class UCCSkillSummaryDetailWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCCSkillsSummaryCategoryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SkillContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCCSkillSummaryDetailWidget> SkillClass;
    
public:
    UCCSkillsSummaryCategoryWidget();

};

