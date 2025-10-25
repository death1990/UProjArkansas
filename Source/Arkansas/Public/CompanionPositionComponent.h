#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CompanionEQSRequest.h"
#include "CompanionTeleportSettings.h"
#include "ConversationCompanionConfig.h"
#include "CompanionPositionComponent.generated.h"

class AActor;
class AElevator;
class AIndianaAiCharacter;
class UCompanionPositionData;
class UEnvironmentInteractionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCompanionPositionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCompanionPositionData*> CompanionPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompanionMovementDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerLineOfSightRepositionSightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerLineOfSightRepositionCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionTeleportSettings InteriorTeleportSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionTeleportSettings ExteriorTeleportSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionEQSRequest DefaultEQS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionEQSRequest StealthEQS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionEQSRequest ElevatorEQS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionEQSRequest CrouchAreaEQS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostFallMovementDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConversationCompanionConfig> ConversationConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionEQSRequest MoveToEQS;
    
public:
    UCompanionPositionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void RequestForceTeleportCompanions(const FVector& Position1, const FVector& Position2);
    
    UFUNCTION(BlueprintCallable)
    static void RequestForceTeleportCompanion(const AIndianaAiCharacter* InCompanion, const FVector& position);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStealthChange(bool bStealthed);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerConversationChange(AActor* Participant, const FGuid& NavigatorID, bool bEntered);
    
    UFUNCTION(BlueprintCallable)
    void OnOccupiedElevatorStop(UEnvironmentInteractionComponent* InEnvironmentComponent, AElevator* Elevator);
    
    UFUNCTION(BlueprintCallable)
    void OnOccupiedElevatorMove(UEnvironmentInteractionComponent* InEnvironmentComponent, AElevator* Elevator);
    
    UFUNCTION(BlueprintCallable)
    void OnOccupiedElevatorChange(AElevator* Elevator, bool bOccupied);
    
};

