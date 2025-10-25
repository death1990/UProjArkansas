#include "AIBehaviorClassInitParams.h"

FAIBehaviorClassInitParams::FAIBehaviorClassInitParams() {
    this->Character = NULL;
    this->Controller = NULL;
    this->BehaviorTree = NULL;
    this->bAllowLoad = false;
    this->bDoSyncLoad = false;
}

