#include "PhotoModeHelperComponent.h"

UPhotoModeHelperComponent::UPhotoModeHelperComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhotoModePoseSet = NULL;
}

void UPhotoModeHelperComponent::OnPhotoModePrePause() {
}

void UPhotoModeHelperComponent::OnPhotoModePreEntered(APlayerController* InController) {
}

void UPhotoModeHelperComponent::OnPhotoModeExit() {
}

void UPhotoModeHelperComponent::ForceLOD(int32 ForcedLOD) {
}


