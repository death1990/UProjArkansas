#include "OEICineActorComponent.h"

UOEICineActorComponent::UOEICineActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetSettings = NULL;
    this->bOverrideTargetComponent = false;
    this->bOverrideTargetSocket = false;
    this->bOverrideTargetOffset = false;
    this->bOverrideBoxTransform = false;
    this->bOverrideDistanceSmoothingInterval = false;
    this->bOverrideAngleSmoothingInterval = false;
    this->bOverrideMaxSmoothingWeight = false;
    this->MaxSmoothingWeight = 1.00f;
    this->bOverrideHorizontalAlignment = false;
    this->bOverrideVerticalAlignment = false;
}


