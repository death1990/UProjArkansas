#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESaveGameResult.h"
#include "ESaveGameType.h"
#include "IndianaAutoPlayer.generated.h"

UCLASS(Blueprintable)
class UIndianaAutoPlayer : public UObject {
    GENERATED_BODY()
public:
    UIndianaAutoPlayer();

    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAutoPlayerPause();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopAutoPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartAutoPlayerOnForcedMap(const FString& MapName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartAutoPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAutoplayerMapCoverage();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAsyncSaveComplete(ESaveGameResult Result, ESaveGameType SaveType);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ForceAutoPlayerMap(const FString& MapName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAutoPlayerMapCoverage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearForcedAutoPlayerMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoPlayerIgnoreShaders();
    
};

