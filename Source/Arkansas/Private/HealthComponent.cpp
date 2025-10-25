#include "HealthComponent.h"
#include "Templates/SubclassOf.h"

UHealthComponent::UHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->MaxHealth = 100.00f;
    this->bStartWithMissingHealth = false;
    this->StartingHealthPercent = 0.10f;
    this->MaxRadToxicity = 100.00f;
    this->bDeathAtMaxRadToxicity = false;
    this->MaxRadToxicitySpell = NULL;
    this->bResetAtMaxRadToxicity = false;
    this->PostMaxRadToxicityTime = 5.00f;
    this->bCanRegenRadToxicity = false;
    this->BaseRegenRadToxicityRate = 0.00f;
    this->bAllowCombatRadToxicityRegen = false;
    this->BaseInCombatRegenRadToxicityRate = 0.00f;
    this->RegenRadToxicityDelay = 0.00f;
    this->bAllowCombatHealthRegen = false;
    this->RegenRate = 0.00f;
    this->CombatRegenRate = 0.00f;
    this->CombatRegenDelay = 0.00f;
    this->bCanBeDowned = false;
    this->PercentMaxHealthOnResurrect = 0.25f;
    this->bGodMode = false;
    this->bPseudoGodMode = false;
    this->bNonPlayerPseudoGod = false;
    this->NonPlayerPseudoGodMinHealthPercentage = 1.00f;
    this->bImmuneToFallDamage = false;
    this->DamageReceivedPercentageRTPC = NULL;
    this->TempHealthMaxPercent = 0.50f;
    this->TempHealthDecayRate = 10.00f;
    this->bDamagedByPlayer = false;
    this->bKilledByPlayer = false;
}

bool UHealthComponent::TryCureRadToxicity() {
    return false;
}

bool UHealthComponent::TryApplyRadToxicity(float ToxicityIn) {
    return false;
}

void UHealthComponent::SuicideDelay(float Delay) {
}

void UHealthComponent::Suicide(bool bPreventRevival, TSubclassOf<UDeathClass> PreferredDeathClass) {
}

void UHealthComponent::SetTempHealth(float TempHealthAmount, AActor* Instigator) {
}

void UHealthComponent::SetStateOfBeing(EStateOfBeing NewStateOfBeing, bool bRestoredFromSave) {
}

void UHealthComponent::SetShieldHealth(float ShieldHealthAmount, float ShieldHealthMax) {
}

void UHealthComponent::SetRadToxicity(float Toxicity) {
}

void UHealthComponent::SetRadPercent(float Percent) {
}

void UHealthComponent::SetPseudoGod(bool bEnabled) {
}

void UHealthComponent::SetMaxTempHealth(float MaxTempHealth) {
}

void UHealthComponent::SetInvolvedInRevive(bool bInvolvedInReviveIn) {
}

void UHealthComponent::SetHealthPercentNPC(float Percent) {
}

void UHealthComponent::SetHealthPercent_BP(float Percent, AActor* Instigator) {
}

void UHealthComponent::SetHealthPercent(float Percent, AActor* Instigator) {
}

void UHealthComponent::SetHealth(float Health, AActor* Instigator) {
}

void UHealthComponent::SetGod(bool bEnabled) {
}

void UHealthComponent::SetBeingRevived(bool bBeingRevivedIn) {
}

void UHealthComponent::Resurrect(bool bDebug, float HealthPercentOverride) {
}

void UHealthComponent::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}

void UHealthComponent::LevelChanged(UCharacterInfoComponent* InCharacterInfoComponent, int32 Level) {
}

void UHealthComponent::KillNPC(AIndianaAiCharacter* Character, TSubclassOf<UDeathClass> PreferredDeathClass) {
}

bool UHealthComponent::IsReadyForEncounterConditionalQueries() const {
    return false;
}

bool UHealthComponent::IsInstanceDead(AIndianaCharacter* Character, EBoolResult& OutResult) {
    return false;
}

bool UHealthComponent::IsDowned() const {
    return false;
}

void UHealthComponent::HealthFill() {
}

bool UHealthComponent::HasNonPlayerPseudoGod() const {
    return false;
}

float UHealthComponent::GetTimeSinceLastSneakAttacked() const {
    return 0.0f;
}

float UHealthComponent::GetTempHealth() const {
    return 0.0f;
}

EStateOfBeing UHealthComponent::GetStateOfBeing() const {
    return EStateOfBeing::Healthy;
}

float UHealthComponent::GetShieldHealth() const {
    return 0.0f;
}

float UHealthComponent::GetRegenRatePoints() const {
    return 0.0f;
}

float UHealthComponent::GetRegenRate() const {
    return 0.0f;
}

float UHealthComponent::GetRadToxicityRegenRate() const {
    return 0.0f;
}

float UHealthComponent::GetRadToxicity() const {
    return 0.0f;
}

bool UHealthComponent::GetPseudoGod() const {
    return false;
}

float UHealthComponent::GetNormalizedTempHealth() const {
    return 0.0f;
}

float UHealthComponent::GetNormalizedShieldHealth() const {
    return 0.0f;
}

float UHealthComponent::GetNormalizedRadToxicity() {
    return 0.0f;
}

float UHealthComponent::GetNormalizedHealth() {
    return 0.0f;
}

float UHealthComponent::GetNonPlayerPseudoGodMinHealthPercentage() const {
    return 0.0f;
}

float UHealthComponent::GetMaxTempHealth() const {
    return 0.0f;
}

float UHealthComponent::GetMaxShieldHealth() const {
    return 0.0f;
}

float UHealthComponent::GetMaxRadToxicity() const {
    return 0.0f;
}

float UHealthComponent::GetMaxHealth() const {
    return 0.0f;
}

AActor* UHealthComponent::GetLastHitInstigator() const {
    return NULL;
}

bool UHealthComponent::GetInvolvedInRevive() const {
    return false;
}

float UHealthComponent::GetHealthOfBodyPart(FGameplayTag BodyPart) const {
    return 0.0f;
}

float UHealthComponent::GetHealth() const {
    return 0.0f;
}

bool UHealthComponent::GetGodMode() const {
    return false;
}

bool UHealthComponent::GetBeingRevived() const {
    return false;
}

void UHealthComponent::EnableNonPlayerPseudoGodOverride(float InMinHealthPercentage) {
}

void UHealthComponent::DownedComplete(AActor* DownedActor) {
}

void UHealthComponent::DisableNonPlayerPseudoGodOverride() {
}

void UHealthComponent::DeathComplete(AActor* DeadActor) {
}

bool UHealthComponent::CanBeDowned() const {
    return false;
}

void UHealthComponent::AdjustRadToxicity(float Toxicity) {
}


