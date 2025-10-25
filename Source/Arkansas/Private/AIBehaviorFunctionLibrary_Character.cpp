#include "AIBehaviorFunctionLibrary_Character.h"

UAIBehaviorFunctionLibrary_Character::UAIBehaviorFunctionLibrary_Character() {
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Character::WaitForRegionRotation(const FAIBehaviorFunctionContext& Context, const TEnumAsByte<ETrackingRegion> Region, const float DeltaDegrees) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Character::ResurrectNPC(const FAIBehaviorFunctionContext& Context, const float ToHealthPercentage) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Character::HandleGoingDownState(const FAIBehaviorFunctionContext& Context) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Character::HandleDyingState(const FAIBehaviorFunctionContext& Context) {
    return EAIBehaviorFunctionResult::Success;
}


