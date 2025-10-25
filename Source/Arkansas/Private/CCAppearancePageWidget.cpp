#include "CCAppearancePageWidget.h"

UCCAppearancePageWidget::UCCAppearancePageWidget() {
    this->GenderArea = NULL;
    this->FaceArea = NULL;
    this->HairArea = NULL;
    this->FeaturesArea = NULL;
    this->GenderSelection = NULL;
    this->FacialCustomization = NULL;
    this->HairCustomization = NULL;
    this->FeaturesCustomization = NULL;
    this->InputLabelGroup = NULL;
    this->CharacterRotationBorder = NULL;
}

void UCCAppearancePageWidget::SetCharacterDefaults() {
}

void UCCAppearancePageWidget::OnProgressToNextPage() {
}

void UCCAppearancePageWidget::OnExpandableAreaChanged(UExpandableAreaBase* AreaBaseWidget, bool bIsExpanded) {
}

FEventReply UCCAppearancePageWidget::OnBorderMouseDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}


