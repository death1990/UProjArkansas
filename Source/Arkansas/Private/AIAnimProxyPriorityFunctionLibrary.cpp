#include "AIAnimProxyPriorityFunctionLibrary.h"

UAIAnimProxyPriorityFunctionLibrary::UAIAnimProxyPriorityFunctionLibrary() {
}

FPriorityNodeHandle UAIAnimProxyPriorityFunctionLibrary::UseAnimationProxy(AIndianaAiController* Controller, EPriorityNodeValue Priority, AAnimationProxyActor* AnimationProxyActor, const FGameplayTag SlotKey, const bool bReserve, const bool bStartInWaiting, const bool bTeleport, const bool bTeleportOnMoveFail, const bool bInterruptOnMove, const bool bInfiniteDuration, const bool bAutoDeactivate, const EAIMovementState MovementState, FAIAnimProxyStartedScriptDelegate AnimProxyStarted, FAIAnimProxyFinishedScriptDelegate AnimProxyFinished, FAIAnimProxyPostMoveScriptDelegate AnimProxyPostMove, int32 NavigationFlags) {
    return FPriorityNodeHandle{};
}

FPriorityNodeHandle UAIAnimProxyPriorityFunctionLibrary::DisableAnimationProxyUse(AIndianaAiController* Controller, EPriorityNodeValue Priority) {
    return FPriorityNodeHandle{};
}


