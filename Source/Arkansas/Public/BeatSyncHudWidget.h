#pragma once
#include "CoreMinimal.h"
#include "BaseHUDWidget.h"
#include "OnBeatSyncDelegate.h"
#include "BeatSyncHudWidget.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBeatSyncHudWidget : public UBaseHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeatSync OnBeatSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* ComboStageRTPC;
    
public:
    UBeatSyncHudWidget();

    UFUNCTION(BlueprintCallable)
    void StopMusic();
    
    UFUNCTION(BlueprintCallable)
    void PlayMusic();
    
    UFUNCTION(BlueprintCallable)
    void OnMusicSyncEntry(const float BarDuration, const float BeatDuration);
    
    UFUNCTION(BlueprintCallable)
    void ComboStageUpdate(const int32 CurrentComboStage);
    
};

