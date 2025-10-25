#include "ArmorVisuals.h"
#include "EventEffectState.h"

UArmorVisuals::UArmorVisuals() {
    this->CharacterMesh = NULL;
    this->NextVisual = NULL;
    this->EventEffectState = CreateDefaultSubobject<UEventEffectState>(TEXT("EventEffectState"));
}



void UArmorVisuals::TriggerCustomEvent(FName EventName) {
}



void UArmorVisuals::StopCustomEvent(FName EventName) {
}


void UArmorVisuals::LeaveCustomState(FName StateName) {
}

bool UArmorVisuals::IsModEquipped(TSoftClassPtr<UArmorModItem> ArmorMod) const {
    return false;
}




void UArmorVisuals::EnterCustomState(FName StateName) {
}


