#include "Weapon.h"
#include "AssetCollection.h"

UWeapon::UWeapon() {
    this->RecacheStealthDamageMinDistance = 1000.00f;
    this->TPVWeaponMesh = NULL;
    this->TPVAttachMesh = NULL;
    this->FPVWeaponMesh = NULL;
    this->FPVAttachMesh = NULL;
    this->StatComponent = NULL;
    this->CharacterInfoComponent = NULL;
    this->TTDComponent = NULL;
    this->bIgnoreMovementRestrictionPerks = false;
    this->AllowedMovementActions = 0;
    this->ReloadAllowedMovementActions = 0;
    this->ActiveSpeedMoveMult_HipFire = 0.95f;
    this->ActiveSpeedMoveMult_ADS = 0.95f;
    this->ActiveSpeedMoveMult_Sprint = 0.90f;
    this->ActiveSpeedReturnDelay = 0.25f;
    this->ReloadSpeedMoveMult = 0.85f;
    this->ReloadSprintSpeedMoveMult = 0.75f;
    this->ADSBobStrengthMultiplier = 1.00f;
    this->ADSBobPlayRateMultiplier = 1.00f;
    this->PrimaryMode = NULL;
    this->bIgnoreSecondaryModeInput = false;
    this->SecondaryMode = NULL;
    this->SprintToFireTime = 0.20f;
    this->SprintFireHoldTime = 0.33f;
    this->SprintFireRelaxTime = 0.20f;
    this->bIgnoresAmmoConsumption = false;
    this->bIsGadgetWeapon = false;
    this->AmmoPool = NULL;
    this->WeaponModContainer = NULL;
    this->WeaponLocationSpellAsset = NULL;
    this->CameraSwayData = NULL;
    this->EquipTime = 0.50f;
    this->UnequipTime = 0.50f;
    this->HitMarkerVisibilityTime = 0.00f;
    this->KillMarkerVisibilityTime = 0.00f;
    this->bDisableAutoFootsteps = false;
    this->Skill = ESkill::Invalid;
    this->SkillSecondary = ESkill::Melee;
    this->ImpulseOverride = 0.00f;
    this->ArmorPenetration = -1.00f;
    this->RangedWeaponAccuracy = ERangedWeaponAccuracy::Average;
    this->bPreventQuickMelee = false;
    this->bPreventQuickMeleeWhileFullyAimed = false;
    this->AISettings = NULL;
    this->AlternateAISettings = NULL;
    this->AssetCollection = CreateDefaultSubobject<UAssetCollection>(TEXT("AssetCollection"));
    this->DamageTypeStacksPerShot = 1;
    this->MinSkill = 10;
    this->MinAttribute = 1;
    this->WeakSpotMultiplier = -1.00f;
    this->OnHitSpellChance = 0.05f;
    this->bRequireDirectHitForHitSpell = false;
    this->bShouldAdsInterruptFireAnimation = false;
    this->ProjectileWizzRadius = 0.00f;
    this->ProjectileWizzEventOverride = NULL;
    this->bCanGenerateLootOnBreakdown = true;
    this->Tier = EItemTier::One;
    this->MeleeImpactType = EMeleeImpactType::Stab;
    this->GripStyle = EGripStyle::None;
    this->bUseWeaponOutEquipWhenSwitching = false;
    this->TPVCurrentVisuals = NULL;
    this->FPVCurrentVisuals = NULL;
    this->ThirdPersonAnimations = NULL;
    this->FirstPersonAnimations = NULL;
    this->CurrentlyLinkedWeaponAudio = NULL;
    this->bSpawnFromMuzzle = false;
    this->bSpawnFromMuzzlePosOnly = false;
    this->bSpawnFromMuzzlePosOnly2 = false;
    this->bHasIronSights = true;
    this->bSupportsDetachOnNextAnimNotifyAttachHack = false;
}

void UWeapon::StartCalledShotMode(AIndianaCharacter* InCalledShotTarget, EThirdPersonSocket InPreferredCalledShotTargetSocket, float InCalledShotDamageScalar) {
}

void UWeapon::SetSight(const TSoftObjectPtr<USightData>& NewSightData) {
}

void UWeapon::SetSaveGameFloat(const FName& InVariableName, float InValue) {
}




void UWeapon::OnOwnerStoppedSprinting() {
}

void UWeapon::OnOwnerStartedSprinting() {
}


void UWeapon::OnAnimNotifyEvent(EAnimNotify AnimNotifyEvent, FName OptionalSocket) {
}

bool UWeapon::NeedsReload() const {
    return false;
}

bool UWeapon::IsUnequipping() const {
    return false;
}

bool UWeapon::IsTwoHanded() const {
    return false;
}

bool UWeapon::IsReloading() const {
    return false;
}

bool UWeapon::IsRechambering() const {
    return false;
}

bool UWeapon::IsPrimaryTriggerActive() const {
    return false;
}

bool UWeapon::IsOneHanded() const {
    return false;
}

bool UWeapon::IsHolstered() const {
    return false;
}

bool UWeapon::IsFullyAimed() const {
    return false;
}

bool UWeapon::IsEquipping() const {
    return false;
}

bool UWeapon::IsEmptyAndNeedsReload() const {
    return false;
}


UWeaponModContainer* UWeapon::GetWeaponModContainer() const {
    return NULL;
}

USkeletalMeshComponent* UWeapon::GetTPVMeshComponent() const {
    return NULL;
}

URpgStatComponent* UWeapon::GetStats() const {
    return NULL;
}

UWeaponMode* UWeapon::GetSecondaryMode() const {
    return NULL;
}

float UWeapon::GetSaveGameFloat(const FName& InVariableName) {
    return 0.0f;
}

float UWeapon::GetRadialDamageOuterRadius() const {
    return 0.0f;
}

float UWeapon::GetProjectileCollisionRadius() const {
    return 0.0f;
}

UWeaponMode* UWeapon::GetPrioritizedSightMode() const {
    return NULL;
}

UWeaponMode* UWeapon::GetPrimaryMode() const {
    return NULL;
}

AIndianaCharacter* UWeapon::GetOwnerCharacter() const {
    return NULL;
}

bool UWeapon::GetIgnoresAmmoConsumption() const {
    return false;
}

USkeletalMeshComponent* UWeapon::GetFPVMeshComponent() const {
    return NULL;
}

UPrimaryWeaponVisuals* UWeapon::GetCurrentVisuals() const {
    return NULL;
}

UWeaponMode* UWeapon::GetCurrentMode() const {
    return NULL;
}

int32 UWeapon::GetCurrentAmmoCount() const {
    return 0;
}

UCharacterInfoComponent* UWeapon::GetCharacterInfoComponent() const {
    return NULL;
}

float UWeapon::GetBuildUpRatio() const {
    return 0.0f;
}

UAmmoPoolBase* UWeapon::GetAmmoPool() const {
    return NULL;
}

UAISettings_Weapon* UWeapon::GetAISettings(AIndianaAiCharacter* InOwner) const {
    return NULL;
}

USkeletalMeshComponent* UWeapon::GetActiveMeshComponent() const {
    return NULL;
}

void UWeapon::FinishDetachOnNextAnimNotifyAttachHack() {
}

void UWeapon::EndSecondaryTrigger(bool bForceEnd) {
}

bool UWeapon::EndPrimaryTrigger(bool bForceEnd) {
    return false;
}

void UWeapon::EndCalledShotMode() {
}

bool UWeapon::CanQuickMelee() const {
    return false;
}

void UWeapon::BeginSecondaryTrigger() {
}

bool UWeapon::BeginPrimaryTrigger() {
    return false;
}


