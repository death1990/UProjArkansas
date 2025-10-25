#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ETrapGroupActivation.h"
#include "OnTrapGroupManagerFinishedDelegate.h"
#include "TrapEntry.h"
#include "TrapGroupInterface.h"
#include "TrapGroupManager.generated.h"

class UObsidianIDComponent;

UCLASS(Blueprintable)
class ARKANSAS_API ATrapGroupManager : public AActor, public ITrapGroupInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrapGroupManagerFinished OnTrapGroupManagerFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrapGroupManagerFinished OnTrapGroupManagerArmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrapGroupManagerFinished OnTrapGroupManagerDisarmed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrapGroupActivation ActivationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSharedDisarming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreFirstPreDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestartOnTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTrapsAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrapEntry> TrapEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* IDComponent;
    
public:
    ATrapGroupManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DisarmTrap();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateTrap();
    
    UFUNCTION(BlueprintCallable)
    void ArmTrap();
    

    // Fix for true pure virtual functions not being implemented
};

