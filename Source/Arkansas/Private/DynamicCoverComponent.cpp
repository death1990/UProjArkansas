#include "DynamicCoverComponent.h"

UDynamicCoverComponent::UDynamicCoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeployDelayTime = 3.00f;
    this->bDeployed = false;
    this->bCoverDisabled = false;
    this->CoverNode = NULL;
    this->ScoreFactor = 5.00f;
}

void UDynamicCoverComponent::Undeploy() {
}

void UDynamicCoverComponent::DisableCover() {
}

void UDynamicCoverComponent::Deploy() {
}


