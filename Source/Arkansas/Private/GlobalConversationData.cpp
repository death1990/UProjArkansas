#include "GlobalConversationData.h"

UGlobalConversationData::UGlobalConversationData() {
    this->TerminalPresentationMode = NULL;
    this->PercentageNpcMoveTowardsListener = 0.70f;
    this->PlayerMovementInterpolationType = EInterpolationType::EaseInOut;
    this->PlayerMovementInterpolationExponent = 3.00f;
    this->PlayerMovementInterpolationSteps = 10;
    this->CompanionStageTeleportDistanceScalar = 4.00f;
    this->CompanionStageTeleportAngle = 130.00f;
    this->QuickTurnTriggerAngleThreshold = 150.00f;
    this->QuickTurnInitialFacingAngle = 90.00f;
    this->DesiredResponseNodeCount = 6;
    this->MaxSpeakerDistance = 5000.00f;
    this->LightRigMaxDrawDistance = 750;
    this->LightRigMinDistanceForMaxLight = 250;
    this->PlayerMarkAlignmentSpeedCmPerSecond = 200.00f;
    this->PlayerMarkAlignmentMaxMovementTime = 0.50f;
    this->PlayerTerminalMarkAlignmentSpeedCmPerSecond = 50.00f;
    this->PlayerTerminalMarkAlignmentMaxMovementTime = 1.00f;
    this->ResumeableConditionsQueryFrequency = 1.00f;
    this->ResumeTimerExpirationDuration = 30.00f;
}


