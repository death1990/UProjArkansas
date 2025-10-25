#include "WeaponSelectWidget.h"

UWeaponSelectWidget::UWeaponSelectWidget() {
    this->bStopOnlyGameInput = true;
    this->RadialOffset = 1.50f;
    this->MaxSlots = 12;
    this->bGadgetSectionConventionClockwise = true;
    this->bWeaponSectionConventionClockwise = true;
    this->bThrowableSectionConventionClockwise = false;
    this->bShouldShowEmptyCategory = true;
    this->bShouldHighlightCategory = true;
    this->bAddRadialDeadzones = true;
    this->DeadzoneHalfAngle = 9.00f;
    this->bIgnoreDeadzoneSelection = true;
    this->SectionOffsetScalars.AddDefaulted(5);
    this->InitialBackgroundOffset = 135.00f;
    this->InitialSectionOffsets.AddDefaulted(5);
    this->SectionMaxSize = 4;
    this->SectionMaxAngle = 120;
    this->Radial = NULL;
    this->BackgroundSectionPanel = NULL;
    this->HighlightWeapons = NULL;
    this->HighlightGadgets = NULL;
    this->HighlightThrowables = NULL;
    this->ActiveHighlightAnimation = NULL;
}

void UWeaponSelectWidget::SectionSelected(int32 Index) {
}

void UWeaponSelectWidget::OnInputBack() {
}





bool UWeaponSelectWidget::IsSectionValid(int32 Index) const {
    return false;
}


