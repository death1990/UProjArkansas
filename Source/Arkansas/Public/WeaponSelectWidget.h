#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SetGadgetEquippedSignatureDelegate.h"
#include "SetThrowableEquippedSignatureDelegate.h"
#include "SetWeaponEquippedSignatureDelegate.h"
#include "WeaponSelectWidget.generated.h"

class UPanelWidget;
class URadialWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UWeaponSelectWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetWeaponEquippedSignature OnSetWeaponEquippedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetThrowableEquippedSignature OnSetThrowableEquippedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetGadgetEquippedSignature OnSetGadgetEquippedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadialOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGadgetSectionConventionClockwise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponSectionConventionClockwise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThrowableSectionConventionClockwise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShowEmptyCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHighlightCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddRadialDeadzones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadzoneHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDeadzoneSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SectionOffsetScalars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialBackgroundOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> InitialSectionOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionMaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionMaxAngle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadialWidget* Radial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* BackgroundSectionPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HighlightWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HighlightGadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HighlightThrowables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ActiveHighlightAnimation;
    
public:
    UWeaponSelectWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SectionSelected(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnInputBack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnToolbeltOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnSetWeaponEquipped(int32 EquippedIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnSetThrowableEquipped(int32 EquippedIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnSetGadgetEquipped(int32 EquippedIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSectionValid(int32 Index) const;
    
};

