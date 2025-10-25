#include "FogOfWarSubsystem.h"

UFogOfWarSubsystem::UFogOfWarSubsystem() {
    this->CurrentMapInformation = NULL;
    this->FogOfWarAreaModifyMaterialInstance = NULL;
}

void UFogOfWarSubsystem::SetAllActorsFogOfWarRevealEnabled(bool bEnabled) {
}

void UFogOfWarSubsystem::SetActorFogOfWarRevealEnabled(TScriptInterface<IMapFloorTrackedActor> Actor, bool bEnabled) {
}

bool UFogOfWarSubsystem::RevealFogOfWarForFloor(FName floor) {
    return false;
}

bool UFogOfWarSubsystem::ResetFogOfWarForFloor(FName floor) {
    return false;
}

bool UFogOfWarSubsystem::RemoveActorForFogOfWarReveal(TScriptInterface<IMapFloorTrackedActor> Actor) {
    return false;
}

bool UFogOfWarSubsystem::ModifyFogOfWarForVolume(bool bReveal, bool bUseSphereBounds, AFogOfWarVolume* Volume) {
    return false;
}

void UFogOfWarSubsystem::DumpFogOfWarTextureData() const {
}

void UFogOfWarSubsystem::AddActorForFogOfWarReveal(TScriptInterface<IMapFloorTrackedActor> Actor, const FActorFogOfWarSettings& ActorSettings, bool bStartEnabled) {
}


