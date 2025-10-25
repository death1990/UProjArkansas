#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AIBehaviorFunctionContext.h"
#include "AIBehaviorFunctionLibrary.h"
#include "EAIBehaviorFunctionResult.h"
#include "EQSSelector.h"
#include "Templates/SubclassOf.h"
#include "AIBehaviorFunctionLibrary_Navigation.generated.h"

class AActor;
class UAINavigationMonitor;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class UAIBehaviorFunctionLibrary_Navigation : public UAIBehaviorFunctionLibrary {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAINavigationMonitor* AINavigationMonitor;
    
public:
    UAIBehaviorFunctionLibrary_Navigation();

    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult VaultToLocation(const FAIBehaviorFunctionContext& Context, const FVector LandingLocation, const FVector LedgeFrontLocation, const FVector LedgeBackLocation);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult TeleportToLocation(const FAIBehaviorFunctionContext& Context, const FVector Location, const bool bSetYawFacing, const double YawFacingDegrees, bool bSnapToGround);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult MoveToLocationOnBlackboard(const FAIBehaviorFunctionContext& Context, const FBlackboardKeySelector BlackboardLocation, const float AcceptanceRadius, const bool bStopOnOverlap, const bool bStopRequiresLOS, const bool bAllowPartialPath, int32 NavigationFlags, int32 ForceAllowedNavigationActionsMask, int32 ForceDisallowedNavigationActionsMask, const TSubclassOf<UNavigationQueryFilter> FilterClass, const float PathBlockedTimeout);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult MoveToLocation(const FAIBehaviorFunctionContext& Context, const FVector Location, const float AcceptanceRadius, const bool bStopOnOverlap, const bool bStopRequiresLOS, const bool bAllowPartialPath, int32 NavigationFlags, int32 ForceAllowedNavigationActionsMask, int32 ForceDisallowedNavigationActionsMask, const TSubclassOf<UNavigationQueryFilter> FilterClass, const float PathBlockedTimeout);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult MoveToEQSResult(const FAIBehaviorFunctionContext& Context, const FEQSSelector EQSSelector, const float AcceptanceRadius, const bool bStopOnOverlap, const bool bStopRequiresLOS, const bool bAllowPartialPath, int32 NavigationFlags, int32 ForceAllowedNavigationActionsMask, int32 ForceDisallowedNavigationActionsMask, const TSubclassOf<UNavigationQueryFilter> FilterClass, const float PathBlockedTimeout);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult MoveToActorOnBlackboard(const FAIBehaviorFunctionContext& Context, const FBlackboardKeySelector BlackboardActor, const float AcceptanceRadius, const bool bStopOnOverlap, const bool bStopRequiresLOS, const bool bAllowPartialPath, int32 NavigationFlags, int32 ForceAllowedNavigationActionsMask, int32 ForceDisallowedNavigationActionsMask, const TSubclassOf<UNavigationQueryFilter> FilterClass, const float PathBlockedTimeout);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult MoveToActor(const FAIBehaviorFunctionContext& Context, const AActor* Actor, const float AcceptanceRadius, const bool bStopOnOverlap, const bool bStopRequiresLOS, const bool bAllowPartialPath, int32 NavigationFlags, int32 ForceAllowedNavigationActionsMask, int32 ForceDisallowedNavigationActionsMask, const TSubclassOf<UNavigationQueryFilter> FilterClass, const float PathBlockedTimeout);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult MantleToLocation(const FAIBehaviorFunctionContext& Context, const FVector LandingLocation, const FVector LedgeLocation);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult JumpAcrossToLocation(const FAIBehaviorFunctionContext& Context, const FVector LandingLocation, const float JumpHeight);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult FindPathAsync(const FAIBehaviorFunctionContext& Context, const FVector& StartLocation, const FVector& EndLocation, bool bAllowPartialPath, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult DropDownToLocation(const FAIBehaviorFunctionContext& Context, const FVector LandingLocation, const FVector LedgeLocation);
    
};

