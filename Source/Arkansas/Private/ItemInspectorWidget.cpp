#include "ItemInspectorWidget.h"

UItemInspectorWidget::UItemInspectorWidget() {
    this->bStopOnlyGameInput = true;
    this->ActorRender = NULL;
    this->NameTextBlock = NULL;
    this->DescriptionTextBlock = NULL;
    this->InputLabelGroup = NULL;
    this->ItemStats = NULL;
    this->EquipmentMods = NULL;
    this->HiddenButton = NULL;
    this->BackButton = NULL;
}


void UItemInspectorWidget::OnZoomToggled(bool bFullZoom) {
}

void UItemInspectorWidget::OnInputBack() {
}


