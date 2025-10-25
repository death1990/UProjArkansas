#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "OEIAchievementSettings.generated.h"

class UAchievementsBundle;
class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class OEIACHIEVEMENTS_API UOEIAchievementSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> AccomplishmentDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAchievementsBundle>> AchievementsBundles;
    
    UOEIAchievementSettings();

    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetRichPresenceOptions();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAchievementOptions();
    
};

