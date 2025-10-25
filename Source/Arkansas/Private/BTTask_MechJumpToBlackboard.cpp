#include "BTTask_MechJumpToBlackboard.h"

UBTTask_MechJumpToBlackboard::UBTTask_MechJumpToBlackboard() {
    this->NodeName = TEXT("Mech Jump To Blackboard");
    this->bEnable = true;
    this->MinimumDistance = 200.00f;
    this->MaximumDistance = 10000.00f;
    this->AnticipationTime = 4.00f;
    this->JumpTime = 5.00f;
    this->PostJumpTime = 2.00f;
    this->ClearBlackboardValue = false;
}


