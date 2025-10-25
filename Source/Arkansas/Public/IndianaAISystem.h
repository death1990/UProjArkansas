#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISystem -FallbackName=AISystem
#include "IndianaAISystem.generated.h"

class UAITokenManager;
class USearchCoordinator;

UCLASS(Blueprintable, Config=Game)
class UIndianaAISystem : public UAISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAITokenManager* TokenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USearchCoordinator* SearchCoordinator;
    
public:
    UIndianaAISystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetArkansasAIDebugLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetArkansasAIDebugKeyword();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAIDebugSearchLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAIDebugNavLevel();
    
};

