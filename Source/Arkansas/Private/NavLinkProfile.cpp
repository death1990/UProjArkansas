#include "NavLinkProfile.h"

UNavLinkProfile::UNavLinkProfile() {
    this->bIsDefaultOptIn = false;
    this->Parkour_LeftRightDistanceMax = 0.00f;
    this->Parkour_DistanceMax = 0.00f;
    this->Parkour_SurfaceValidationWidth = 0.00f;
    this->Parkour_SurfaceValidationHeight = 0.00f;
    this->Parkour_EdgeValidationDepth = 0.00f;
    this->bParkour_DoubleJump_Enabled = false;
    this->Parkour_DoubleJump_LeftRightDistanceMax = 0.00f;
    this->Parkour_DoubleJump_DistanceMax = 0.00f;
    this->DropDown_EdgeHeightMax = 0.00f;
    this->DropDown_ForwardDistanceMin = 0.00f;
    this->DropDown_ForwardDistanceMax = 0.00f;
    this->DropDown_FallDistanceMin = 0.00f;
    this->DropDown_FallDistanceMax = 0.00f;
    this->JumpAcross_JumpHeightMax = 0.00f;
    this->JumpAcross_GapDistanceMin = 1.00f;
    this->JumpAcross_GapDistanceMax = 0.00f;
    this->JumpAcross_LandHeightOffsetMin = 0.00f;
    this->JumpAcross_LandHeightOffsetMax = 0.00f;
    this->JumpAcross_GapFloorOffsetMin = 0.00f;
    this->bJumpAcross_DoubleJump_Enabled = false;
    this->JumpAcross_DoubleJump_JumpHeightMax = 0.00f;
    this->JumpAcross_DoubleJump_GapDistanceMin = 0.00f;
    this->JumpAcross_DoubleJump_GapDistanceMax = 0.00f;
    this->JumpAcross_DoubleJump_LandHeightOffsetMin = 0.00f;
    this->JumpAcross_DoubleJump_LandHeightOffsetMax = 0.00f;
    this->JumpAcross_DoubleJump_GapFloorOffsetMin = 0.00f;
    this->Ladder_CanUse = false;
}


