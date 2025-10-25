#include "SaveGameStoreComponent.h"

USaveGameStoreComponent::USaveGameStoreComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool USaveGameStoreComponent::SetIntValue(FName Key, int32 Value) {
    return false;
}

bool USaveGameStoreComponent::SetFloatValue(FName Key, float Value) {
    return false;
}

bool USaveGameStoreComponent::SetBoolValue(FName Key, bool bValue) {
    return false;
}

void USaveGameStoreComponent::LogValueStores() const {
}

int32 USaveGameStoreComponent::GetIntValue(FName Key) const {
    return 0;
}

void USaveGameStoreComponent::GetIntStoreKeys(TArray<FName>& OutKeys) const {
}

float USaveGameStoreComponent::GetFloatValue(FName Key) const {
    return 0.0f;
}

void USaveGameStoreComponent::GetFloatStoreKeys(TArray<FName>& OutKeys) const {
}

bool USaveGameStoreComponent::GetBoolValue(FName Key) const {
    return false;
}

void USaveGameStoreComponent::GetBoolStoreKeys(TArray<FName>& OutKeys) const {
}


