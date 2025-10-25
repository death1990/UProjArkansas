#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CompanionStatsWidget.generated.h"

class UCompanionDetails;
class UCompanionSkillSummary;
class UCompanionStatSummary;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCompanionStatsWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionDetails* CompanionDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionStatSummary* CompanionStatSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionSkillSummary* CompanionSkillSummary;
    
public:
    UCompanionStatsWidget();

};

