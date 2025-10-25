#include "HoverDroneAudioComponent.h"

UHoverDroneAudioComponent::UHoverDroneAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Health = NULL;
    this->Velocity = NULL;
    this->Height = NULL;
    this->AzimuthCurveRTPC = NULL;
    this->ElevationCurveRTPC = NULL;
    this->SpeedRTPC = NULL;
    this->HoverAkAudioEvent = NULL;
    this->HoverAkAudioStopEvent = NULL;
    this->HoverMoveSpeed = 0.10f;
}


