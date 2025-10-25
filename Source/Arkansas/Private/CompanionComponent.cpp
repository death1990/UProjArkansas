#include "CompanionComponent.h"
#include "Templates/SubclassOf.h"

UCompanionComponent::UCompanionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CompanionPortrait = NULL;
    this->bAlwaysMatchWeaponsAndArmorToCharacterLevel = false;
    this->CalledShot = NULL;
    this->CompanionAbilityClass = NULL;
    this->CompanionAbility = NULL;
    this->CompanionUpgradeData = NULL;
    this->SkillCheckPercentToPlayer = 0.20f;
    this->LevelsPerSkillIncrease = 1;
    this->SkillIncreaseAmount = 2;
    this->CompanionFactionRelationshipData = NULL;
    this->OutOfPartySpell = NULL;
}

void UCompanionComponent::UpdateCompanionState(ESpecialObsidianID SpecialObsidianID) {
}

void UCompanionComponent::SetCompanionMoving(const bool bInMoving) {
}

void UCompanionComponent::OnPlayerExitedAcknowledgeZone(AActor* ZoneOwner) {
}

void UCompanionComponent::OnPlayerEnteredAcknowledgeZone(AActor* ZoneOwner) {
}

void UCompanionComponent::OnOccupiedElevatorStop(UEnvironmentInteractionComponent* EnvironmentComponent, AElevator* Elevator) {
}

void UCompanionComponent::OnOccupiedElevatorMove(UEnvironmentInteractionComponent* EnvironmentComponent, AElevator* Elevator) {
}

void UCompanionComponent::OnNavigationPathUpdated() {
}

void UCompanionComponent::OnCombatStateChange(AIndianaCharacter* InCharacter, bool bIsInCombat, bool bRestoring) {
}

void UCompanionComponent::K2_SetCanBeStealthed(const bool bEnable) {
}

bool UCompanionComponent::IsInOrNearCrouchArea() const {
    return false;
}

int32 UCompanionComponent::GetCompanionCommandMaxChargeCount_Implementation(ECompanionCommand Command) const {
    return 0;
}

float UCompanionComponent::GetCombatAbilityCommandCooldownTime_Implementation() const {
    return 0.0f;
}

float UCompanionComponent::GetCombatAbilityCommandCooldownDrainTime_Implementation() const {
    return 0.0f;
}

TSubclassOf<UAIGroupBehavior_CompanionCombatAbilityCommandBase> UCompanionComponent::GetCombatAbilityCommandBehaviorClass_Implementation() const {
    return NULL;
}

void UCompanionComponent::ApplyCompanionModUpgrade(UItemMod* ItemMod) {
}


