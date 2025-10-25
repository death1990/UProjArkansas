#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EAnimNotify.h"
#include "EOCLDifficulty.h"
#include "EOCLResult.h"
#include "EOCLState.h"
#include "ESkillDifficultyTier.h"
#include "OCLAnimateCloseDelegate.h"
#include "OCLAnimateInstantCloseDelegate.h"
#include "OCLAnimateInstantOpenDelegate.h"
#include "OCLAnimateOpenDelegate.h"
#include "OCLAnimateUnjamDelegate.h"
#include "OCLBarredDelegate.h"
#include "OCLCloseEndDelegate.h"
#include "OCLCloseInterruptedDelegate.h"
#include "OCLCloseStartDelegate.h"
#include "OCLJammedDelegate.h"
#include "OCLLockedDelegate.h"
#include "OCLLockpickInterruptedDelegate.h"
#include "OCLLockpickLoopStopDelegate.h"
#include "OCLLockpickStartDelegate.h"
#include "OCLLockpickSuccessDelegate.h"
#include "OCLOnPowerChangedDelegate.h"
#include "OCLOpenAttemptedLockedDelegate.h"
#include "OCLOpenEndDelegate.h"
#include "OCLOpenInterruptedDelegate.h"
#include "OCLOpenStartDelegate.h"
#include "OCLSealedDelegate.h"
#include "OCLStateChangedDelegate.h"
#include "OCLUnbarredDelegate.h"
#include "OCLUnjammedDelegate.h"
#include "OCLUnlockedDelegate.h"
#include "OCLUnsealedDelegate.h"
#include "OCLWireConnectedDelegate.h"
#include "Templates/SubclassOf.h"
#include "OCLComponent.generated.h"

class AActor;
class UItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UOCLComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOCLState InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> KeyItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveKeyAfterUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanLockpick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOCLDifficulty LockpickDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceLockpickTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillDifficultyTier ForcedLockpickTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> LockpickItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoCloseDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoCloseDelayNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoCloseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreForCrime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLStateChanged OnOCLStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLOpenStart OnOCLOpenStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLOpenEnd OnOCLOpenEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLCloseStart OnOCLCloseStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLCloseEnd OnOCLCloseEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLAnimateOpen OnOCLAnimateOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLAnimateClose OnOCLAnimateClose;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLAnimateUnjam OnOCLAnimateUnjam;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLAnimateInstantOpen OnOCLAnimateInstantOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLAnimateInstantClose OnOCLAnimateInstantClose;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLOpenAttemptedLocked OnOCLOpenAttemptedLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLOpenAttemptedLocked OnOCLOpenAttemptedBarred;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLLocked OnOCLLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLUnlocked OnOCLUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLBarred OnOCLBarred;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLUnbarred OnOCLUnbarred;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLSealed OnOCLSealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLUnsealed OnOCLUnsealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLOpenInterrupted OnOCLOpenInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLCloseInterrupted OnOCLCloseInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLLockpickStart OnOCLLockpickStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLLockpickSuccess OnOCLLockpickSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLLockpickInterrupted OnOCLLockpickInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLLockpickLoopStop OnOCLLockpickLoopStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLOnPowerChanged OCLOnPowerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLWireConnected OCLWireConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLJammed OnOCLJammed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLUnjammed OnOCLUnjammed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EOCLState CurrentState;
    
public:
    UOCLComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnsealOCL(bool bFireOCLUnsealedEvent);
    
    UFUNCTION(BlueprintCallable)
    void UnlockOCL(bool bFireOCLUnlockedEvent);
    
    UFUNCTION(BlueprintCallable)
    void UnjamOCL(bool bFireOCLJammedEvent);
    
    UFUNCTION(BlueprintCallable)
    void UnbarOCL(bool bFireOCLUnbarredEvent, bool bEnterLockedState);
    
    UFUNCTION(BlueprintCallable)
    void SignalOCLAnimationComplete();
    
    UFUNCTION(BlueprintCallable)
    void SealOCL(bool bFireOCLSealedEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotifyEvent(EAnimNotify AnimNotifyEvent, FName OptionalSocket);
    
    UFUNCTION(BlueprintCallable)
    void LockOCL(bool bFireOCLLockedEvent);
    
    UFUNCTION(BlueprintCallable)
    void JamOCL(bool bFireOCLJammedEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSealing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSealed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpening() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJammed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBarred() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInFrontOfOCL(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool HasWirePower();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetExactUnjamDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetExactLockpickDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOCLState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void BarOCL(bool bFireOCLBarredEvent);
    
    UFUNCTION(BlueprintCallable)
    EOCLResult AttemptUnlock(AActor* Initiator);
    
    UFUNCTION(BlueprintCallable)
    EOCLResult AttemptUnjam(AActor* Initiator);
    
    UFUNCTION(BlueprintCallable)
    EOCLResult AttemptOpen(AActor* Initiator, bool bForce, bool bSeal, bool bIgnoreLockStatus, bool bIgnoreStartEvent, bool bIgnoreEndEvent, bool bIgnoreSound, bool bInstantAnimation);
    
    UFUNCTION(BlueprintCallable)
    EOCLResult AttemptClose(AActor* Initiator, bool bForce, bool Block, bool bSeal, bool bIgnoreLockStatus, bool bIgnoreStartEvent, bool bIgnoreEndEvent, bool bIgnoreSound, bool bInstantAnimation);
    
};

