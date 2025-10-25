#include "IndianaGlobals.h"

UIndianaGlobals::UIndianaGlobals() {
    this->GlobalWeaponData = NULL;
    this->GlobalMeleeData = NULL;
    this->GlobalArmorData = NULL;
    this->GlobalTeamData = NULL;
    this->GlobalFactionData = NULL;
    this->GlobalTraitData = NULL;
    this->GlobalPerkData = NULL;
    this->GlobalFlawData = NULL;
    this->GlobalCompanionData = NULL;
    this->GlobalAIData = NULL;
    this->GlobalUIData = NULL;
    this->GlobalItemData = NULL;
    this->GlobalCharacterCreationData = NULL;
    this->GlobalRedirectorMap = NULL;
    this->GlobalIndianaStatData = NULL;
    this->GlobalAchievementData = NULL;
    this->GlobalKeybindData = NULL;
    this->IndianaSkillsClass = NULL;
    this->CharacterDeathData = NULL;
    this->GlobalAudioData = NULL;
    this->DefaultCurrencyItem = NULL;
    this->ShipTravelData = NULL;
    this->GlobalConversationData = NULL;
    this->GlobalStatusEffectData = NULL;
    this->GlobalFogOfWarData = NULL;
    this->TotalCollectibleCards = 52;
    this->AllCardsCollectedSpell = NULL;
    this->MostCardsCollectedThreshold = 39;
    this->MostCardsCollectedSpell = NULL;
    this->MaxCharacterLevel = 30;
    this->MinLevelVariance = -1;
    this->MaxLevelVariance = 1;
    this->MaxItemLevel = 30;
    this->CertainDeathFallDistance = 10000.00f;
    this->HungerPerSecond = 0.05f;
    this->ThirstPerSecond = 0.15f;
    this->ExhaustionPerSecond = 0.08f;
    this->RestGainedPerSecondSleeping = 1.15f;
    this->bRequireCompanionsForRevive = true;
    this->bRequireDownedItemForRevive = true;
    this->bUseAIRevival = false;
    this->ShipTravelTimeSystemMapWidth = 24.00f;
    this->ShipTravelTimeMin = 2.00f;
    this->AutosaveLoadAnySaveDelaySeconds = 60.00f;
    this->AutosaveFrequencySeconds = 180.00f;
    this->ThrowableDesiredArcHeight = 0.50f;
    this->bThrowablePreferHighArc = false;
    this->ThrowableTraceSampleCount = 5;
    this->ThrowableSocket = TEXT("ThrowablePoint");
    this->OwFormulas = NULL;
    this->OwFormulasClass = NULL;
}

UTutorialManager* UIndianaGlobals::GetTutorialManager() {
    return NULL;
}

UGlobalAIData* UIndianaGlobals::GetAIGlobals() {
    return NULL;
}


