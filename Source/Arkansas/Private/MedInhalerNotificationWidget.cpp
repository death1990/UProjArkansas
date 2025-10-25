#include "MedInhalerNotificationWidget.h"

UMedInhalerNotificationWidget::UMedInhalerNotificationWidget() {
    this->MinRadMeterDisplaySize = 8;
    this->CrashDisplayTime = 3.00f;
    this->CurrentChargeFillParamName = TEXT("FillValue");
    this->InputLabelDisabledOpacity = 0.40f;
    this->bDisableConsumableIconAtFullHealth = false;
    this->bHideBarsIfEmpty = true;
    this->InhalerInputName = TEXT("QuickSelect0Linked");
    this->bListenForKeybindChange = false;
    this->CanUseInhaler = NULL;
    this->CanNotUseInhaler = NULL;
    this->CrashImminent = NULL;
    this->CrashOcurring = NULL;
    this->OverdoseAnim = NULL;
    this->OverdoseEndAnim = NULL;
    this->ChargePercentAdded = NULL;
    this->ChargeCountAdded = NULL;
    this->MedInhalerInputLabel = NULL;
    this->ToxicityOverlay = NULL;
    this->ToxicityMeterSizeBox = NULL;
    this->ToxicityBar = NULL;
    this->RadPoisoningBar = NULL;
    this->CrashWarningImage = NULL;
    this->MedKitUsageTextBlock = NULL;
    this->MedkitStateImage = NULL;
    this->ConsumableStateImage = NULL;
    this->ChargePercentImage = NULL;
    this->InhalerActiveAnim = NULL;
    this->ConsumableActiveAnim = NULL;
    this->ConsumableInactiveAnim = NULL;
    this->HealthLostAnim = NULL;
    this->CurrentChargeMaterial = NULL;
}


