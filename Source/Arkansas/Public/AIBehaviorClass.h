#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AIFilterBehaviorTree.h"
#include "AIFilterCharacter.h"
#include "AIFilterController.h"
#include "AIBehaviorClass.generated.h"

class AIndianaAiCharacter;
class AIndianaAiController;
class UBehaviorTree;

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API UAIBehaviorClass : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIndianaAiCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIndianaAiController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFilterCharacter> CharacterPassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFilterCharacter> CharacterBlockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFilterController> ControllerPassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFilterController> ControllerBlockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFilterBehaviorTree> BehaviorTreePassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIFilterBehaviorTree> BehaviorTreeBlockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInitialized: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsFromGameLoad: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsStarting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsStopping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInCleanup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsRunning: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPaused: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCompleted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsAborted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCompletedResult: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPausedLogicSuppressed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAllowsAbort: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedsTick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedsPostGameLoad: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedsRestartOnResume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPriorityNodeSuspensionHandledManually: 1;
    
public:
    UAIBehaviorClass();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNeedsTick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNeedsRestartOnResume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNeedsPostGameLoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAborted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCompletedResult() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishBehavior(const bool bResult);
    
public:
    UFUNCTION(BlueprintCallable)
    bool AllowsAbort();
    
    UFUNCTION(BlueprintCallable)
    void AIDebugPrintTime(const FString& Text, int32 Level, float Time);
    
    UFUNCTION(BlueprintCallable)
    void AIDebugPrint(const FString& Text, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void AbortBehavior();
    
};

