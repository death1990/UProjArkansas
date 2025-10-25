#include "EnvQueryTest_ProtectFriends.h"

UEnvQueryTest_ProtectFriends::UEnvQueryTest_ProtectFriends() {
    this->bUseNewScore = true;
    this->bDebug = true;
    this->SettleRadius = 100.00f;
    this->SettleScore = 1.00f;
    this->AlreadyDeployedScore = 10.00f;
    this->ProtectRadius = 1000.00f;
    this->ProtectScore = 1.00f;
    this->AwayFromWallScore = 0.50f;
    this->HeadClearanceScore = 0.50f;
}


