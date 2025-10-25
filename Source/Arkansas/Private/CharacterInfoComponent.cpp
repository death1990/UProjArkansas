#include "CharacterInfoComponent.h"
#include "Templates/SubclassOf.h"

UCharacterInfoComponent::UCharacterInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CreatureXPType = ECreatureXPType::Normal;
    this->DifficultyTier = ESkillDifficultyTier::One;
    this->bAddToScriptManager = true;
    this->FlavorTextAsset = NULL;
    this->MinLevel = 1;
    this->MaxLevel = 0;
    this->LevelOffset = 0;
    this->InherentSkillValues[0] = 0;
    this->InherentSkillValues[1] = 0;
    this->InherentSkillValues[2] = 0;
    this->InherentSkillValues[3] = 0;
    this->InherentSkillValues[4] = 0;
    this->InherentSkillValues[5] = 0;
    this->InherentSkillValues[6] = 0;
    this->InherentSkillValues[7] = 0;
    this->InherentSkillValues[8] = 0;
    this->InherentSkillValues[9] = 0;
    this->InherentSkillValues[10] = 0;
    this->InherentSkillValues[11] = 0;
    this->InherentSkillValues[12] = 0;
    this->InherentSkillValues[13] = 0;
    this->InherentSkillValues[14] = 0;
    this->InherentSkillValues[15] = 0;
    this->InherentSkillValues[16] = 0;
    this->InherentSkillValues[17] = 0;
    this->InherentSkillValues[18] = 0;
    this->InherentSkillValues[19] = 0;
    this->InherentSkillValues[20] = 0;
    this->InherentSkillValues[21] = 0;
    this->InherentSkillValues[22] = 0;
    this->InherentSkillValues[23] = 0;
    this->PerkTree = NULL;
    this->LevelsPerPerk = 2;
    this->ThreatValue = 1.00f;
    this->CharacterOwner = NULL;
    this->StatComponent = NULL;
    this->CompanionComponent = NULL;
    this->CompanionManagerComponent = NULL;
    this->EquipmentComponent = NULL;
    this->TeamComponent = NULL;
    this->HealthComponent = NULL;
    this->ArmorComponent = NULL;
    this->SpeakerInfoComponent = NULL;
}

void UCharacterInfoComponent::UnlockPerksWithRandomLevels_Debug() {
}

void UCharacterInfoComponent::SetLevel(int32 NewLevel) {
}

void UCharacterInfoComponent::RemovePerkFromActor(AIndianaCharacter* Character, const TSubclassOf<UPerk> Perk) {
}

void UCharacterInfoComponent::PerkRemove(const FString& PerkName) {
}

void UCharacterInfoComponent::PerkPurchase(const FString& PerkName) {
}

void UCharacterInfoComponent::PerkPointsAdd(int32 Value) {
}

void UCharacterInfoComponent::OnWeaponEndUnequip(UEquipmentComponent* InEquipmentComponent, UWeapon* Weapon) {
}

void UCharacterInfoComponent::OnWeaponEndEquip(UEquipmentComponent* InEquipmentComponent, UWeapon* Weapon) {
}

void UCharacterInfoComponent::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}

bool UCharacterInfoComponent::IsALeader() const {
    return false;
}

bool UCharacterInfoComponent::IsABoss() const {
    return false;
}

bool UCharacterInfoComponent::HasPerk(TSoftClassPtr<UPerk> Perk, bool bWithTransaction) const {
    return false;
}

void UCharacterInfoComponent::GiveTraitToActor(AIndianaCharacter* Character, const TSubclassOf<UTrait> Trait) {
}

void UCharacterInfoComponent::GivePerkToActor(AIndianaCharacter* Character, const TSubclassOf<UPerk> Perk) {
}

float UCharacterInfoComponent::GetThreatValue() const {
    return 0.0f;
}

int32 UCharacterInfoComponent::GetLevelScaledByWorld() const {
    return 0;
}

int32 UCharacterInfoComponent::GetLevelScaledAtLocation(const FVector& Location) const {
    return 0;
}

int32 UCharacterInfoComponent::GetLevel() const {
    return 0;
}

ECreatureXPType UCharacterInfoComponent::GetCreatureXPType() const {
    return ECreatureXPType::Invalid;
}

void UCharacterInfoComponent::AddTraitDebug(const FString& TraitName) {
}


