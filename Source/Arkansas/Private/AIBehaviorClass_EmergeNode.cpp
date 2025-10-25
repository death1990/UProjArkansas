#include "AIBehaviorClass_EmergeNode.h"

UAIBehaviorClass_EmergeNode::UAIBehaviorClass_EmergeNode() {
    this->PlayingMontage = NULL;
    this->RetryMaxTime = 3.00f;
}

void UAIBehaviorClass_EmergeNode::ReadyToStartDeferredResult(bool Result) {
}

void UAIBehaviorClass_EmergeNode::PlayAnimMontageDeferredResult(bool bResult) {
}

void UAIBehaviorClass_EmergeNode::OnSplineMovementEnded(AActor* Actor) {
}

void UAIBehaviorClass_EmergeNode::OnEquipWeapon(bool Result) {
}

void UAIBehaviorClass_EmergeNode::OnBumpEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UAIBehaviorClass_EmergeNode::OnBumpBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UAIBehaviorClass_EmergeNode::NavigateToExitResult(bool bResult) {
}


