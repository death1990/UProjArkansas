#include "SettingSubMenuHDR.h"

USettingSubMenuHDR::USettingSubMenuHDR() {
    this->ImagePostProcessMaterialIndex = 0;
    this->ToneMapPostProcessMaterialIndex = 1;
    this->DesiredCalibrationBoxSize = 0.10f;
    this->WhiteSizeU_ParamName = TEXT("WhiteBoxSizeU");
    this->WhiteSizeV_ParamName = TEXT("WhiteBoxSizeV");
    this->BlackSizeU_ParamName = TEXT("BlackBoxSizeU");
    this->BlackSizeV_ParamName = TEXT("BlackBoxSizeV");
    this->SliderContainer = NULL;
    this->DescriptionContainer = NULL;
    this->DescriptionText = NULL;
    this->RepresentationDisplayHUD = NULL;
    this->InputLabelGroup = NULL;
    this->ActiveCamera = NULL;
    this->SettingsMenu = NULL;
}

void USettingSubMenuHDR::ReturnToSettings() {
}

void USettingSubMenuHDR::ResetCalibration() {
}




