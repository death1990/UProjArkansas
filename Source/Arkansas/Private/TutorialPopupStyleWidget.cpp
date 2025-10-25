#include "TutorialPopupStyleWidget.h"

UTutorialPopupStyleWidget::UTutorialPopupStyleWidget() {
    this->DisplayType = ETutorialDisplayType::Invalid;
    this->ContentVerticalPadding = 15.00f;
    this->BackingMaterialSize = 932;
    this->BackingTopSize = 101;
    this->bShowPermanentWarning = false;
    this->bDelayAcceptValidity = false;
    this->AcceptDelayTimer = 3.00f;
    this->FadeInRate = 1.00f;
    this->FadeOutRate = 1.00f;
    this->ContentVerticalBox = NULL;
    this->TutorialTagBox = NULL;
    this->PreFlavorTextBlock = NULL;
    this->NameTextBlock = NULL;
    this->DescriptionTextBlock = NULL;
    this->WarningTextBlock = NULL;
    this->SubheaderTextBlock = NULL;
    this->SubDescriptionTextBlock = NULL;
    this->ColoredOverlay = NULL;
    this->ColoredImage = NULL;
    this->MascotImage = NULL;
    this->OptionalBindings = NULL;
    this->OptionalBindingOne = NULL;
    this->OptionalBindingTwo = NULL;
    this->OptionSpacer = NULL;
    this->PrimaryInputLabel = NULL;
    this->SecondaryInputLabel = NULL;
    this->MovieSizeBox = NULL;
    this->MoviePlayer = NULL;
    this->MascotImageFadeIn = NULL;
    this->FadeIn = NULL;
    this->FadeOut = NULL;
    this->PairedMovie = NULL;
}



