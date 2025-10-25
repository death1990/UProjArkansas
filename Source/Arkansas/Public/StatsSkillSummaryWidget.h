#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "StatsSkillSummaryWidget.generated.h"

class USkillSummaryEntryWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStatsSkillSummaryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SkillVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESkill> SkillDisplayOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkillSummaryEntryWidget> SkillEntryClass;
    
public:
    UStatsSkillSummaryWidget();

};

