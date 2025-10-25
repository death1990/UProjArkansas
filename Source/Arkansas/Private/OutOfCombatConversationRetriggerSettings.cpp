#include "OutOfCombatConversationRetriggerSettings.h"

FOutOfCombatConversationRetriggerSettings::FOutOfCombatConversationRetriggerSettings() {
    this->bAllowRetrigger = false;
    this->RetriggerCooldown = 0.00f;
    this->bOnlyRetriggerOnRadiusReentry = false;
}

