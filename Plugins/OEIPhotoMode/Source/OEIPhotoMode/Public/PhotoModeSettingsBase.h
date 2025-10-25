#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EPhotoModeSetting.h"
#include "PhotoModeSettingsInterface.h"
#include "PhotoModeSettingsBase.generated.h"

class UPhotoModeSettingWidget;
class UPhotoModeSettingsGroupBase;
class UPhotoModeTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class OEIPHOTOMODE_API UPhotoModeSettingsBase : public UUserWidget, public IPhotoModeSettingsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhotoModeTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* SettingsGroupSwitcher;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MouseDownInWidget;
    
public:
    UPhotoModeSettingsBase();

    UFUNCTION(BlueprintCallable)
    void RefreshAllSettings();
    
    UFUNCTION(BlueprintCallable)
    void GoToPreviousGroup();
    
    UFUNCTION(BlueprintCallable)
    void GoToNextGroup();
    
    UFUNCTION(BlueprintCallable)
    void GoToGroupByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhotoModeSettingWidget* GetSettingWidgetWithTag(EPhotoModeSetting Setting, FName InAssociatedTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhotoModeSettingWidget* GetSettingWidget(EPhotoModeSetting Setting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhotoModeSettingWidget* GetHoveredSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhotoModeSettingWidget* GetFocusedSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhotoModeSettingsGroupBase* GetCurrentSettingsGroup() const;
    

    // Fix for true pure virtual functions not being implemented
};

