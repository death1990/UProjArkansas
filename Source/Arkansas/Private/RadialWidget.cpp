#include "RadialWidget.h"

URadialWidget::URadialWidget() {
    this->OrientatorAngleOffset = 0.00f;
    this->Diameter = 900.00f;
    this->TimeDilation = 0.10f;
    this->bDilateTime = true;
    this->bUseCursor = false;
    this->AutoCorrectionThreshold = 0.98f;
    this->AutoCorrectionScalar = 0.15f;
    this->bUseAutoCorrection = true;
    this->InputOuterRadius = 20.00f;
    this->InputInnerRatio = 0.65f;
    this->MouseInputScalar = 2.00f;
    this->GamepadDeadZone = 0.20f;
    this->GamepadInputScalar = 2.00f;
    this->bUseGamepadInertia = false;
    this->SelectedSectionAlpha = 1.00f;
    this->SubPartitionSections = 0;
    this->SubPartitionStart = 0;
    this->SectionsMax = 12;
    this->SelectedSectionIndex = -1;
    this->DynamicMaterial = NULL;
    this->ContentOverlay = NULL;
    this->ContentSlot = NULL;
    this->MaterialImage = NULL;
    this->ConfirmSectionSound = NULL;
    this->SelectSectionSound = NULL;
    this->OrientatorDegrees = 0.00f;
}

void URadialWidget::OnSectionConfirmedAux() {
}

void URadialWidget::OnSectionConfirmed() {
}

void URadialWidget::OnRadialScroll(float Value) {
}


