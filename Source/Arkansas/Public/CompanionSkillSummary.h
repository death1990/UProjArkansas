#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CompanionSkillSummary.generated.h"

class UGenericListEntryWidget;
class UStatsPerkSummaryWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCompanionSkillSummary : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* Skill0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* Skill1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* Skill2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* Ability0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* Ability1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericListEntryWidget* Ability2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsPerkSummaryWidget* StatsPerkSummary;
    
public:
    UCompanionSkillSummary();

};

