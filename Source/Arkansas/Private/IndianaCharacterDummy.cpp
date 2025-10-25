#include "IndianaCharacterDummy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "AppearanceComponent.h"
#include "EquipmentComponent.h"

AIndianaCharacterDummy::AIndianaCharacterDummy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreWeaponIdles = false;
    this->bAllowUnderKillPlane = false;
    this->bMakeTickableWhenPaused = false;
    this->GroundOffsetComponent = CreateDefaultSubobject<USceneComponent>(TEXT("GroundOffsetComponent"));
    this->EquipmentComponent = CreateDefaultSubobject<UEquipmentComponent>(TEXT("EquipmentComponent"));
    this->AppearanceComponent = CreateDefaultSubobject<UAppearanceComponent>(TEXT("AppearanceComponent"));
    this->PendingWeapon = NULL;
    this->GroundOffsetComponent->SetupAttachment(RootComponent);
}

void AIndianaCharacterDummy::OnWeaponEndEquip(UEquipmentComponent* InEquipmentComponent, UWeapon* Weapon) {
}

void AIndianaCharacterDummy::CopyFromCharacter(AIndianaCharacter* Character) {
}


