#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ARCC_BasePageWidget.h"
#include "EARCC_CharacterRotation.h"
#include "PresetEntry.h"
#include "ARCC_CustomizationWidget.generated.h"

class AIndianaCharacterDummy;
class AIndianaPlayerCharacter;
class UArmorItem;
class UButtonBase;
class UCCCharacterCustomizationBaseWdgt;
class UCCGenderSelectionWidget;
class ULoadedAssetList;
class UNavigationGroupWidget;
class UScrollBox;
class USizeBox;
class UWidget;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UARCC_CustomizationWidget : public UARCC_BasePageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIndianaCharacterDummy* SpawnedDummy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIndianaPlayerCharacter* OwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UArmorItem* HiddenHelmet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UArmorItem* HiddenArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EARCC_CharacterRotation, float> RotationToAngleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoadedAssetList* CustomizationAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPresetEntry> PresetEntries_Type1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPresetEntry> PresetEntries_Type2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultAppearanceNavigationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyActionsToAllPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultUsesPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNewInputSchemeForSubTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavigationGroupWidget* AppearanceNavigationBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* CustomizationScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* AppearanceWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCCGenderSelectionWidget* BodyCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCCCharacterCustomizationBaseWdgt* FaceCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCCCharacterCustomizationBaseWdgt* HairCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCCCharacterCustomizationBaseWdgt* CosmeticCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* ExportButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SubscreenSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PanelHeightTall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PanelHeightShort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FiligreeNudgeTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FiligreeNudgeBottomTall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FiligreeNudgeBottomShort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* AssetsLoadingDisplay;
    
public:
    UARCC_CustomizationWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetCharacterDefaults();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubscreenPanelHeightUpdated(const bool bIsTall);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnNavigationComplete(UButtonBase* NavigationButton, int32 CurrentIndex, int32 TargetIndex);
    
    UFUNCTION(BlueprintCallable)
    void DisplayCurrentCharacterData();
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyPreset(int32 PresetIndex, bool bOverrideMatchingIndex, UCCCharacterCustomizationBaseWdgt* SpecificCustomizationPageToReset);
    
};

