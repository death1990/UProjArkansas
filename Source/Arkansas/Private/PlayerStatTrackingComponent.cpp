#include "PlayerStatTrackingComponent.h"
#include "Templates/SubclassOf.h"

UPlayerStatTrackingComponent::UPlayerStatTrackingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DecisionOptionsDataAsset = NULL;
}

void UPlayerStatTrackingComponent::OnVendorScreenOpened(const UVendorComponent* VendorComponent) {
}

void UPlayerStatTrackingComponent::OnSkillUpdated(UCharacterInfoComponent* CharacterInfoComponent, ESkill Skill, int32 NewValue) {
}

void UPlayerStatTrackingComponent::OnRevive(AIndianaCharacter* Player, bool bDebug) {
}

void UPlayerStatTrackingComponent::OnPlayerTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UPlayerStatTrackingComponent::OnPlayerDealDamage(const FCauseDamageInfo& CauseDamageInfo) {
}

void UPlayerStatTrackingComponent::OnPerkAdded(UCharacterInfoComponent* CharacterInfoComponent, const TSubclassOf<UPerk>& Perk) {
}

void UPlayerStatTrackingComponent::OnMedKitUsed(UEquipmentComponent* EquipmentComponent, bool bDoubleDose) {
}

void UPlayerStatTrackingComponent::OnItemCrafted(const UCraftingRecipe* Recipe) {
}

void UPlayerStatTrackingComponent::OnCompanionKill(AActor* Killer, AActor* Victim, const FCauseDamageInfo& CauseDamageInfo) {
}

void UPlayerStatTrackingComponent::OnAutoDocUsed() {
}

void UPlayerStatTrackingComponent::DumpPlayerStats() {
}


