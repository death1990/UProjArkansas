#pragma once
#include "CoreMinimal.h"
#include "BaseWorkbenchActivtyWidget.h"
#include "ECompanionUpgradeTier.h"
#include "ESpecialObsidianID.h"
#include "IndianaUserWidget.h"
#include "WBCompanionUpgradeWidget.generated.h"

class AIndianaAiCharacter;
class UActorRenderWidget;
class UBorder;
class UImage;
class UInputLabelGroupWidget;
class UItemToolTipWidget;
class UItemViewerButtonWidget;
class UNavigationGroupWidget;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UWBCompanionUpgradeWidget : public UIndianaUserWidget, public IBaseWorkbenchActivtyWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestAsShip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UpgradeStateParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnablePairingParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FocusPairingParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TopFocusedPairingParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UpgradeAvailableParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavigationGroupWidget* CompanionNavBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemToolTipWidget* ItemTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorRenderWidget* CompanionRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerButtonWidget* CurrentWeaponItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CommonWeaponItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EliteWeaponItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CommonWeaponLockBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* CommonWeaponPairingBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EliteWeaponLockBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* EliteWeaponPairingBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* WeaponProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerButtonWidget* CurrentArmorItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CommonArmorItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EliteArmorItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CommonArmorLockBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* CommonArmorPairingBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EliteArmorLockBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* EliteArmorPairingBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ArmorProgressBar;
    
    UWBCompanionUpgradeWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnUpgradeTierChanged(ECompanionUpgradeTier NewUpgradeTier);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnModTranscationComplete(bool bIsWeaponTransaction);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnModItemUnhighlighted(UItemViewerButtonWidget* ItemViewerButton);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnModItemHighlighted(UItemViewerButtonWidget* ItemViewerButton);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnModClicked(UItemViewerButtonWidget* ItemViewerButton);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnEquipmentUnhighlighted();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCurrentWeaponHighlighted();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCurrentArmorHighlighted();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCompanionRegistrationChanged(ESpecialObsidianID SpecialObsidianID);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCompanionRegistered(AIndianaAiCharacter* CompanionIn, bool bIsRegistering);
    

    // Fix for true pure virtual functions not being implemented
};

