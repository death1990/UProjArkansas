#include "CompanionEntryWidget.h"

UCompanionEntryWidget::UCompanionEntryWidget() {
    this->DeselectedOverlayParameter = TEXT("DeselectedOverlay");
    this->CharacterRender = NULL;
    this->CharacterButton = NULL;
    this->LockedCharacterImage = NULL;
    this->NameTextBlock = NULL;
    this->CustomizeButton = NULL;
    this->DetailsVerticalBox = NULL;
    this->SelectedDisplay = NULL;
    this->DesiredCompanionID = ESpecialObsidianID::None;
}


