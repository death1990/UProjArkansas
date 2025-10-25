#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EPhotoModeSetting.h"
#include "EPhotoSettingsGroup.h"
#include "PhotoModeSettingsGroupBase.generated.h"

class UCanvasPanel;
class UPhotoModeSettingWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class OEIPHOTOMODE_API UPhotoModeSettingsGroupBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SettingsBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhotoSettingsGroup SettingGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString SettingGroupName;
    
    UPhotoModeSettingsGroupBase();

    UFUNCTION(BlueprintCallable)
    void RefreshAllSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHDRActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSetting(EPhotoModeSetting Setting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhotoModeSettingWidget* GetSettingWidgetWithTag(EPhotoModeSetting Setting, FName InAssociatedTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhotoModeSettingWidget* GetSetting(EPhotoModeSetting Setting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhotoModeSettingWidget* GetHoveredSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhotoModeSettingWidget* GetFocusedSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhotoModeSettingWidget* GetFirstSetting() const;
    
};

