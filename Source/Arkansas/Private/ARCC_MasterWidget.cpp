#include "ARCC_MasterWidget.h"

UARCC_MasterWidget::UARCC_MasterWidget() {
    this->bAnimateScrollingPageGroup = true;
    this->bAnimateScrollNext = true;
    this->bAnimateScrollPrevious = true;
    this->bOverrideSpeakerName = false;
    this->bIsSplitPrePostFlow = false;
    this->MessageDisplayTime = 5.50f;
    this->MessageFadeInOutTime = 1.25f;
    this->BrilliantTrait = NULL;
    this->DumbTrait = NULL;
    this->bReturnToMainMenuFromPostTutorialFlow = true;
    this->bIsPostTutorialVariantFlow = false;
    this->DifficultySelectClass = NULL;
    this->bRestrictArmorToggleToCustomizationScreen = true;
    this->bRestrictMouseCameraToLargestAxis = true;
    this->CameraChangeMode = EARCC_CameraChangeMode::Default;
    this->bSnapCameraChangeActive = false;
    this->CameraSensitivity = 0.20f;
    this->CameraZoomSpeed = 8.00f;
    this->bEnableAutoCameraReturn = true;
    this->AutoReturnDelay = 3.00f;
    this->bSnapReturnCamera = false;
    this->DefaultNavigationIndex = 0;
    this->PostTutorialStartScreen = EARCC_PageType::Trait;
    this->PostTutorialReturnMainScreen = EARCC_PageType::Trait;
    this->MouseSensitivity = 1.00f;
    this->GamepadSensitivity = 3.00f;
    this->bClampMaximumRotation = true;
    this->MaxRotationAngle = 179.90f;
    this->RotationAngleOffset = 0.00f;
    this->bClampRotationSpeed = true;
    this->CharacterRotationBorder = NULL;
    this->PageScrollBox = NULL;
    this->BackgroundWidget = NULL;
    this->CustomizationWidget = NULL;
    this->NameWidget = NULL;
    this->TraitWidget = NULL;
    this->SkillWidget = NULL;
    this->SummaryWidget = NULL;
    this->NavigationBar = NULL;
    this->ScrollingWidgetGroup = NULL;
    this->ScreenPromptContainer = NULL;
    this->ScreenPromptTextBlock = NULL;
    this->InputLabelGroup = NULL;
    this->CameraInputGroup = NULL;
}

FEventReply UARCC_MasterWidget::OnBorderMouseDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

void UARCC_MasterWidget::HandleOnNavigationComplete(UButtonBase* NavigationButton, int32 CurrentIndex, int32 TargetIndex) {
}

void UARCC_MasterWidget::CharacterCreationCompleteFinished_BP() {
}


