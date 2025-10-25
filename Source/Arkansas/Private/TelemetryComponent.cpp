#include "TelemetryComponent.h"

UTelemetryComponent::UTelemetryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnablePerformanceTelemetry = true;
    this->TelemetryTickRate = 0.50f;
    this->MinMoveTelemetry = 1000.00f;
    this->MaxMoveTelemetry = 15000.00f;
}


