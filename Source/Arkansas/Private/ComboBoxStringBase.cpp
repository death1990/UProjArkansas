#include "ComboBoxStringBase.h"

UComboBoxStringBase::UComboBoxStringBase() {
    this->MaxListHeight = 450.00f;
    this->HasDownArrow = true;
    this->EnableGamepadNavigationMode = true;
    this->bIsFocusable = true;
}

void UComboBoxStringBase::SetSelectedOption(const FString& Option) {
}

bool UComboBoxStringBase::RemoveOption(const FString& Option) {
    return false;
}

void UComboBoxStringBase::RefreshOptions() {
}

int32 UComboBoxStringBase::GetSelectedOptionIndex() const {
    return 0;
}

FString UComboBoxStringBase::GetSelectedOption() const {
    return TEXT("");
}

int32 UComboBoxStringBase::GetOptionCount() const {
    return 0;
}

FString UComboBoxStringBase::GetOptionAtIndex(int32 Index) const {
    return TEXT("");
}

int32 UComboBoxStringBase::FindOptionIndex(const FString& Option) const {
    return 0;
}

void UComboBoxStringBase::ClearSelection() {
}

void UComboBoxStringBase::ClearOptions() {
}

void UComboBoxStringBase::AddOption(const FString& Option) {
}


