#include "DeviceType.h"

FDeviceType::FDeviceType() {
    this->DynamicEmitterVolume = NULL;
    this->ListenerActorOverride = NULL;
    this->ListenerActor = NULL;
    this->ListenerAuxBus = NULL;
    this->bEnabled = false;
    this->BroadcastRouter = NULL;
}

