#include "ReputationDetailsWidget.h"

UReputationDetailsWidget::UReputationDetailsWidget() {
    this->NeutralCostScalar = 1.00f;
    this->bHideDescriptionTextForKillOnSight = true;
    this->bHideFactionEffectsForKillOnSight = true;
    this->bTintFactionNameForKillOnSight = false;
    this->NormalRepColor = EIndianaUIColorType::IndianaYellow;
    this->KillOnSightRepColor = EIndianaUIColorType::IndianaRed;
    this->KOSTextBlock = NULL;
    this->NameTextBlock = NULL;
    this->AlliedDisplay = NULL;
    this->KillOnSightDisplay = NULL;
    this->BountyStatusTextBlock = NULL;
    this->BountyAmountTextBlock = NULL;
    this->DescriptionBodyTextBlock = NULL;
    this->EffectsBodyTextBlock = NULL;
    this->VendorPriceTextBlock = NULL;
    this->ExtraFactionDataPanel = NULL;
    this->FactionLogo = NULL;
    this->RepBar = NULL;
    this->DescriptionPanel = NULL;
    this->FactionEffectPanel = NULL;
}


