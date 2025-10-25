#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "EEndGameImageType.h"
#include "ESpecialObsidianID.h"
#include "OnLevelEnterDelegate.h"
#include "Templates/SubclassOf.h"
#include "IndianaGameInstance.generated.h"

class AActor;
class UAchievementsManager;
class UAkRadioController;
class UAudioLogManager;
class UAudioMixerManager;
class UBeaconManager;
class UBroadcastManager;
class UCombatSubsystem;
class UCompanionManager;
class UDevelopmentFunctionality;
class UDifficultyManager;
class UFactionManager;
class UFont;
class UGameCalendar;
class UIndianaAutoPlayer;
class UIndianaLoadingScreenManager;
class UOEISettingsSubsystem;
class UObject;
class UOwConversationManager;
class UOwMusicManager;
class UOwMusicSettings;
class UOwQuestManager;
class UParticlePool;
class UPlayerLoadoutSubsystem;
class URadioManager;
class URestrictedAreaManager;
class USaveGameManager;
class UTeamManager;
class UTravelManager;
class UTutorialManager;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class ARKANSAS_API UIndianaGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelEnter OnLevelEntered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFont*> Fonts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> AlwaysLoadedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> AlwaysLoadedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOEISettingsSubsystem> SettingsSubsystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UObject*> PersistedAssets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOwConversationManager* ConversationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOwQuestManager* QuestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTeamManager* GlobalTeamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFactionManager* GlobalFactionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDifficultyManager* DifficultyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBeaconManager* BeaconManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTutorialManager* TutorialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTutorialManager> TutorialManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAchievementsManager* AchievementsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGameManager* SaveGameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameCalendar* GameCalendar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCompanionManager* CompanionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* OverridePlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIndianaLoadingScreenManager* LoadingScreenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOwMusicManager* MusicManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOwMusicSettings* MusicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatSubsystem* CombatSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerLoadoutSubsystem* PlayerLoadoutSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTravelManager* TravelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URestrictedAreaManager* RestrictedAreaManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioLogManager* AudioLogManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAudioLogManager> AudioLogManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadioManager* RadioManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URadioManager> RadioManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRadioController* AkRadioController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBroadcastManager* BroadcastManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBroadcastManager> BroadcastManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAkRadioController> AkRadioControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioMixerManager* AudioMixerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAudioMixerManager> AudioMixerManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticlePool* ParticlePool;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> TexturePoolAdjustments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIndianaAutoPlayer* AutoPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDevelopmentFunctionality* DevelopmentFunctionality;
    
public:
    UIndianaGameInstance();

    UFUNCTION(BlueprintCallable)
    void SetOverridePlayerClass(UClass* Override);
    
    UFUNCTION(BlueprintCallable)
    void QueueEndGameLoadingScreen(EEndGameImageType EndGameType);
    
    UFUNCTION(BlueprintCallable)
    void QueueCredits(bool bShouldQueue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsOEISpecialIDActor(AActor* Actor, ESpecialObsidianID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* K2_GetOEISpecialIDActor(ESpecialObsidianID ID, bool bAllowStasis, bool& IsValid);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVisitedMainMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasPassedEarlyInteractive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOwQuestManager* GetQuestManager_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFactionManager* GetFactionManager_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOwConversationManager* GetConversationManager_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCompanionManager* GetCompanionManager_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBroadcastManager* GetBroadcastManager_BP() const;
    
    UFUNCTION(BlueprintCallable)
    void CacheCharacterCreationDataPreLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreCreditsQueued() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreCreditsPlaying() const;
    
};

