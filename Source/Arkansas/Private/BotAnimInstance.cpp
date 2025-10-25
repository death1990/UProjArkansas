#include "BotAnimInstance.h"

UBotAnimInstance::UBotAnimInstance() {
    this->ForwardBlendSpace = NULL;
    this->LeftBlendSpace = NULL;
    this->RightBlendSpace = NULL;
    this->BackBlendSpace = NULL;
    this->ForwardBlendMin = -50.00f;
    this->ForwardBlendMax = 50.00f;
    this->LeftBlendMin = -140.00f;
    this->LeftBlendMax = -40.00f;
    this->RightBlendMin = 40.00f;
    this->RightBlendMax = 140.00f;
    this->BackwardBlendMin = -50.00f;
    this->BackwardBlendMax = 50.00f;
    this->bLocoForwardActive = true;
    this->bLocoLeftActive = false;
    this->bLocoRightActive = false;
    this->bLocoBackwardActive = false;
    this->CombatDirection = 0.00f;
    this->BackwardAngle = 0.00f;
    this->RightAngle = 0.00f;
    this->LeftAngle = 0.00f;
    this->CombatWalkForwardSpeed = 1.00f;
    this->CombatWalkForwardDistance = 62.50f;
    this->CombatWalkBackwardSpeed = 1.00f;
    this->CombatWalkBackwardDistance = 62.50f;
    this->CombatWalkLeftSpeed = 1.00f;
    this->CombatWalkLeftDistance = 62.50f;
    this->CombatWalkRightSpeed = 1.00f;
    this->CombatWalkRightDistance = 62.50f;
    this->bCoverDeployed = false;
    this->bAnyWeaponDeploy = false;
    this->bMachinegunDeploy = false;
    this->bCannonDeploy = false;
    this->StandAlpha = 1.00f;
    this->CoverAlpha = 0.00f;
    this->AnyWeaponDeployAlpha = 0.00f;
    this->MachinegunDeployAlpha = 0.00f;
    this->CannonDeployAlpha = 0.00f;
    this->CannonYaw = 0.00f;
    this->CannonPitch = 0.00f;
    this->PilotHeadYaw = 0.00f;
    this->PilotHeadPitch = 0.00f;
    this->DirectionResetDelay = 1.00f;
}


