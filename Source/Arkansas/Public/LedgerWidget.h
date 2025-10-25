#pragma once
#include "CoreMinimal.h"
#include "ELedgerPages.h"
#include "ESpecialObsidianID.h"
#include "IndianaInterfaceUserWidget.h"
#include "LedgerWidget.generated.h"

class UActorRenderWidget;
class UCompanionsWidget;
class UImage;
class UInventoryWidget;
class ULedgerCharacterWidget;
class ULedgerJournalWidget;
class ULedgerMapWidget;
class UNavigationGroupWidget;
class UPlayerStatsWidget;
class UScrollBox;
class UScrollingWidgetGroup;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULedgerWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavigationGroupWidget* NavigationBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* PageScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScrollingWidgetGroup* ScrollingWidgetGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerStatsWidget* PlayerStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULedgerCharacterWidget* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULedgerJournalWidget* Journal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULedgerMapWidget* LedgerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryWidget* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionsWidget* CompanionCondensedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CharacterStageFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CharacterStageRear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorRenderWidget* CharacterRenderInventoryComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorRenderWidget* CharacterRenderChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorRenderWidget* ItemRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESpecialObsidianID> CompanionIDsAndSortOrder;
    
public:
    ULedgerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCompanionTabs(ESpecialObsidianID SpecialObsidianID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCurrentPage(ELedgerPages Page, bool bAnimate);
    
};

