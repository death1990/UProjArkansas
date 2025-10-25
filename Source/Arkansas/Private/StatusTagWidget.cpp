#include "StatusTagWidget.h"

UStatusTagWidget::UStatusTagWidget() {
    this->bShowCompanionSneakAttack = false;
    this->NameTextBlock = NULL;
    this->NameHBox = NULL;
    this->RootPanel = NULL;
    this->HealthBar = NULL;
    this->WeakBar = NULL;
    this->RecentDamage = NULL;
    this->SneakAttackDamage = NULL;
    this->SegmentCountParam = TEXT("Number of Segments");
    this->bDisplaySegments = true;
    this->ValuePerSegment = 100.00f;
    this->RootBorder = NULL;
    this->TargetBorder = NULL;
    this->HealthOverlay = NULL;
    this->HealthVerticalBox = NULL;
    this->StatusEffectDisplay = NULL;
    this->DangerPanel = NULL;
    this->DangerOverlay = NULL;
    this->HostilitySwitcher = NULL;
    this->FriendlyIndicatorPanel = NULL;
    this->HostileIndicatorPanel = NULL;
    this->NormalDangerImage = NULL;
    this->NormalDangerImage_Broken = NULL;
    this->SevereDangerImage = NULL;
    this->SevereDangerImage_Broken = NULL;
    this->BossImage = NULL;
    this->BossImage_Broken = NULL;
    this->BossWeakened = NULL;
    this->LeaderWeakened = NULL;
    this->OutOfTierWeakened = NULL;
    this->WeakBarBreak = NULL;
    this->bCheckRestrictedAreas = true;
    this->AlertedActorTimeout = 2.00f;
    this->MinimumInvestigationAwareness = 10.00f;
    this->TagFadeTime = 0.30f;
    this->StatusTagImage = NULL;
    this->AssassinationImage = NULL;
    this->StalkerPerkImage = NULL;
    this->CannotBeDistractedImage = NULL;
    this->HealthTextBlock = NULL;
    this->WeakenedParameter = TEXT("Weakened");
    this->ThresholdParameter = TEXT("DisplayThreshold");
    this->WeakenedPercentageParameter = TEXT("WeakPercentage");
    this->WeakMaskParameter = TEXT("MaskShift");
    this->MaskParameter = TEXT("MaskShift");
    this->LostHealthAnimTime = 0.25f;
    this->StalkerPerk = NULL;
    this->SpottedActorTimeout = 10.00f;
    this->StatusTagMaterial = NULL;
}

void UStatusTagWidget::OnTalkStateChanged(ESpecialObsidianID SpecialIDIn) {
}

void UStatusTagWidget::OnSpotterPerkTriggered(const AIndianaAiCharacter* SpottedActor) {
}

void UStatusTagWidget::OnSneakAbilityChanged(EUnlockAbility Ability) {
}

void UStatusTagWidget::OnHUDVisibilityChanged(bool bVisible) {
}

void UStatusTagWidget::OnCombatStateChanged(AIndianaCharacter* InCharacter, bool bCombatIn, bool bRestoring) {
}

void UStatusTagWidget::OnAwareOfPlayerDelegate(bool bRestoring) {
}


