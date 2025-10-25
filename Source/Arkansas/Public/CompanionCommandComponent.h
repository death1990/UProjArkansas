#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CompanionCommandMoveToLocation.h"
#include "CompanionCommandTimeDilationEndedDelegate.h"
#include "CompanionCommandTimeDilationStartedDelegate.h"
#include "ComponentDebugInterface.h"
#include "ECompanionCommand.h"
#include "ESpecialObsidianID.h"
#include "MoveToQueryInfo.h"
#include "OnCompanionCommandFailedDelegate.h"
#include "OnCompanionCommandSuccessDelegate.h"
#include "SuppressableInterface.h"
#include "CompanionCommandComponent.generated.h"

class AIndianaCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCompanionCommandComponent : public UActorComponent, public ISuppressableInterface, public IComponentDebugInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CalledShotTargetDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireTargetUsePlayerTargetingBox;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionCommandTimeDilationStarted CompanionCommandTimeDilationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionCommandTimeDilationEnded CompanionCommandTimeDilationEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CalledShotAvailableReminderFrequency;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompanionCommandSuccess OnCompanionCommandSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompanionCommandFailed OnCompanionCommandFail;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToQueryImpactRayPullback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToQueryProjectionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveToQueryInfo InitialMoveToQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveToQueryInfo SecondaryMoveToQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveToQueryInfo ProjectedMoveToQuery;
    
public:
    UCompanionCommandComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCooldownPercent(ECompanionCommand Command, int32 CompanionIndex, float CooldownPercent);
    
    UFUNCTION(BlueprintCallable)
    FVector PerformMoveToQuery(const FVector& TargetLocation, const FMoveToQueryInfo& MoveToQuery);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCompanionRegistrationUnlocked(ESpecialObsidianID SpecialObsidianID);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChange(AIndianaCharacter* InCharacter, bool bInCombat, bool bRestoring);
    
public:
    UFUNCTION(BlueprintCallable)
    void CompanionCommandMoveTo();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void CompanionCommandInfinite();
    
public:
    UFUNCTION(BlueprintCallable)
    FCompanionCommandMoveToLocation CalculateMoveToLocation();
    

    // Fix for true pure virtual functions not being implemented
};

