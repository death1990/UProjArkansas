#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "BaseInventoryItemManagement.generated.h"

class UActorRenderWidget;
class UBreakdownPopupWidget;
class UIndianaDragDropOperation;
class UItemViewerButtonWidget;
class UItemViewerNavigationWidget;
class UItemViewerWidget;
class UScrollBox;
class UScrollingWidgetGroup;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBaseInventoryItemManagement : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerWidget* ItemViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerNavigationWidget* ItemViewerNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventUnjunkForAutoJunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* PageScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakdownPopupWidget* BreakdownPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScrollingWidgetGroup* ScrollingWidgetGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UItemViewerButtonWidget* HoveredItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorRenderWidget* CharacterRenderer;
    
public:
    UBaseInventoryItemManagement();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemViewerSortingChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_SetArmorSlot(UIndianaDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_JunkItem(UIndianaDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_ClearWeaponSlot(UIndianaDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDrop_BreakDownItem(UIndianaDragDropOperation* Operation);
    
};

