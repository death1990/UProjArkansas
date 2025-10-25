#include "ButtonBase.h"

UButtonBase::UButtonBase() {
    this->ToolTipClass = NULL;
    this->ButtonType = EButtonType::Normal;
    this->bClickEnabled = true;
    this->bSelected = false;
    this->IsFocusable = true;
    this->bAllowSelectionStateChange = true;
    this->bCanActivateByKey = true;
    this->bProcessDoubleClickAsClick = false;
    this->bProcessAuxDoubleClickAsAuxClick = true;
    this->bUseHoldToClick = false;
    this->HoldToClickTime = 1.00f;
    this->bShowHoldText = false;
    this->bUseHoldToClickAux = false;
    this->HoldToClickAuxTime = 1.00f;
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->bCenterSweepHitTest = false;
    this->AdvancedHitTexture = NULL;
    this->AdvancedHitAlpha = 0;
    this->bPopulateWithDefaultAudio = true;
}

void UButtonBase::StopSimulateHoldClick() {
}

void UButtonBase::StartSimulateHoldClick(float OverrideHoldTime) {
}

void UButtonBase::SetShowDisabled(bool bShowDisabledIn) {
}

void UButtonBase::SetSelectedPressedBrush(const FSlateBrush& InBrush) {
}

void UButtonBase::SetSelectedNormalBrush(const FSlateBrush& InBrush) {
}

void UButtonBase::SetSelectedHoveredBrush(const FSlateBrush& InBrush) {
}

void UButtonBase::SetSelectedFocusedBrush(const FSlateBrush& InBrush) {
}

void UButtonBase::SetSelected(bool NewBSelected, EFocusCause Cause) {
}

void UButtonBase::SetPressedBrush(const FSlateBrush& InBrush) {
}

void UButtonBase::SetNormalBrush(const FSlateBrush& InBrush) {
}

void UButtonBase::SetHoveredBrush(const FSlateBrush& InBrush) {
}

void UButtonBase::SetFocusedBrush(const FSlateBrush& InBrush) {
}

void UButtonBase::SetFocusable(bool bFocused) {
}

void UButtonBase::SetEnabled(bool bInEnabled) {
}

void UButtonBase::SetDisabledBrush(const FSlateBrush& InBrush) {
}

void UButtonBase::SetContentColor(FLinearColor InColorAndOpacity) {
}

void UButtonBase::SetClickable(bool bIsClickableIn) {
}

void UButtonBase::SetButtonType(EButtonType TypeIn) {
}

void UButtonBase::SetButtonColor(FLinearColor InBackgroundColor) {
}

void UButtonBase::SetAllowSelectionStateChange(bool bAllowChange) {
}

void UButtonBase::SetAdvancedHitTexture(UTexture2D* InTexture) {
}

void UButtonBase::SetAdvancedHitAlpha(int32 InAlpha) {
}

void UButtonBase::OverrideSelectedBrushTextures(UTexture2D* InTexture) {
}

void UButtonBase::OverrideBrushTextures(UTexture2D* InTexture) {
}

bool UButtonBase::IsSelected() const {
    return false;
}

bool UButtonBase::IsPressed() const {
    return false;
}

bool UButtonBase::IsHoldInProgress() const {
    return false;
}

void UButtonBase::HandleOnSimulateClickTimeComplete() {
}

void UButtonBase::HandleOnClickTimeComplete() {
}

FSlateBrush UButtonBase::GetSelectedPressedBrush() {
    return FSlateBrush{};
}

FSlateBrush UButtonBase::GetSelectedNormalBrush() {
    return FSlateBrush{};
}

FSlateBrush UButtonBase::GetSelectedHoveredBrush() {
    return FSlateBrush{};
}

FSlateBrush UButtonBase::GetSelectedFocusedBrush() {
    return FSlateBrush{};
}

FSlateBrush UButtonBase::GetPressedBrush() {
    return FSlateBrush{};
}

FSlateBrush UButtonBase::GetNormalBrush() {
    return FSlateBrush{};
}

FSlateBrush UButtonBase::GetHoveredBrush() {
    return FSlateBrush{};
}

float UButtonBase::GetHoldToClickTime() const {
    return 0.0f;
}

float UButtonBase::GetHoldToClickAuxTime() const {
    return 0.0f;
}

FSlateBrush UButtonBase::GetFocusedBrush() {
    return FSlateBrush{};
}

FSlateBrush UButtonBase::GetDisabledBrush() {
    return FSlateBrush{};
}

EButtonType UButtonBase::GetButtonType() const {
    return EButtonType::Normal;
}

void UButtonBase::DisableHoldClick() {
}

bool UButtonBase::AllowsSelectionStateChange() const {
    return false;
}


