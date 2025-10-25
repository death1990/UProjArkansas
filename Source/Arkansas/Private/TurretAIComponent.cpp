#include "TurretAIComponent.h"

UTurretAIComponent::UTurretAIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlive = true;
    this->bMasterArm = false;
    this->bCanFire = true;
    this->Target = NULL;
    this->bIgnoreAutoActivate = false;
    this->SearchAngleOffset = 0.00f;
    this->SearchAngleWidth = 120.00f;
    this->ActivationType = ETurretActivationType::Default;
}

void UTurretAIComponent::ResetTurretActivationConditions() {
}

bool UTurretAIComponent::IsTurretOpen() const {
    return false;
}

ETurretActivationType UTurretAIComponent::GetActivationType() const {
    return ETurretActivationType::Default;
}

void UTurretAIComponent::ForceTurretStayOpen() {
}

void UTurretAIComponent::ForceTurretStayClosed() {
}


