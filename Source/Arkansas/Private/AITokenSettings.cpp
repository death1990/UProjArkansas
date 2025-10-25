#include "AITokenSettings.h"

FAITokenSettings::FAITokenSettings() {
    this->IndividualCooldown = 0.00f;
    this->SharedCooldown = 0.00f;
    this->TargetTypes[0] = EAITokenTargetType::None;
    this->TargetTypes[1] = EAITokenTargetType::None;
    this->TargetTypes[2] = EAITokenTargetType::None;
    this->TargetTypes[3] = EAITokenTargetType::None;
    this->TargetTypes[4] = EAITokenTargetType::None;
    this->TargetTypes[5] = EAITokenTargetType::None;
    this->TargetTypes[6] = EAITokenTargetType::None;
    this->TargetTypes[7] = EAITokenTargetType::None;
    this->TargetTypes[8] = EAITokenTargetType::None;
}

