#include "AIBehaviorFunctionLibrary_Navigation.h"
#include "AINavigationMonitor.h"
#include "Templates/SubclassOf.h"

UAIBehaviorFunctionLibrary_Navigation::UAIBehaviorFunctionLibrary_Navigation() {
    this->AINavigationMonitor = CreateDefaultSubobject<UAINavigationMonitor>(TEXT("AINavigationMonitor"));
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Navigation::VaultToLocation(const FAIBehaviorFunctionContext& Context, const FVector LandingLocation, const FVector LedgeFrontLocation, const FVector LedgeBackLocation) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Navigation::TeleportToLocation(const FAIBehaviorFunctionContext& Context, const FVector Location, const bool bSetYawFacing, const double YawFacingDegrees, bool bSnapToGround) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Navigation::MoveToLocationOnBlackboard(const FAIBehaviorFunctionContext& Context, const FBlackboardKeySelector BlackboardLocation, const float AcceptanceRadius, const bool bStopOnOverlap, const bool bStopRequiresLOS, const bool bAllowPartialPath, int32 NavigationFlags, int32 ForceAllowedNavigationActionsMask, int32 ForceDisallowedNavigationActionsMask, const TSubclassOf<UNavigationQueryFilter> FilterClass, const float PathBlockedTimeout) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Navigation::MoveToLocation(const FAIBehaviorFunctionContext& Context, const FVector Location, const float AcceptanceRadius, const bool bStopOnOverlap, const bool bStopRequiresLOS, const bool bAllowPartialPath, int32 NavigationFlags, int32 ForceAllowedNavigationActionsMask, int32 ForceDisallowedNavigationActionsMask, const TSubclassOf<UNavigationQueryFilter> FilterClass, const float PathBlockedTimeout) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Navigation::MoveToEQSResult(const FAIBehaviorFunctionContext& Context, const FEQSSelector EQSSelector, const float AcceptanceRadius, const bool bStopOnOverlap, const bool bStopRequiresLOS, const bool bAllowPartialPath, int32 NavigationFlags, int32 ForceAllowedNavigationActionsMask, int32 ForceDisallowedNavigationActionsMask, const TSubclassOf<UNavigationQueryFilter> FilterClass, const float PathBlockedTimeout) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Navigation::MoveToActorOnBlackboard(const FAIBehaviorFunctionContext& Context, const FBlackboardKeySelector BlackboardActor, const float AcceptanceRadius, const bool bStopOnOverlap, const bool bStopRequiresLOS, const bool bAllowPartialPath, int32 NavigationFlags, int32 ForceAllowedNavigationActionsMask, int32 ForceDisallowedNavigationActionsMask, const TSubclassOf<UNavigationQueryFilter> FilterClass, const float PathBlockedTimeout) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Navigation::MoveToActor(const FAIBehaviorFunctionContext& Context, const AActor* Actor, const float AcceptanceRadius, const bool bStopOnOverlap, const bool bStopRequiresLOS, const bool bAllowPartialPath, int32 NavigationFlags, int32 ForceAllowedNavigationActionsMask, int32 ForceDisallowedNavigationActionsMask, const TSubclassOf<UNavigationQueryFilter> FilterClass, const float PathBlockedTimeout) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Navigation::MantleToLocation(const FAIBehaviorFunctionContext& Context, const FVector LandingLocation, const FVector LedgeLocation) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Navigation::JumpAcrossToLocation(const FAIBehaviorFunctionContext& Context, const FVector LandingLocation, const float JumpHeight) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Navigation::FindPathAsync(const FAIBehaviorFunctionContext& Context, const FVector& StartLocation, const FVector& EndLocation, bool bAllowPartialPath, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Navigation::DropDownToLocation(const FAIBehaviorFunctionContext& Context, const FVector LandingLocation, const FVector LedgeLocation) {
    return EAIBehaviorFunctionResult::Success;
}


