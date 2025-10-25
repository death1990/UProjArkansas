#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AchievementsManager.generated.h"

class AActor;
class UAchievementDataAsset;
class UItem;
class UPresenceData;

UCLASS(Blueprintable)
class UAchievementsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPresenceData* CurrentPresenceData;
    
public:
    UAchievementsManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponSlotted(UItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnKillPreDeath(AActor* Victim);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(UItem* Item);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void IncrementAchievement(const FName& AchievementBPName, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void GameOver_BP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GameOver();
    
    UFUNCTION(BlueprintCallable)
    static void CompleteAchievementBP(const UAchievementDataAsset* Achievement);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteAchievement(const FName& AchievementBPName);
    
};

