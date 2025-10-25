#pragma once
#include "CoreMinimal.h"
#include "LedgerBasePageWidget.h"
#include "LedgerCharacterWidget.generated.h"

class UActorRenderWidget;
class UHeaderFlavorTextWidget;
class UNavigationGroupWidget;
class UReputationSummaryWidget;
class UScrollBox;
class UScrollingWidgetGroup;
class UStatsPerksPageWidget;
class UStatsSkillsPageWidget;
class UStatsSummaryPageWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULedgerCharacterWidget : public ULedgerBasePageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavigationGroupWidget* NavigationBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* PageScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsSummaryPageWidget* CharacterSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsSkillsPageWidget* CharacterSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsPerksPageWidget* CharacterPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReputationSummaryWidget* ReputationPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeaderFlavorTextWidget* HeaderFlavorTextWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScrollingWidgetGroup* ScrollingWidgetGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorRenderWidget* CharacterRenderer;
    
public:
    ULedgerCharacterWidget();

};

