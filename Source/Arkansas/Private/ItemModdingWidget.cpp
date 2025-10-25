#include "ItemModdingWidget.h"

UItemModdingWidget::UItemModdingWidget() {
    this->bStopOnlyGameInput = true;
    this->ArmorerPerkIcon = NULL;
    this->ViewerVerticalBox = NULL;
    this->EquipmentTitleVerticalBox = NULL;
    this->EquipmentNameTextBlock = NULL;
    this->PageNameTextBlock = NULL;
    this->CurrentModTitle = NULL;
    this->NewModTitle = NULL;
    this->CurrentModItemName = NULL;
    this->NewModItemName = NULL;
    this->CurrentModItemStats = NULL;
    this->NewModItemStats = NULL;
    this->EquipmentMods = NULL;
    this->ActorRender = NULL;
    this->InputLabelGroup = NULL;
    this->FlavorTextWidget = NULL;
    this->CurrentModSpacer = NULL;
    this->NewModSpacer = NULL;
    this->CurrentModItemNameBox = NULL;
    this->NewModItemNameBox = NULL;
    this->ActionInputOverlay = NULL;
    this->DuplicateModMessage = NULL;
}

void UItemModdingWidget::OnInstallMod() {
}

void UItemModdingWidget::OnInputBack() {
}


