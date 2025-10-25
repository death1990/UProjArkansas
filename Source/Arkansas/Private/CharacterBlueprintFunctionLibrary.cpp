#include "CharacterBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UCharacterBlueprintFunctionLibrary::UCharacterBlueprintFunctionLibrary() {
}

bool UCharacterBlueprintFunctionLibrary::UnequipThrowable(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::IsWeaponWithTagEquipped(AIndianaCharacter* Character, const FGameplayTag Tag) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::IsUnlimiedRangedWeaponEquipped(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::IsRangedWeaponEquipped(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::IsPotentialPlayerScreenSpaceTarget(AIndianaPlayerCharacter* Character, AActor* Target, const bool bRequireLOS, const ESSTargetType TargetType) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::IsPlayerScreenSpaceTarget(AIndianaPlayerCharacter* Character, AActor* Target, const ESSTargetType TargetType, float MinActiveTime) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::IsMeleeWeaponEquipped(AIndianaCharacter* Character, const bool bIncludeUnwarmedWeapon) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::IsLimitedRangedWeaponEquipped(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::IsCalledShotWeaponEquipped(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasWeaponWithTagInEquipment(AIndianaCharacter* Character, const FGameplayTag Tag) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasUnlimitedRangedWeaponInEquipment(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasThrowableVarietyInInventory(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasThrowableInInventory(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasRangedWeaponWithTagInEquipment(AIndianaCharacter* Character, const FGameplayTag Tag) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasRangedWeaponInEquipment(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasOffensiveThrowableInInventory(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasMultipleSlottedGadgets(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasMeleeWeaponWithTagInEquipment(AIndianaCharacter* Character, const FGameplayTag Tag) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasMeleeWeaponInEquipment(AIndianaCharacter* Character, const bool bIncludeUnwarmedWeapon) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasLimitedRangedWeaponInEquipment(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasEquippedThrowable(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasDefensiveThrowableInInventory(AIndianaCharacter* Character) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::HasCalledShotWeaponInEquipment(AIndianaCharacter* Character) {
    return false;
}

UWeapon* UCharacterBlueprintFunctionLibrary::GetWeaponWithTagFromEquipment(AIndianaCharacter* Character, const FGameplayTag Tag) {
    return NULL;
}

int32 UCharacterBlueprintFunctionLibrary::GetWeaponWithTagEquipmentSlotIndex(AIndianaCharacter* Character, const FGameplayTag Tag) {
    return 0;
}

bool UCharacterBlueprintFunctionLibrary::GetWeaponReactsToState(UWeapon* Weapon, const EWeaponState WeaponState) {
    return false;
}

int32 UCharacterBlueprintFunctionLibrary::GetWeaponInstanceEquipmentSlotIndex(AIndianaCharacter* Character, const UWeapon* Weapon) {
    return 0;
}

UWeapon* UCharacterBlueprintFunctionLibrary::GetUnlimitedRangedWeaponFromEquipment(AIndianaCharacter* Character) {
    return NULL;
}

int32 UCharacterBlueprintFunctionLibrary::GetUnlimitedRangedWeaponEquipmentSlotIndex(AIndianaCharacter* Character) {
    return 0;
}

TEnumAsByte<ETeamAttitude::Type> UCharacterBlueprintFunctionLibrary::GetTeamAttitudeTowards(AIndianaCharacter* Character, AActor* Other) {
    return ETeamAttitude::Friendly;
}

EStateOfBeing UCharacterBlueprintFunctionLibrary::GetStateOfBeing(AIndianaCharacter* Character) {
    return EStateOfBeing::Healthy;
}

UWeapon* UCharacterBlueprintFunctionLibrary::GetRangedWeaponWithTagFromEquipment(AIndianaCharacter* Character, const FGameplayTag Tag) {
    return NULL;
}

int32 UCharacterBlueprintFunctionLibrary::GetRangedWeaponWithTagEquipmentSlotIndex(AIndianaCharacter* Character, const FGameplayTag Tag) {
    return 0;
}

UWeapon* UCharacterBlueprintFunctionLibrary::GetRangedWeaponFromEquipment(AIndianaCharacter* Character) {
    return NULL;
}

int32 UCharacterBlueprintFunctionLibrary::GetRangedWeaponEquipmentSlotIndex(AIndianaCharacter* Character) {
    return 0;
}

FVector2D UCharacterBlueprintFunctionLibrary::GetPlayerScreenSpaceTargetScreenPosition(bool& bIsValid, AIndianaPlayerCharacter* Character, AActor* Target, const ESSTargetType TargetType) {
    return FVector2D{};
}

float UCharacterBlueprintFunctionLibrary::GetPlayerScreenSpaceTargetScore(bool& bIsValid, AIndianaPlayerCharacter* Character, AActor* Target, const ESSTargetType TargetType) {
    return 0.0f;
}

float UCharacterBlueprintFunctionLibrary::GetPlayerScreenSpaceTargetNormalizedDistance(bool& bIsValid, AIndianaPlayerCharacter* Character, AActor* Target, const ESSTargetType TargetType) {
    return 0.0f;
}

float UCharacterBlueprintFunctionLibrary::GetPlayerScreenSpaceTargetLineOfSightTime(bool& bIsValid, AIndianaPlayerCharacter* Character, AActor* Target, const ESSTargetType TargetType) {
    return 0.0f;
}

bool UCharacterBlueprintFunctionLibrary::GetPlayerScreenSpaceTargetLineOfSight(bool& bIsValid, AIndianaPlayerCharacter* Character, AActor* Target, const ESSTargetType TargetType) {
    return false;
}

float UCharacterBlueprintFunctionLibrary::GetPlayerScreenSpaceTargetDistance(bool& bIsValid, AIndianaPlayerCharacter* Character, AActor* Target, const ESSTargetType TargetType) {
    return 0.0f;
}

float UCharacterBlueprintFunctionLibrary::GetPlayerScreenSpaceTargetActiveTime(bool& bIsValid, AIndianaPlayerCharacter* Character, const ESSTargetType TargetType) {
    return 0.0f;
}

AActor* UCharacterBlueprintFunctionLibrary::GetPlayerScreenSpaceTarget(AIndianaPlayerCharacter* Character, const ESSTargetType TargetType) {
    return NULL;
}

UWeapon* UCharacterBlueprintFunctionLibrary::GetMeleeWeaponWithTagFromEquipment(AIndianaCharacter* Character, const FGameplayTag Tag) {
    return NULL;
}

int32 UCharacterBlueprintFunctionLibrary::GetMeleeWeaponWithTagEquipmentSlotIndex(AIndianaCharacter* Character, const FGameplayTag Tag) {
    return 0;
}

UWeapon* UCharacterBlueprintFunctionLibrary::GetMeleeWeaponFromEquipment(AIndianaCharacter* Character, const bool bIncludeUnwarmedWeapon) {
    return NULL;
}

int32 UCharacterBlueprintFunctionLibrary::GetMeleeWeaponEquipmentSlotIndex(AIndianaCharacter* Character, const bool bIncludeUnwarmedWeapon) {
    return 0;
}

UWeapon* UCharacterBlueprintFunctionLibrary::GetLimitedRangedWeaponFromEquipment(AIndianaCharacter* Character) {
    return NULL;
}

int32 UCharacterBlueprintFunctionLibrary::GetLimitedRangedWeaponEquipmentSlotIndex(AIndianaCharacter* Character) {
    return 0;
}

int32 UCharacterBlueprintFunctionLibrary::GetEquippedWeaponIndex(AIndianaCharacter* Character) {
    return 0;
}

UWeapon* UCharacterBlueprintFunctionLibrary::GetEquippedWeapon(AIndianaCharacter* Character) {
    return NULL;
}

int32 UCharacterBlueprintFunctionLibrary::GetEquippedThrowableIndex(AIndianaCharacter* Character) {
    return 0;
}

UThrowable* UCharacterBlueprintFunctionLibrary::GetEquippedThrowable(AIndianaCharacter* Character) {
    return NULL;
}

float UCharacterBlueprintFunctionLibrary::GetCharacterScreenHorizontalRelativeness(AIndianaCharacter* Character, bool& bOnScreen) {
    return 0.0f;
}

float UCharacterBlueprintFunctionLibrary::GetCharacterScreenCenterness(AIndianaCharacter* Character, bool& bOnScreen) {
    return 0.0f;
}

UWeapon* UCharacterBlueprintFunctionLibrary::GetCalledShotWeaponFromEquipment(AIndianaCharacter* Character) {
    return NULL;
}

int32 UCharacterBlueprintFunctionLibrary::GetCalledShotWeaponEquipmentSlotIndex(AIndianaCharacter* Character) {
    return 0;
}

bool UCharacterBlueprintFunctionLibrary::EquipThrowableByIndex(AIndianaCharacter* Character, const int32 Index) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::EquipThrowableByClass(AIndianaCharacter* Character, const TSubclassOf<UThrowable> Class) {
    return false;
}

bool UCharacterBlueprintFunctionLibrary::EquipThrowable(AIndianaCharacter* Character) {
    return false;
}


