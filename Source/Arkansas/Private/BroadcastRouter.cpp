#include "BroadcastRouter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent

ABroadcastRouter::ABroadcastRouter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldSaveGameState = true;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->IDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

void ABroadcastRouter::RemoveActorFromDevice(AActor* Actor, ADynamicEmitterVolume* Volume) {
}

TArray<bool> ABroadcastRouter::GetSavedDevicesEnabled() {
    return TArray<bool>();
}

bool ABroadcastRouter::GetEnabledByDeviceIndex(int32 Index) {
    return false;
}

void ABroadcastRouter::EnableBroadcastRouterByDeviceIndex(bool bEnabled, int32 Index) {
}

void ABroadcastRouter::EnableBroadcastRouter() {
}

void ABroadcastRouter::DisableBroadcastRouter() {
}

void ABroadcastRouter::AddActorToDevice(AActor* Actor, ADynamicEmitterVolume* Volume) {
}


