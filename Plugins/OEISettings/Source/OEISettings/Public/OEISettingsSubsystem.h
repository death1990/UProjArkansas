#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OEIRuntimeBoolSetting.h"
#include "OEIRuntimeFloatSetting.h"
#include "OEIRuntimeIntSetting.h"
#include "OEISettingChangedBool_BPDelegate.h"
#include "OEISettingChangedFloat_BPDelegate.h"
#include "OEISettingChangedInt32_BPDelegate.h"
#include "OEISettingsSubsystem.generated.h"

class UOEISettingsCollectionAsset;
class UObject;

UCLASS(Abstract, Blueprintable, Config=GameUserSettings)
class OEISETTINGS_API UOEISettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCreateSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSaveAfterReconciliation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldReconcileAfterSerialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOEISettingsCollectionAsset* DefaultSettingsCollection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FOEIRuntimeBoolSetting> RuntimeBoolSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FOEIRuntimeIntSetting> RuntimeIntSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FOEIRuntimeFloatSetting> RuntimeFloatSettings;
    
public:
    UOEISettingsSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnbindSettingIntValue_Dynamic(const FGameplayTag& SettingTag, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    void UnbindSettingFloatValue_Dynamic(const FGameplayTag& SettingTag, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    void UnbindSettingBoolValueByAsset_Dynamic(const FGameplayTag& SettingTag, UObject* ContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPreMapLoad(const FString& NewMapName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSettingIntValue(const FGameplayTag& SettingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSettingFloatValue(const FGameplayTag& SettingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSettingBoolValue(const FGameplayTag& SettingTag) const;
    
    UFUNCTION(BlueprintCallable)
    int32 BindSettingIntValue_Dynamic(const FGameplayTag& SettingTag, FOEISettingChangedInt32_BP Callback);
    
    UFUNCTION(BlueprintCallable)
    float BindSettingFloatValue_Dynamic(const FGameplayTag& SettingTag, FOEISettingChangedFloat_BP Callback);
    
    UFUNCTION(BlueprintCallable)
    bool BindSettingBoolValueByAsset_Dynamic(const FGameplayTag& SettingTag, FOEISettingChangedBool_BP Callback);
    
};

