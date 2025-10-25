#include "RadialBackgroundSectionWidget.h"

URadialBackgroundSectionWidget::URadialBackgroundSectionWidget() {
    this->SectionImage = NULL;
    this->OutlineImage = NULL;
    this->SectionCountName = TEXT("NumberOfSegments");
    this->SectionTextureName = TEXT("Icon");
    this->CounterRotationName = TEXT("Icon Rotation Angle (0-1) (S)");
    this->CounterRotationOffset = 180.00f;
    this->TEMP_RotationCorrection = 0.00f;
    this->bInvertOverOneEighty = true;
    this->bCounterRotateIcons = true;
    this->Select = NULL;
    this->Deselect = NULL;
    this->Highlight = NULL;
    this->Unhighlight = NULL;
    this->DematerializerCorrosionTexture = NULL;
    this->DefaultTextColor = EIndianaUIColorType::IndianaYellow;
    this->DepletedTextColor = EIndianaUIColorType::IndianaRed;
    this->ItemInfoContainer = NULL;
    this->DamageTypeImage = NULL;
    this->ItemCountTextBlock = NULL;
    this->AmmoTypeImage = NULL;
    this->SectionMaterial = NULL;
}

void URadialBackgroundSectionWidget::SetIsHighlighted(bool bIsEquipped) {
}

void URadialBackgroundSectionWidget::SetIsEquipped(bool bIsEquipped) {
}





