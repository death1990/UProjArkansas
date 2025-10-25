#include "HeadAndBodyTrackingComponent.h"

UHeadAndBodyTrackingComponent::UHeadAndBodyTrackingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->HeadSpeed = 7.00f;
    this->WeaponAimSpeed = 360.00f;
    this->WeaponAimRotationComfortAngle = 110.00f;
    this->HeadRotationComfortAngle = 80.00f;
    this->ConversationHeadRotationComfortAngle = 120.00f;
    this->BodyRotationComfortAngle = 15.00f;
    this->ConversationActiveBodyRotationComfortAngle = 60.00f;
    this->ConversationMaxReorientAngleRelativeToTarget = 60.00f;
    this->bMaintainPastComfortAngle = false;
    this->bAlignWithBodyDuringParkour = false;
    this->Character = NULL;
    this->PersonalSpaceComponent = NULL;
    this->NoTurn = 0;
    this->MeleeTurn = 0;
}

void UHeadAndBodyTrackingComponent::SetTrackingRegionEnabled(TEnumAsByte<ETrackingRegion> Region, bool bEnableTracking) {
}

void UHeadAndBodyTrackingComponent::OnOccupiedElevatorChange(AElevator* Elevator, bool bOccupied) {
}


