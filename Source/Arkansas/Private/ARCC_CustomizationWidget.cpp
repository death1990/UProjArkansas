#include "ARCC_CustomizationWidget.h"

UARCC_CustomizationWidget::UARCC_CustomizationWidget() {
    this->SpawnedDummy = NULL;
    this->OwnerPlayer = NULL;
    this->HiddenHelmet = NULL;
    this->HiddenArmor = NULL;
    this->CustomizationAssets = NULL;
    this->DefaultAppearanceNavigationIndex = 0;
    this->bApplyActionsToAllPages = true;
    this->bDefaultUsesPreset = true;
    this->bUseNewInputSchemeForSubTabs = false;
    this->AppearanceNavigationBar = NULL;
    this->CustomizationScrollBox = NULL;
    this->AppearanceWidgetSwitcher = NULL;
    this->BodyCustomization = NULL;
    this->FaceCustomization = NULL;
    this->HairCustomization = NULL;
    this->CosmeticCustomization = NULL;
    this->ExportButton = NULL;
    this->SubscreenSizeBox = NULL;
    this->PanelHeightTall = 600;
    this->PanelHeightShort = 200;
    this->AssetsLoadingDisplay = NULL;
}

void UARCC_CustomizationWidget::SetCharacterDefaults() {
}


void UARCC_CustomizationWidget::HandleOnNavigationComplete(UButtonBase* NavigationButton, int32 CurrentIndex, int32 TargetIndex) {
}

void UARCC_CustomizationWidget::DisplayCurrentCharacterData() {
}

void UARCC_CustomizationWidget::ApplyPreset(int32 PresetIndex, bool bOverrideMatchingIndex, UCCCharacterCustomizationBaseWdgt* SpecificCustomizationPageToReset) {
}


