#pragma once
#include "CoreMinimal.h"
#include "LedgerBasePageWidget.h"
#include "Templates/SubclassOf.h"
#include "StatsPerksPageWidget.generated.h"

class UCharacterDescriptionPanel;
class UCharacterInfoComponent;
class UInputLabelGroupWidget;
class UPanelWidget;
class UPerk;
class UPerksListWidget;
class UScrollingPerksListEntry;
class UScrollingPerksListWidget;
class UTextBlockBase;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStatsPerksPageWidget : public ULedgerBasePageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TierHeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPerk>> PerksIgnoringArrowAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UScrollingPerksListEntry> PerkEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSortAcquiredPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterDescriptionPanel* DescriptionPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* PerkTotalTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* PerkTotalValueTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPerksListWidget* PlayerPerkList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollingPerksListWidget* ScrollingPerksListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* PurchasedPerksList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* PurchasedPerksPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* AdditionalPerksList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* AdditionalPerksPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* PurchasedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* AdditionalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PointsAvailable;
    
public:
    UStatsPerksPageWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UnfavoritePerk();
    
    UFUNCTION(BlueprintCallable)
    void ResetPendingPerks(UCharacterInfoComponent* CharacterInfoComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemovePendingPerk(UCharacterInfoComponent* CharacterInfoComponent, const TSubclassOf<UPerk>& Perk);
    
    UFUNCTION(BlueprintCallable)
    void OnRevertAllocationsClicked();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPerkUnhoveredUnfocused(TSubclassOf<UPerk> Perk);
    
    UFUNCTION(BlueprintCallable)
    void OnPerkSelected(UScrollingPerksListEntry* ScrollingPerkEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnPerkHoveredFocused(TSubclassOf<UPerk> Perk);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInputBack();
    
    UFUNCTION(BlueprintCallable)
    void OnDeallocation();
    
    UFUNCTION(BlueprintCallable)
    void OnAllocation();
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptAllocations();
    
private:
    UFUNCTION(BlueprintCallable)
    void FocusOnLastAttentionPerk();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FavoritePerk();
    
    UFUNCTION(BlueprintCallable)
    void AddPendingPerk(UCharacterInfoComponent* CharacterInfoComponent, const TSubclassOf<UPerk>& Perk);
    
};

