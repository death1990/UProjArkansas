#pragma once
#include "CoreMinimal.h"
#include "ECompanionInfoType.h"
#include "ESpecialObsidianID.h"
#include "IndianaUserWidget.h"
#include "CompanionsWidget.generated.h"

class AIndianaAiCharacter;
class UBackgroundPanelWidget;
class UCharacterDescriptionPanel;
class UCompanionDetails;
class UCompanionEquipmentBarWidget;
class UCompanionInfoButton;
class UCompanionPerksWidget;
class UCompanionStatSummary;
class UFlavorTextWidget;
class UGenericListEntryWidget;
class UInputLabelGroupWidget;
class UItemToolTipWidget;
class UItemViewerButtonWidget;
class UNavigationGroupWidget;
class UPerksListEntry;
class UStatusEffectEntryWidget;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCompanionsWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavigationGroupWidget* NavigationBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlavorTextWidget* FlavorTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionInfoButton* CompanionInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionEquipmentBarWidget* CompanionEquipmentBarWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionStatSummary* CompanionStatsSummaryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionPerksWidget* CompanionPerkListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* DetailPanelSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionDetails* CompanionDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBackgroundPanelWidget* CompanionDetailsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterDescriptionPanel* CompanionDescriptionPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBackgroundPanelWidget* CompanionDescriptionContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemToolTipWidget* CompanionTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillEmptyNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowBackPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusEquipmentByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLedger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestAsShip;
    
public:
    UCompanionsWidget();

    UFUNCTION(BlueprintCallable)
    void ShowDetailPanel(bool bDisplayPanel);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPerksAllocated();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnStatusEffectItemHoveredFocused(const UStatusEffectEntryWidget* StatusEffectItemIn);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnStatItemHoveredFocused(UGenericListEntryWidget* StatItemIn);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPerkItemHoveredFocused(UPerksListEntry* PerkItemIn);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnEquipmentButtonUnhighlighted(UItemViewerButtonWidget* HighlightedEquipmentItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnEquipmentButtonHighlighted(UItemViewerButtonWidget* HighlightedEquipmentItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnEquipmentButtonAuxClicked(UItemViewerButtonWidget* HighlightedEquipmentItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCompanionRegistrationChanged(ESpecialObsidianID SpecialObsidianID);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCompanionRegistered(AIndianaAiCharacter* CompanionIn, bool bIsRegistering);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCompanionInfoHighlighted(UCompanionInfoButton* CompanionInfoIn);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisplayCompanionInfo(ECompanionInfoType TargetCompanionType);
    
};

