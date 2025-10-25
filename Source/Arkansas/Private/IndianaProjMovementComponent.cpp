#include "IndianaProjMovementComponent.h"

UIndianaProjMovementComponent::UIndianaProjMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsPerfectHoming = false;
    this->bBounceOffActors = false;
    this->HomingDotThreshold = -1.00f;
    this->bEnableHybridCollision = false;
    this->GravityScaleCurve = NULL;
    this->BouncinessCurve = NULL;
    this->FrictionCurve = NULL;
    this->bEnableInitialSpeedOverride = false;
    this->MinInitialProjectileSpeed = 2000.00f;
    this->MaxInitialProjectileSpeed = 2000.00f;
    this->bEnableTrajectoryDeviation = false;
    this->NonDeviationDistance = 400.00f;
    this->MinDeviationAngle = 0.00f;
    this->MaxDeviationAngle = 45.00f;
    this->HybridCollisionBounceLimit = 1;
    this->HybridCollisionTracePullbackDistance = 200.00f;
    this->HybridCollisionTraceAdditionalDistance = 200.00f;
}


