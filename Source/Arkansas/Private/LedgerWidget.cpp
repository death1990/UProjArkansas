#include "LedgerWidget.h"

ULedgerWidget::ULedgerWidget() {
    this->bStopOnlyGameInput = true;
    this->NavigationBar = NULL;
    this->PageScrollBox = NULL;
    this->ScrollingWidgetGroup = NULL;
    this->PlayerStats = NULL;
    this->Character = NULL;
    this->Journal = NULL;
    this->LedgerMap = NULL;
    this->Inventory = NULL;
    this->CompanionCondensedWidget = NULL;
    this->CharacterStageFront = NULL;
    this->CharacterStageRear = NULL;
    this->CharacterRenderInventoryComp = NULL;
    this->CharacterRenderChar = NULL;
    this->ItemRender = NULL;
}

void ULedgerWidget::UpdateCompanionTabs(ESpecialObsidianID SpecialObsidianID) {
}



