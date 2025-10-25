#include "KeyBindsMenuWidget.h"

UKeyBindsMenuWidget::UKeyBindsMenuWidget() {
    this->KeyRebindClass = NULL;
    this->SubcategoryClass = NULL;
    this->LStickIndex = 6;
    this->LStickClickIndex = 7;
    this->RStickIndex = 30;
    this->LBumperIndex = 4;
    this->RBumperIndex = 20;
    this->LTriggerIndex = 2;
    this->LTriggerHoldIndex = 3;
    this->RTriggerIndex = 18;
    this->RTriggerHoldIndex = 19;
    this->Background = NULL;
    this->MenuScrollBox = NULL;
    this->GamepadScrollBox = NULL;
    this->MenuSwitcher = NULL;
    this->AlternateButtonTray = NULL;
    this->DefaultButton = NULL;
    this->BackButton = NULL;
    this->AdvancedButton = NULL;
    this->InputLabelGroup = NULL;
    this->KeyboardDisplay = NULL;
    this->KeybindList = NULL;
    this->GamepadDisplay = NULL;
    this->GamepadKeybindDisplay = NULL;
    this->GamepadKeybindList = NULL;
    this->PlatformSwitcher = NULL;
    this->GamePadMenuSlot = NULL;
    this->GamePadLayoutOptions = NULL;
    this->StickLayoutMenuSlot = NULL;
    this->StickLayoutOptions = NULL;
    this->BumperSwapMenuSlot = NULL;
    this->BumperSwapOptions = NULL;
    this->TriggerSwapMenuSlot = NULL;
    this->TriggerSwapOptions = NULL;
    this->KeyboardHeaderDisplay = NULL;
    this->EssentialWarningDisplay = NULL;
    this->XB_GamepadImage = NULL;
    this->XB_LeftSpecial = NULL;
    this->XB_LeftSpecialHold = NULL;
    this->XB_LTrigger = NULL;
    this->XB_LTriggerHold = NULL;
    this->XB_LBumper = NULL;
    this->XB_LBumperHold = NULL;
    this->XB_LStick = NULL;
    this->XB_LStickButton = NULL;
    this->XB_DUp = NULL;
    this->XB_DUpHold = NULL;
    this->XB_DLeft = NULL;
    this->XB_DLeftHold = NULL;
    this->XB_DDown = NULL;
    this->XB_DDownHold = NULL;
    this->XB_DRight = NULL;
    this->XB_DRightHold = NULL;
    this->XB_RightSpecial = NULL;
    this->XB_RightSpecialHold = NULL;
    this->XB_RightTrigger = NULL;
    this->XB_RightTriggerHold = NULL;
    this->XB_RBumper = NULL;
    this->XB_RBumperHold = NULL;
    this->XB_Y = NULL;
    this->XB_YHold = NULL;
    this->XB_B = NULL;
    this->XB_BHold = NULL;
    this->XB_A = NULL;
    this->XB_AHold = NULL;
    this->XB_X = NULL;
    this->XB_XHold = NULL;
    this->XB_RStick = NULL;
    this->XB_RStickButton = NULL;
    this->PS_GamepadImage = NULL;
    this->PS_SpecialLeft = NULL;
    this->PS_SpecialLeftHold = NULL;
    this->PS_L2 = NULL;
    this->PS_L2Hold = NULL;
    this->PS_L1 = NULL;
    this->PS_L1Hold = NULL;
    this->PS_DUp = NULL;
    this->PS_DUpHold = NULL;
    this->PS_DLeft = NULL;
    this->PS_DLeftHold = NULL;
    this->PS_DDown = NULL;
    this->PS_DDownHold = NULL;
    this->PS_DRight = NULL;
    this->PS_DRightHold = NULL;
    this->PS_LStick = NULL;
    this->PS_L3 = NULL;
    this->PS_SpecialRight = NULL;
    this->PS_SpecialRightHold = NULL;
    this->PS_R2 = NULL;
    this->PS_R2Hold = NULL;
    this->PS_R1 = NULL;
    this->PS_R1Hold = NULL;
    this->PS_Triangle = NULL;
    this->PS_TriangleHold = NULL;
    this->PS_Circle = NULL;
    this->PS_CircleHold = NULL;
    this->PS_X = NULL;
    this->PS_XHold = NULL;
    this->PS_Square = NULL;
    this->PS_SquareHold = NULL;
    this->PS_RStick = NULL;
    this->PS_R3 = NULL;
    this->GP_GamepadImage = NULL;
    this->GP_SpecialLeft = NULL;
    this->GP_SpecialLeftHold = NULL;
    this->GP_L2 = NULL;
    this->GP_L2Hold = NULL;
    this->GP_L1 = NULL;
    this->GP_L1Hold = NULL;
    this->GP_DUp = NULL;
    this->GP_DUpHold = NULL;
    this->GP_DLeft = NULL;
    this->GP_DLeftHold = NULL;
    this->GP_DDown = NULL;
    this->GP_DDownHold = NULL;
    this->GP_DRight = NULL;
    this->GP_DRightHold = NULL;
    this->GP_LStick = NULL;
    this->GP_L3 = NULL;
    this->GP_SpecialRight = NULL;
    this->GP_SpecialRightHold = NULL;
    this->GP_R2 = NULL;
    this->GP_R2Hold = NULL;
    this->GP_R1 = NULL;
    this->GP_R1Hold = NULL;
    this->GP_Triangle = NULL;
    this->GP_TriangleHold = NULL;
    this->GP_Circle = NULL;
    this->GP_CircleHold = NULL;
    this->GP_X = NULL;
    this->GP_XHold = NULL;
    this->GP_Square = NULL;
    this->GP_SquareHold = NULL;
    this->GP_RStick = NULL;
    this->GP_R3 = NULL;
    this->bInitialized = false;
    this->SelectedLayout = 0;
    this->SelectedStick = 0;
    this->SettingsMenu = NULL;
    this->IndianaSettings = NULL;
    this->CurrentGamepadTexture = NULL;
    this->CurrentGamepadImage = NULL;
    this->CurrentHoveredRebindWidget = NULL;
}

void UKeyBindsMenuWidget::ToggleGamepadBindingDisplay() {
}

void UKeyBindsMenuWidget::OnBackButtonClicked() {
}

TArray<FName> UKeyBindsMenuWidget::GetActionBindingOptions() const {
    return TArray<FName>();
}

void UKeyBindsMenuWidget::CreateRestoreDefaultsDialogBox() {
}


