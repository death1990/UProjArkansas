#pragma once
#include "CoreMinimal.h"
#include "BaseHUDWidget.h"
#include "EArmorSlot.h"
#include "CompanionOverviewWidget.generated.h"

class UAnimatingProgressBarWidget;
class UImage;
class UOverlay;
class UStatusEffectTagWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCompanionOverviewWidget : public UBaseHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadedAbilityButtonAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmorSlot AbilityArmorSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CompanionPortraitImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CompanionAbilityFiligree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusEffectTagWidget* StatusEffectDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimatingProgressBarWidget* CompanionHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimatingProgressBarWidget* CompanionBonusHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimatingProgressBarWidget* CompanionAbilityBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimatingProgressBarWidget* CompanionAbilityBar2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* CompanionAbilityBarOverlay1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* CompanionAbilityBarOverlay2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimatingProgressBarWidget* CompanionShieldBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InputContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInBonusHealthAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutBonusHealthAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInRootAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInShieldBarAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutShieldBarAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimateInOutStatusEffectBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CompanionAbilityChargeAdded_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CompanionAbilityChargeAdded_2;
    
public:
    UCompanionOverviewWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFadeOutFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeInStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnCompanionEquipmentChanged(EArmorSlot ArmorSlotChanged);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityCooldownChangedSubscription(int32 CompanionIndex, float PreviousNormalizedValue, float NewNormalizedValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnChargeDisplayUpdated(int32 AvailableCharges, int32 MaximumCharges);
    
};

