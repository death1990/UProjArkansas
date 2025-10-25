#include "RpgStatComponent.h"

URpgStatComponent::URpgStatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URpgStatComponent::RpgStatShowStat(const FString& Stat) const {
}

void URpgStatComponent::RpgStatShowAll() const {
}

void URpgStatComponent::RpgStatRemoveModifierDebug(const FName& Stat) {
}

void URpgStatComponent::RpgStatAddModifierDebug(const FName& Stat, float Value) {
}

void URpgStatComponent::OnCollectionStatUpdated(const URpgStat* Stat) {
}

float URpgStatComponent::GetValue(const URpgStat* Stat, ERpgStatGroupMask StatGroupMask, float InputValue) const {
    return 0.0f;
}


