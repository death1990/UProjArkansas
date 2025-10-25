#include "OwMusicSettings.h"

UOwMusicSettings::UOwMusicSettings() {
    this->bUseAdvancedThreatLevel = false;
    this->bSeparateCombatThreatLevels = false;
    this->InCombatThreatLevel = 1.00f;
    this->ExplorationCalm = 0.00f;
    this->ExplorationTense = 0.00f;
    this->bCalculateIndividualCharacterThreatLevel = false;
    this->bUseMSPerPoint = false;
    this->ThreatValueMSPerPointIncrease = 500.00f;
    this->ThreatValueMSPerPointDecrease = 1000.00f;
    this->bNonCombatUseMSPerPoint = false;
    this->NonCombatThreatValueMSPerPointIncrease = 500.00f;
    this->NonCombatThreatValueMSPerPointDecrease = 1000.00f;
    this->NonCombatThreatValueRTPC = NULL;
    this->NonCombatThreatValueRtpcInterpolationEnterMS = 0.00f;
    this->NonCombatThreatValueRtpcInterpolationExitMS = 0.00f;
}


