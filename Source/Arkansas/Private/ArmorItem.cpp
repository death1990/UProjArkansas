#include "ArmorItem.h"
#include "AssetCollection.h"

UArmorItem::UArmorItem() {
    this->bCanGenerateLootOnBreakdown = true;
    this->ArmorSlot = EArmorSlot::Invalid;
    this->Tier = EItemTier::One;
    this->ArmorAudioState = NULL;
    this->AssetCollection = CreateDefaultSubobject<UAssetCollection>(TEXT("AssetCollection"));
    this->CurrentArmorAudio = NULL;
    this->bUsesPooling = false;
    this->MaxPooledCharacterSpawnCount = 3;
    this->bForceAttackTarget = false;
    this->SuccessfulSpawnFxSystem = NULL;
    this->FailToSpawnFxSystem = NULL;
    this->VerticalSpawnOffset = 100.00f;
    this->CharacterPool = NULL;
    this->ProjectilePool = NULL;
}

void UArmorItem::SpawnPooledProjectile(FVector SpawnLocation, FRotator SpawnRotator, float MinTime, float MaxTime) {
}

void UArmorItem::SpawnPooledCharacter(UObject* WorldContext, FVector SpawnLocation, FRotator SpawnRotator, AIndianaAiCharacter* ForceAttackTarget) {
}



UArmorAudio* UArmorItem::GetCurrentAudio() const {
    return NULL;
}


