#include "CharacterDescriptionPanel.h"

UCharacterDescriptionPanel::UCharacterDescriptionPanel() {
    this->PrimaryAdjustmentsVerticalBox = NULL;
    this->SecondaryAdjustmentsVerticalBox = NULL;
    this->RPGRequirementsVBox = NULL;
    this->AdjustedSkillValueText = NULL;
    this->HeaderBodySizeBox = NULL;
    this->RPGInteractionContainer1 = NULL;
    this->RPGInteractionContainer2 = NULL;
    this->RPGInteractionContainer3 = NULL;
    this->CommonRequirementsPanelBuffer = NULL;
    this->SpecialStatEntryWidget = NULL;
    this->BackgroundPerkIcon = NULL;
    this->PerkTransactionStatusPanel = NULL;
    this->PerkTransactionStatusText = NULL;
    this->PerkTransactionStatusIcon = NULL;
    this->FadePendingIn = NULL;
    this->PerkUnavailable = NULL;
    this->PerkAvailable = NULL;
    this->PerkOwned = NULL;
    this->PerkAcquired = NULL;
    this->LockedTexture = NULL;
    this->AdditionalPerkColor = EIndianaUIColorType::ThermalDamageText;
    this->AcquiredPerkColor = EIndianaUIColorType::ThermalDamageText;
    this->PendingPerkColor = EIndianaUIColorType::SkillTextColor;
    this->AvailablePerkColor = EIndianaUIColorType::SkillTextColor;
    this->UnavailablePerkColor = EIndianaUIColorType::IndianaRed;
    this->AdjustmentClass = NULL;
    this->bCombineCommonPerks = true;
    this->bShowCompanionPerkCost = false;
    this->IconParamName = TEXT("Icon Texture Input");
    this->bEnableBackgroundIcons = true;
    this->bEnableTraitIcons = true;
    this->bEnableFlawIcons = true;
    this->bEnablePerkIcons = true;
    this->bEnableStatusEffectIcons = true;
}


