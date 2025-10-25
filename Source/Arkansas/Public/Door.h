#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EAnimNotify.h"
#include "EInteractionType.h"
#include "EOCLState.h"
#include "InteractableActor.h"
#include "MapFloorTrackedActor.h"
#include "OCLBarredDelegate.h"
#include "OCLCloseEndDelegate.h"
#include "OCLCloseStartDelegate.h"
#include "OCLLockedDelegate.h"
#include "OCLLockpickInterruptedDelegate.h"
#include "OCLLockpickLoopStopDelegate.h"
#include "OCLLockpickStartDelegate.h"
#include "OCLLockpickSuccessDelegate.h"
#include "OCLOpenAttemptedLockedDelegate.h"
#include "OCLOpenEndDelegate.h"
#include "OCLOpenStartDelegate.h"
#include "OCLSealedDelegate.h"
#include "OCLUnbarredDelegate.h"
#include "OCLUnlockedDelegate.h"
#include "OCLUnsealedDelegate.h"
#include "OnCompanionInteractionDelegate.h"
#include "OnDoorFpvAnimCompleteDelegate.h"
#include "OnExplosiveInteractionBeginDelegate.h"
#include "OnPlayerInteractionDelegate.h"
#include "RPGInteractableRequirements.h"
#include "Templates/SubclassOf.h"
#include "Door.generated.h"

class AActor;
class AIndianaAiCharacter;
class UAnimMontage;
class UAnimSequenceBase;
class UAnimationProxyData;
class UItem;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class UOCLComponent;
class UOwNavModifierComponent;
class USceneComponent;
class UTrait;
class UTravelTriggerComponent;

UCLASS(Blueprintable)
class ARKANSAS_API ADoor : public AInteractableActor, public IMapFloorTrackedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLOpenStart OnOCLOpenStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLOpenEnd OnOCLOpenEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLCloseStart OnOCLCloseStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLCloseEnd OnOCLCloseEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLOpenAttemptedLocked OnOCLOpenAttemptedLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLOpenAttemptedLocked OnOCLOpenAttemptedBarred;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLLocked OnOCLLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLUnlocked OnOCLUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLBarred OnOCLBarred;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLUnbarred OnOCLUnbarred;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLSealed OnOCLSealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLUnsealed OnOCLUnsealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLLockpickStart OnOCLLockpickStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLLockpickSuccess OnOCLLockpickSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLLockpickInterrupted OnOCLLockpickInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOCLLockpickLoopStop OnOCLLockpickLoopStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExplosiveInteractionBegin OnExplosiveInteractionBegin;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOCLComponent* OCLComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOwNavModifierComponent* NavModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTravelTriggerComponent* TravelTriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DoorCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsArmored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExplosivesOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> PowerfulExplosiveItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresFrontFacingObservation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* SprayColorMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrimaryColorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecondaryColorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SprayPrimaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SpraySecondaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* MaterialParameterCollectionInstance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DoorOpenSequenceBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DoorCloseSequenceBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DoorOpenFromJammedSequenceBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DoorJammedByPlayerSequenceBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayerJamsDoorMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* InteractionContactPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnPlayerInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompanionInteraction OnCompanionInteraction;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorFpvAnimComplete OnDoorFpvAnimComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimationProxyData> LockpickAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimationProxyData> ExplodeAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimationProxyData> TraitUnjamAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimationProxyData> SkillUnjamAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTrait> UnjamTrait;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLockedDoorNavArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterNavPathUseYAxisForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDelayNavUpdate;
    
    ADoor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDoorPositions(float Offset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TriggersTravel() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool PassesRPGRequirements(uint8 InteractionIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOCLStateChange(AActor* Initiator, EOCLState PreviousState, EOCLState CurrentState);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractBeginAnim(AActor* AnimatingActor);
    
    UFUNCTION(BlueprintCallable)
    void OnFPVAnimationComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotifyEvent(EAnimNotify AnimNotifyEvent, FName OptionalSocket);
    
    UFUNCTION(BlueprintCallable)
    FRPGInteractableRequirements GetRPGRequirements(EInteractionType InteractionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeDoorMeshes(bool bExploded, bool bInvert);
    
public:
    UFUNCTION(BlueprintCallable)
    void AiOpensJammedDoor(AIndianaAiCharacter* AICharacter);
    

    // Fix for true pure virtual functions not being implemented
};

