#include "OEISettingsSubsystem.h"

UOEISettingsSubsystem::UOEISettingsSubsystem() {
    this->bShouldCreateSubsystem = false;
    this->bShouldSaveAfterReconciliation = false;
    this->bShouldReconcileAfterSerialize = true;
    this->DefaultSettingsCollection = NULL;
}

void UOEISettingsSubsystem::UnbindSettingIntValue_Dynamic(const FGameplayTag& SettingTag, UObject* ContextObject) {
}

void UOEISettingsSubsystem::UnbindSettingFloatValue_Dynamic(const FGameplayTag& SettingTag, UObject* ContextObject) {
}

void UOEISettingsSubsystem::UnbindSettingBoolValueByAsset_Dynamic(const FGameplayTag& SettingTag, UObject* ContextObject) {
}

void UOEISettingsSubsystem::OnPreMapLoad(const FString& NewMapName) {
}

int32 UOEISettingsSubsystem::GetSettingIntValue(const FGameplayTag& SettingTag) const {
    return 0;
}

float UOEISettingsSubsystem::GetSettingFloatValue(const FGameplayTag& SettingTag) const {
    return 0.0f;
}

bool UOEISettingsSubsystem::GetSettingBoolValue(const FGameplayTag& SettingTag) const {
    return false;
}

int32 UOEISettingsSubsystem::BindSettingIntValue_Dynamic(const FGameplayTag& SettingTag, FOEISettingChangedInt32_BP Callback) {
    return 0;
}

float UOEISettingsSubsystem::BindSettingFloatValue_Dynamic(const FGameplayTag& SettingTag, FOEISettingChangedFloat_BP Callback) {
    return 0.0f;
}

bool UOEISettingsSubsystem::BindSettingBoolValueByAsset_Dynamic(const FGameplayTag& SettingTag, FOEISettingChangedBool_BP Callback) {
    return false;
}


