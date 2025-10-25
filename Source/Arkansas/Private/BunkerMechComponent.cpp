#include "BunkerMechComponent.h"

UBunkerMechComponent::UBunkerMechComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDriverKilled = false;
    this->bHasCoverRemaining = true;
    this->bLeftCoverDestroyed = false;
    this->bRightCoverDestroyed = false;
    this->AnchorDelay = 0.50f;
    this->bHasAnchor = false;
    this->AnchorRadius = 1600.00f;
    this->DeployAnimMontage = NULL;
    this->DeployLeftAnimMontage = NULL;
    this->DeployRightAnimMontage = NULL;
    this->UndeployAnimMontage = NULL;
    this->DeployCoverAnticTime = 1.00f;
    this->DeployCoverSustainTime = 3.00f;
    this->DeployCoverRetractTime = 1.00f;
    this->bNavBlockersVisible = false;
}

void UBunkerMechComponent::OnDriverKilled() {
}




bool UBunkerMechComponent::IsPathClear(FVector Start, FVector End) {
    return false;
}

bool UBunkerMechComponent::IsInAir() {
    return false;
}

bool UBunkerMechComponent::IsDeployingOrUndeploying() {
    return false;
}

bool UBunkerMechComponent::CanStartAction() {
    return false;
}


