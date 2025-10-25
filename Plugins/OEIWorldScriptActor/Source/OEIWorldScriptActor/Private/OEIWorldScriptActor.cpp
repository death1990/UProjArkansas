#include "OEIWorldScriptActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AOEIWorldScriptActor::AOEIWorldScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bInputEnabled = true;
}

void AOEIWorldScriptActor::SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
}

bool AOEIWorldScriptActor::RemoteEvent(FName EventName, bool bAlsoBroadcastToLevelScripts) {
    return false;
}


