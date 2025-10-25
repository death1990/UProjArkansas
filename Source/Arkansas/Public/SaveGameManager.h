#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AsyncQueryLatestSaveCompleteDelegate.h"
#include "AsyncRequestSaveMetadataCompleteDelegate.h"
#include "AsyncSaveAccessibleScreenshotCompleteDelegate.h"
#include "CachedGameState.h"
#include "EAutoSaveType.h"
#include "EDeleteGameResult.h"
#include "ELoadGameResult.h"
#include "ESaveGameResult.h"
#include "ESaveGameStorageProviderType.h"
#include "ESaveGameType.h"
#include "LevelKey.h"
#include "OnFetchCloudSavesCompleteDelegate.h"
#include "OnLoadCompleteDelegate.h"
#include "OnSaveCompleteDelegate.h"
#include "OnSaveStartedDelegate.h"
#include "OnSaveTransferCompleteDelegate.h"
#include "OnStorageStatusChangedDelegate.h"
#include "OnUserGameSettingsLoadCompleteDelegate.h"
#include "StandaloneCachedGameState.h"
#include "WorldGameState.h"
#include "WorldKey.h"
#include "SaveGameManager.generated.h"

class AActor;
class UDialogBoxWidget;
class USaveGameStorageProvider;

UCLASS(Blueprintable, Config=Game)
class ARKANSAS_API USaveGameManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncRequestSaveMetadataComplete OnRequestSaveMetadataComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncSaveAccessibleScreenshotComplete OnSaveAccessibleScreenshotComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncQueryLatestSaveComplete OnQueryLatestSaveComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveStarted OnSaveStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveComplete OnSaveComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadComplete OnLoadComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveTransferComplete OnSaveTransferComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStorageStatusChanged OnStorageStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFetchCloudSavesComplete OnFetchCloudSavesComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserGameSettingsLoadComplete OnUserGameSettingsLoadComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenshotWaitTimeLimitSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogBoxWidget* ChunkInstallDialog;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FLevelKey, FCachedGameState> CachedGameStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FWorldKey, FWorldGameState> WorldGameStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FStandaloneCachedGameState> StandAloneCachedGameStates;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AutosaveIconFilePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxOverwriteableSaveCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveGameStorageProviderType ActiveStorageProviderType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGameStorageProvider* StorageProviders[4];
    
public:
    USaveGameManager();

    UFUNCTION(BlueprintCallable, Exec)
    void SaveUserGameSettings(bool bSettingsPotentiallyChanged);
    
    UFUNCTION(BlueprintCallable, Exec)
    ESaveGameResult SaveGame(const FString& Filename, bool bIgnoreSuperNova, ESaveGameType SaveGameType);
    
    UFUNCTION(BlueprintCallable)
    static void RequestPostGameSave();
    
    UFUNCTION(BlueprintCallable)
    static void RequestPointOfNoReturnSave();
    
    UFUNCTION(BlueprintCallable)
    static void RequestBeforeSkipSave();
    
    UFUNCTION(BlueprintCallable)
    static void RequestBeforeEVTransitionSave();
    
    UFUNCTION(BlueprintCallable)
    static void RequestAutosave(bool bAllowOnSuperNova);
    
    UFUNCTION(BlueprintCallable, Exec)
    ESaveGameResult Quicksave();
    
    UFUNCTION(BlueprintCallable, Exec)
    ELoadGameResult Quickload();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PointOfNoReturnSave();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPromptedSaveSaveMenuClosed(bool bForced);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void LoadUserGameSettings(bool bBlocking);
    
    UFUNCTION(BlueprintCallable, Exec)
    ELoadGameResult LoadGame(const FString& Filename, bool bPreValidateMetadata);
    
    UFUNCTION(BlueprintCallable)
    static void DisableSaves(bool bDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    EDeleteGameResult DeleteGame(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BeforeEVTransitionSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool Autosave(EAutoSaveType AutoSaveType, bool bIgnoreSuperNova);
    
};

