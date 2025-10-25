#include "SettingToBuild.h"

FSettingToBuild::FSettingToBuild() {
    this->SettingType = ECombinedSettingType::Default;
    this->UserSettingToBuild = ESetting::Invalid;
    this->SettingAssetToBuild = NULL;
    this->SpecialButton = ESpecialSettingButton::None;
}

