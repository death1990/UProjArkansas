#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "CombatOverrideState.h"
#include "OEIMusicManager.generated.h"

class UAkStateValue;
class UOEIAreaMusicData;
class UOEIMusicSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class OEIMUSIC_API UOEIMusicManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCreateSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDynamicMusicEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOEIMusicSettings* MusicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOEIAreaMusicData* AreaMusicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkStateValue* CurrentOverrideState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkStateValue* CachedThreatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkStateValue* CachedTimeOfDayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCombatOverrideState> CurrentCombatOverrideStates;
    
public:
    UOEIMusicManager();

protected:
    UFUNCTION(BlueprintCallable)
    void ResumeMusicStateProcessing();
    
    UFUNCTION(BlueprintCallable)
    void PauseMusicStateProcessing();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableDynamicMusic_BP(UOEIAreaMusicData* MusicData);
    
    UFUNCTION(BlueprintCallable)
    void DisableDynamicMusic_BP();
    
};

