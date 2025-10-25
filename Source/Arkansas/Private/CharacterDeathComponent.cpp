#include "CharacterDeathComponent.h"

UCharacterDeathComponent::UCharacterDeathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ReviveMontage = NULL;
    this->bAutoHideWeaponOnDowned = true;
    this->bAutoHideWeaponOnDeath = true;
    this->bApplyDownedMaterials = true;
    this->bApplyDeathMaterials = true;
    this->bAshPileReceiveDecals = true;
    this->DeathClass = NULL;
    this->DeathClassOverride = NULL;
    this->DeathClassData = NULL;
    this->AshPileSpawnTraceDistance = 1000.00f;
    this->DeathImpulse = NULL;
    this->OwnerMesh = NULL;
    this->AppearanceComponent = NULL;
    this->ChosenDownUClass = NULL;
    this->ChosenDeathClass = NULL;
    this->LastFatalDamageDeathClass = NULL;
    this->bAllowRagdoll = true;
}

void UCharacterDeathComponent::StoreDeathImpact(FVector Impulse, FVector Location, FName BoneName) {
}

UMaterialInstanceDynamic* UCharacterDeathComponent::SpawnAshPile(UStaticMesh* Mesh, UMaterialInterface* LootablePileMaterial, FVector& SpawnedPileLocation, FRotator& SpawnedPileRotation) {
    return NULL;
}

void UCharacterDeathComponent::RagdollCharacter(bool bIgnoreDeathMontages) {
}

void UCharacterDeathComponent::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UCharacterDeathComponent::HideProps() {
}

void UCharacterDeathComponent::HideAppearanceMeshes() {
}

void UCharacterDeathComponent::GibCharacter() {
}

void UCharacterDeathComponent::DetachImpactFx() {
}

FVector UCharacterDeathComponent::CalcImpactVector() {
    return FVector{};
}

void UCharacterDeathComponent::BreakBone() {
}

void UCharacterDeathComponent::BreakAllBones() {
}

void UCharacterDeathComponent::AttachGoreCaps() {
}

void UCharacterDeathComponent::AttachAllGoreCaps() {
}


