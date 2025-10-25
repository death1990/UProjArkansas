#include "DamageTextContainerWidget.h"

UDamageTextContainerWidget::UDamageTextContainerWidget() {
    this->DamageWidgetClass = NULL;
    this->PlayerTextScalar = 1.00f;
    this->CompanionTextScalar = 0.75f;
    this->bPositionAllEntriesAboveLocation = true;
    this->bCritAddsExclamation = true;
    this->WeakspotFlag = EDamageFlags::None;
    this->CriticalFlag = EDamageFlags::None;
    this->DamageTextCanvas = NULL;
}


