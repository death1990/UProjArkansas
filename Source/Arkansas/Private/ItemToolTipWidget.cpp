#include "ItemToolTipWidget.h"

UItemToolTipWidget::UItemToolTipWidget() {
    this->bPrepopulateStatCategories = true;
    this->bShowDescriptionForNourishmentItems = false;
    this->bShowSellValueForInhalerChargeItems = false;
    this->bHideSellValue = false;
    this->bShowCompareOption = true;
    this->bHideCompareForThrowables = false;
    this->bShowComparisonHeaderText = true;
    this->bForceShowCompareLabelInHUD = false;
    this->bSupportsSwap = false;
    this->bShowUpgradeAvailableInsteadOfLore = true;
    this->bAllowItemInspection = false;
    this->bShouldShowInspectOption = true;
    this->bIsStaticTooltip = false;
    this->bShowTaggedStatus = true;
    this->bShowModsInHUD = true;
    this->bHideEmptyModSlots = false;
    this->bShowRecipeKnown = false;
    this->CurrencyBrush = NULL;
    this->ImageClippingHeight = 58;
    this->IncreaseCompareIcon = NULL;
    this->DecreaseCompareIcon = NULL;
    this->PhysicalDamageTypeIndex = 0;
    this->FoodiePerkTexture = NULL;
    this->bSplitAlsoPopulatesStatusEffect = true;
    this->bUseInstancedModifiers = false;
    this->DefaultMaximumFullScreenModifier = 0.50f;
    this->InstancedMaximumFullScreenModifier = 0.50f;
    this->DefaultMaximumWidescreenModifier = 0.50f;
    this->InstancedMaximumWidescreenModifier = 0.50f;
    this->DefaultMaximumFullScreenComparisonModifier = 0.00f;
    this->InstancedMaximumFullScreenComparisonModifier = 0.15f;
    this->DefaultMaximumWidescreenComparisonModifier = 0.15f;
    this->InstancedMaximumWidescreenComparisonModifier = 0.15f;
    this->BrandImage = NULL;
    this->UpgradeIcon = NULL;
    this->ComparisonBorder = NULL;
    this->ComparisonItemTextBlock = NULL;
    this->PrimaryComparisonIcon = NULL;
    this->DamageTypeContainer = NULL;
    this->DamageTypeImage = NULL;
    this->RecipeDescriptionTextBlock = NULL;
    this->DescriptionTextBlock = NULL;
    this->ItemPowerDescriptor = NULL;
    this->ItemPowerTextBlock = NULL;
    this->ItemShotCountTextBlock = NULL;
    this->ItemPowerPanel = NULL;
    this->LoreBox = NULL;
    this->LoreTextBlock = NULL;
    this->NameTextBlock = NULL;
    this->StatusEffectsTextBlock = NULL;
    this->ModParentPanel = NULL;
    this->ModParentItemIcon = NULL;
    this->DescriptionSizeBox = NULL;
    this->TagImage = NULL;
    this->CompareInspectContainer = NULL;
    this->CompareLabel = NULL;
    this->InspectLabel = NULL;
    this->MainScaleBox = NULL;
    this->ModWidgetBorder = NULL;
    this->ModWidgetPanel = NULL;
    this->RarityFrameBorder = NULL;
    this->RarityFrameImage = NULL;
    this->CustomStatsPanel = NULL;
    this->CustomStatsDivider = NULL;
    this->StatsBox = NULL;
    this->ThrowableDamageStat = NULL;
    this->ItemStats = NULL;
    this->RecipeKnownDisplay = NULL;
    this->CurrencyValuePanel = NULL;
    this->ValueImage = NULL;
    this->ValueTextBlock = NULL;
    this->AmmoTextBlock = NULL;
}

bool UItemToolTipWidget::IsStaticTooltip() const {
    return false;
}

void UItemToolTipWidget::FontSizeChanged(int32 NewModifier) {
}


