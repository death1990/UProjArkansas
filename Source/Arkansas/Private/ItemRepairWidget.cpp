#include "ItemRepairWidget.h"

UItemRepairWidget::UItemRepairWidget() {
    this->bStopOnlyGameInput = true;
    this->ActorRender = NULL;
    this->RepairDetailsSizeBox = NULL;
    this->PartRequiredTextBlock = NULL;
    this->PartCountTextBlock = NULL;
    this->NameTextBlock = NULL;
    this->DescriptionTextBlock = NULL;
    this->ConditionButton = NULL;
    this->RepairButton = NULL;
    this->BackButton = NULL;
    this->HiddenButton = NULL;
    this->InputLabelGroup = NULL;
    this->FlavorTextWidget = NULL;
}

void UItemRepairWidget::OnRepair() {
}

void UItemRepairWidget::OnInputBack() {
}


