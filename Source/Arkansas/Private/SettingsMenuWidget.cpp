#include "SettingsMenuWidget.h"

USettingsMenuWidget::USettingsMenuWidget() {
    this->bOverrideSettingsContent = false;
    this->OverrideSettingsList = NULL;
    this->bUsesSettingsFinish = false;
    this->bHideLanguageOptionIfDisabled = false;
    this->SubcategorySlotClass = NULL;
    this->SubcategoryClass = NULL;
    this->SliderClass = NULL;
    this->ToggleClass = NULL;
    this->OptionPresenterClass = NULL;
    this->LanguageOptionPresenterClass = NULL;
    this->ColorPickerClass = NULL;
    this->ButtonClass = NULL;
    this->KeyBindInterfaceClass = NULL;
    this->HDR_CalibrationClass = NULL;
    this->GamepadScrollMultiplier = 9.00f;
    this->PostProcessChromaticAberrationThreshold = 3;
    this->MinCVarChromaticAberrationThreshold = 1;
    this->MenuScrollBox = NULL;
    this->DescriptionScrollBox = NULL;
    this->Category0VerticalBox = NULL;
    this->Category1VerticalBox = NULL;
    this->Category2VerticalBox = NULL;
    this->Category3VerticalBox = NULL;
    this->Category4VerticalBox = NULL;
    this->Category5VerticalBox = NULL;
    this->DisplaySubcategory = NULL;
    this->MenuSwitcher = NULL;
    this->DescriptionTextBlock = NULL;
    this->NameTextBlock = NULL;
    this->Background = NULL;
    this->VisualizerPanel = NULL;
    this->VisualizerSwitcher = NULL;
    this->DescriptionBackgroundPanel = NULL;
    this->InputLabelGroup = NULL;
    this->SettingsData = NULL;
    this->NavigationBar = NULL;
    this->HUDAdjustorWidget = NULL;
    this->HUDAdjustorBGWidget = NULL;
    this->VisualEffectCategoryWidget = NULL;
    this->ChromaticAberrationSlotWidget = NULL;
    this->ResolutionSetting = NULL;
    this->WindowModeSetting = NULL;
    this->CrossSaveSetting = NULL;
    this->CrossSaveSettingSlot = NULL;
    this->CrossSaveToggle = NULL;
    this->RuntimeCombinedSettingsList = NULL;
}

void USettingsMenuWidget::ValueChanged(UUserSetting* UserSetting) {
}

void USettingsMenuWidget::UpdateDialogTimerText(float DeltaTime) {
}

void USettingsMenuWidget::SetVisualEffectQuality(int32 Value) {
}

void USettingsMenuWidget::SetViewDistanceQuality(int32 Value) {
}

void USettingsMenuWidget::SetTextureQuality(int32 Value) {
}

void USettingsMenuWidget::SetShadowQuality(int32 Value) {
}

void USettingsMenuWidget::SetReflectionQuality(int32 Value) {
}

void USettingsMenuWidget::SetPostProcessingQuality(int32 Value) {
}

void USettingsMenuWidget::SetGraphicsQuality(int32 Value) {
}

void USettingsMenuWidget::SetGlobalIlluminationQuality(int32 Value) {
}

void USettingsMenuWidget::SetFoliageQuality(int32 Value) {
}

void USettingsMenuWidget::SetCrowdDensity(int32 Value) {
}

void USettingsMenuWidget::SetAntiAliasingQuality(int32 Value) {
}

void USettingsMenuWidget::SetAntiAliasingMethod(int32 Value) {
}

void USettingsMenuWidget::RestoreFocusOnDelay() {
}

void USettingsMenuWidget::OnToggleFullscreenMode(bool bIsFullscreen) {
}

void USettingsMenuWidget::OnShowSaveTargetWarning(bool bSaveToXbox) {
}

void USettingsMenuWidget::OnParentSettingChanged(const FString& ParentSettingName) {
}

void USettingsMenuWidget::OnOpenKeybindMenu(bool bIsPcKeybinds) {
}

void USettingsMenuWidget::OnOpenHUDAdjustor() {
}

void USettingsMenuWidget::OnOpenCalibrateHDR() {
}

void USettingsMenuWidget::OnInputBack() {
}

void USettingsMenuWidget::OnDetectGraphics() {
}

void USettingsMenuWidget::OnDefaultAllClicked() {
}

void USettingsMenuWidget::OnCyclePageRight() {
}

void USettingsMenuWidget::OnCyclePageLeft() {
}

void USettingsMenuWidget::HandleAppUnconstrain() {
}

void USettingsMenuWidget::EmptyHandler() {
}


