#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EGameDifficulty.h"
#include "AITokenManager.generated.h"

UCLASS(Blueprintable)
class UAITokenManager : public UObject {
    GENERATED_BODY()
public:
    UAITokenManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDifficultyChanged(EGameDifficulty NewDifficulty);
    
};

