#include "AchievementDataAsset.h"

UAchievementDataAsset::UAchievementDataAsset() {
    this->EventListener = NULL;
    this->EventListenerPS5Override = NULL;
    this->Count = 0;
    this->CountPS5Override = 0;
    this->AchievementID = 0;
    this->Accumulative = true;
}


