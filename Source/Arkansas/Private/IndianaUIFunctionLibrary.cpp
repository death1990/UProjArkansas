#include "IndianaUIFunctionLibrary.h"

UIndianaUIFunctionLibrary::UIndianaUIFunctionLibrary() {
}

void UIndianaUIFunctionLibrary::ShowConversationUI() {
}

bool UIndianaUIFunctionLibrary::IsConversationUIHidden() {
    return false;
}

void UIndianaUIFunctionLibrary::HideHudForObject(const UObject* Object, bool bHidden) {
}

void UIndianaUIFunctionLibrary::HideConversationUI(bool bAutoRestoreOnConversationEnd) {
}

EIndianaUIColorType UIndianaUIFunctionLibrary::GetSubtitleTextColorByIndex(int32 Index) {
    return EIndianaUIColorType::Invalid;
}

EIndianaUIColorType UIndianaUIFunctionLibrary::GetSubtitleBGColorByIndex(int32 Index) {
    return EIndianaUIColorType::Invalid;
}

EIndianaUIColorType UIndianaUIFunctionLibrary::GetReticleColorByIndex(int32 Index) {
    return EIndianaUIColorType::Invalid;
}

AIndianaUI* UIndianaUIFunctionLibrary::GetIndianaUI(ECheckBranches& Branches, APlayerController* Controller) {
    return NULL;
}

AIndianaMainMenuUI* UIndianaUIFunctionLibrary::GetIndianaMainMenuUI(ECheckBranches& Branches, APlayerController* Controller) {
    return NULL;
}

FLinearColor UIndianaUIFunctionLibrary::GetColorByType(EIndianaUIColorType Type) {
    return FLinearColor{};
}


