#include "PlayerHealthComponent.h"

UPlayerHealthComponent::UPlayerHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LethalHunger = 1000.00f;
    this->LethalThirst = 1000.00f;
    this->LethalExhaustion = 1000.00f;
    this->MaxFastTravelHunger = 975.00f;
    this->MaxFastTravelThirst = 975.00f;
    this->MaxFastTravelExhaustion = 975.00f;
    this->ZyraniumMeterRTPC = NULL;
    this->DownedItemConsumable = NULL;
    this->PlayerVeryLowHealthThreshold = 0.25f;
    this->PlayerLowHealthThreshold = 0.50f;
    this->PlayerHalfHealthThreshold = 0.30f;
    this->bSpeedUpHealthRegen = false;
    this->bSlowDownHealthRegen = false;
    this->bForceInCombatHealingRegen = false;
    this->PlayerLowHealthSound = NULL;
    this->PlayerLowHealthStopSound = NULL;
    this->PlayerRegenStartedSound = NULL;
    this->PlayerRegenStoppedSound = NULL;
    this->PlayerDiedSound = NULL;
    this->GameOverActiveStateValue = NULL;
    this->GameOverInactiveStateValue = NULL;
    this->Material = NULL;
    this->ScreenFxBlendTime = 0.00f;
}

void UPlayerHealthComponent::SurvivalModeUpdated(bool bSurvivalMode) {
}

void UPlayerHealthComponent::PseudoGod() {
}

void UPlayerHealthComponent::PlayerWaitInitiated(float SecondsPassed, ERestType RestType) {
}

void UPlayerHealthComponent::God() {
}

float UPlayerHealthComponent::GetThirst() const {
    return 0.0f;
}

float UPlayerHealthComponent::GetMaxFastTravelThirst() const {
    return 0.0f;
}

float UPlayerHealthComponent::GetMaxFastTravelHunger() const {
    return 0.0f;
}

float UPlayerHealthComponent::GetMaxFastTravelExhaustion() const {
    return 0.0f;
}

float UPlayerHealthComponent::GetLethalThirst() const {
    return 0.0f;
}

float UPlayerHealthComponent::GetLethalHunger() const {
    return 0.0f;
}

float UPlayerHealthComponent::GetLethalExhaustion() const {
    return 0.0f;
}

float UPlayerHealthComponent::GetHunger() const {
    return 0.0f;
}

float UPlayerHealthComponent::GetExhaustion() const {
    return 0.0f;
}

void UPlayerHealthComponent::FastTravelInitiated(const UPointOfInterestData* TravelData, float TimePassed) {
}

void UPlayerHealthComponent::AdjustThirst(float Amount, bool bFromFastTravel) {
}

void UPlayerHealthComponent::AdjustSurvivalStats(float HungerGained, float ThirstGained, float ExhaustionGained, bool bFromFastTravel, bool bForced) {
}

void UPlayerHealthComponent::AdjustHunger(float Amount, bool bFromFastTravel) {
}

void UPlayerHealthComponent::AdjustExhaustion(float Amount, bool bFromFastTravel) {
}

void UPlayerHealthComponent::AddThirst(float Thirst) {
}

void UPlayerHealthComponent::AddHunger(float Hunger) {
}

void UPlayerHealthComponent::AddExhaustion(float Exhaustion) {
}


