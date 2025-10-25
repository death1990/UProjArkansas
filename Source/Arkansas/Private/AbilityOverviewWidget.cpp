#include "AbilityOverviewWidget.h"

UAbilityOverviewWidget::UAbilityOverviewWidget() {
    this->GamepadPanelOverlay = NULL;
    this->MainInvalidationBox = NULL;
    this->CommandOneLightImage = NULL;
    this->CommandTwoLightImage = NULL;
    this->CommandThreeLightImage = NULL;
    this->CommandFourLightImage = NULL;
    this->CommandOneButtonImage = NULL;
    this->CommandTwoButtonImage = NULL;
    this->CommandThreeButtonImage = NULL;
    this->CommandFourButtonImage = NULL;
    this->CommandOneButtonPress = NULL;
    this->CommandTwoButtonPress = NULL;
    this->CommandThreeButtonPress = NULL;
    this->CommandFourButtonPress = NULL;
    this->CompanionCommandOne = NULL;
    this->CompanionCommandTwo = NULL;
    this->CompanionCommandThree = NULL;
    this->CompanionCommandFour = NULL;
    this->CompanionInputLabelOne = NULL;
    this->CompanionInputLabelTwo = NULL;
    this->CompanionInputLabelThree = NULL;
    this->CompanionInputLabelFour = NULL;
    this->CompanionInputWidgetOne = NULL;
    this->CompanionInputWidgetTwo = NULL;
    this->CompanionInputWidgetThree = NULL;
    this->CompanionInputWidgetFour = NULL;
    this->AbilityIcon = NULL;
    this->ButtonUnavailableTexture = NULL;
    this->ButtonAvailableTexture = NULL;
    this->ButtonPressedTexture = NULL;
    this->bShowGamepad = false;
    this->bShowPC = false;
    this->FadeInThreshold = 0.75f;
}

void UAbilityOverviewWidget::OnCompanionAbilityBindingModeChanged(int32 ModeIn) {
}

void UAbilityOverviewWidget::OnAbilityUsed(UAbilityOverviewDetailWidget* Widget, EAbilityPosition AbilityPosition) {
}

void UAbilityOverviewWidget::OnAbilityCooldownTriggered(EAbilityPosition AbilityPosition) {
}


void UAbilityOverviewWidget::OnAbilityCooldownEnded(EAbilityPosition AbilityPosition) {
}


