#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EGameDifficulty.h"
#include "DifficultyManager.generated.h"

UCLASS(Blueprintable)
class UDifficultyManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SurvivalMode;
    
public:
    UDifficultyManager();

    UFUNCTION(BlueprintCallable, Exec)
    void SetSurvivalMode(bool IsSurvivalMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDifficulty(EGameDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable)
    static EGameDifficulty GetGameDifficulty();
    
};

