#include "OEIAchievementSettings.h"

UOEIAchievementSettings::UOEIAchievementSettings() {
    this->AchievementsBundles.AddDefaulted(1);
}

TArray<FString> UOEIAchievementSettings::GetRichPresenceOptions() {
    return TArray<FString>();
}

TArray<FString> UOEIAchievementSettings::GetAchievementOptions() {
    return TArray<FString>();
}


