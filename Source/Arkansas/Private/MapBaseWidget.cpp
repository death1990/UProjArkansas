#include "MapBaseWidget.h"

UMapBaseWidget::UMapBaseWidget() {
    this->CurrentImageTexture = NULL;
    this->GamepadSelector = NULL;
    this->ImageScaleBox = NULL;
    this->OuterCanvas = NULL;
    this->ContentCanvas = NULL;
    this->ImageCanvas = NULL;
    this->MapImage = NULL;
    this->LoadingImageBlocker = NULL;
    this->LoadingThrobber = NULL;
    this->MapSizeBox = NULL;
    this->InputLabelGroup = NULL;
    this->InputLabelVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->bBindToggleInactiveQuestsInBaseClass = true;
    this->StartingZoomLevel = 1.00f;
    this->MaxZoomLevel = 3.00f;
    this->MinZoomLevel = 1.00f;
    this->GamepadZoomSpeed = 0.03f;
    this->MouseZoomSpeed = 0.04f;
    this->GamepadZoomSensitivity = 0.20f;
    this->GamepadSelectorMagnetismDelay = 1.00f;
    this->GamepadMagnetizeExponent = 2.00f;
    this->GamepadMagnetizeTime = 0.35f;
    this->GamepadMagnetismNearbyDistance = 50.00f;
    this->PriorityOrderZ = 50;
    this->GamepadPanMinMovementMultiplier = 0.60f;
    this->GamepadPanSensitivity = 4.50f;
}


