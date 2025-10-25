#include "IndianaWorldSettings.h"

AIndianaWorldSettings::AIndianaWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapInformation = NULL;
    this->PresenceData = NULL;
    this->bIsInterior = true;
    this->bCanSungaze = true;
    this->bIsTown = false;
    this->bIsPlayerHomeBase = false;
    this->bForcePlayerWeaponHolster = false;
    this->SkillDifficultyTier = ESkillDifficultyTier::One;
    this->bSimulateTimeOfDayPatrol = true;
    this->bWallaEnabled = false;
    this->bCharacterCreation = false;
    this->PreloadAssets = NULL;
    this->bFlawsAndPerksDisabled = false;
    this->MapRadioData = NULL;
    this->AreaMusicData = NULL;
    this->bAllowRadioToPlay = true;
}

bool AIndianaWorldSettings::ReevaluateDataLayerConditionByLabel(const UObject* WorldContextObject, FName DataLayer) {
    return false;
}

bool AIndianaWorldSettings::ReevaluateDataLayerConditionByAsset(const UObject* WorldContextObject, const UDataLayerAsset* DataLayer) {
    return false;
}

bool AIndianaWorldSettings::ReevaluateDataLayerCondition(const UObject* WorldContextObject, const FActorDataLayer& DataLayer) {
    return false;
}

void AIndianaWorldSettings::ReevaluateAllDataLayerConditions(const UObject* WorldContextObject) {
}

bool AIndianaWorldSettings::K2_IsCurrentMap(const UMapInformation* MapInfo, EBoolResult& OutResult) {
    return false;
}


