#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CCSkillsSummaryListWidget.generated.h"

class UCCSkillsSummaryCategoryWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCCSkillsSummaryListWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* GroupContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCCSkillsSummaryCategoryWidget> CategoryClass;
    
public:
    UCCSkillsSummaryListWidget();

};

