#include "EquipmentModWidget.h"

UEquipmentModWidget::UEquipmentModWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DefaultNameColor = EIndianaUIColorType::IndianaYellow;
    this->PreviewColor = EIndianaUIColorType::IndianaGreen;
    this->DefaultDescriptionColor = EIndianaUIColorType::IndianaNotQuiteYellow;
    this->PreviewDescriptionColor = EIndianaUIColorType::IndianaGreen;
    this->IsPreviewImage = NULL;
    this->RemoveX = NULL;
    this->IconImage = NULL;
    this->NameTextBlock = NULL;
    this->DescriptionTextBlock = NULL;
}


