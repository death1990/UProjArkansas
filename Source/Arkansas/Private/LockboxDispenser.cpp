#include "LockboxDispenser.h"

ALockboxDispenser::ALockboxDispenser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpSwitch = NULL;
    this->DownSwitch = NULL;
    this->UpMontage = NULL;
    this->DownMontage = NULL;
    this->OpenLockboxPageIndex = 0;
    this->OpenLockboxChoiceIndex = 0;
}

void ALockboxDispenser::OnSwitchStateChangedUp(AActor* Initiator, int32 StateIndex) {
}

void ALockboxDispenser::OnSwitchStateChangedDown(AActor* Initiator, int32 StateIndex) {
}

void ALockboxDispenser::OnPageChoiceSelected(URPGExaminableData* RPGExaminableData, int32 PageIndex, int32 PageChoiceIndex) {
}

void ALockboxDispenser::OnItemAdded(UInventoryComponent* InventoryComponent, const FItemStack& Item) {
}

void ALockboxDispenser::OnCycleRacksComplete() {
}

void ALockboxDispenser::OnAnimNotifyEventTriggered(FGameplayTag EventTag) {
}

void ALockboxDispenser::CycleRacks(ECycleDirection Direction) {
}


