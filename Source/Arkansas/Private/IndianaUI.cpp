#include "IndianaUI.h"
#include "ArmorComponent.h"
#include "Templates/SubclassOf.h"

AIndianaUI::AIndianaUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->HUDClass = NULL;
    this->LedgerWidgetClass = NULL;
    this->InventoryWidgetClass = NULL;
    this->PauseMenuWidgetClass = NULL;
    this->DownedMenuWidgetClass = NULL;
    this->SettingsMenuWidgetClass = NULL;
    this->ConversationWidgetClass = NULL;
    this->ConversationSubtitleWidgetClass = NULL;
    this->SlideshowWidgetClass = NULL;
    this->ComputerTerminalWidgetClass = NULL;
    this->ItemContainerClass = NULL;
    this->LevelUpNotificationClass = NULL;
    this->DebugOverlayWidgetClass = NULL;
    this->ContextMenuClass = NULL;
    this->ItemInspectorClass = NULL;
    this->NewWorkbenchClass = NULL;
    this->VendorClass = NULL;
    this->ItemTransferClass = NULL;
    this->ToolTipContainerClass = NULL;
    this->GenericDialogBoxClass = NULL;
    this->MultiOptionDialogBoxClass = NULL;
    this->DialogWarningBoxClass = NULL;
    this->GenericDialogBoxRespecClass = NULL;
    this->ItemBreakdownClass = NULL;
    this->GenericMoviePlayerClass = NULL;
    this->CinematicPlayerClass = NULL;
    this->ActiveTitleCard = NULL;
    this->CinematicFramingWidget = NULL;
    this->TitleCardClass = NULL;
    this->CinematicFramingWidgetClass = NULL;
    this->MultifloorElevatorClass = NULL;
    this->RPGExaminableClass = NULL;
    this->PetListMenuClass = NULL;
    this->GenericItemToolTipClass = NULL;
    this->HealthKitToolTipClass = NULL;
    this->WaitTimeWidget = NULL;
    this->TutorialPopupWidgetClass = NULL;
    this->TutorialCenterScreenWidgetClass = NULL;
    this->SubtitleInterfaceClass = NULL;
    this->SaveLoadClass = NULL;
    this->DamageTextContainerClass = NULL;
    this->CompanionSelectionClass = NULL;
    this->Missing32 = NULL;
    this->Missing64 = NULL;
    this->Missing128 = NULL;
    this->Missing256 = NULL;
    this->bAllowItemInspector = true;
    this->ToolTipContainerWidget = NULL;
    this->ArmorComponent = CreateDefaultSubobject<UArmorComponent>(TEXT("ArmorComponent"));
    this->StatusTagClass = NULL;
    this->UIItemAudioData = NULL;
    this->ActiveVendorComponent = NULL;
    this->RestrictedAreaMaterialCollection = NULL;
    this->CollectionInstance = NULL;
    this->DebugOverlayWidget = NULL;
    this->DebugMenuWidgetClass = NULL;
    this->DebugTechArtWidgetClass = NULL;
    this->DebugCharacterLoaderClass = NULL;
    this->SkipInteractionAnimationWidgetClass = NULL;
}

void AIndianaUI::ToggleTechArtWidget() {
}

void AIndianaUI::ToggleSafeSpace() {
}

void AIndianaUI::ToggleResurrect() {
}

void AIndianaUI::ToggleDebugMenu() {
}

void AIndianaUI::ToggleDamageTextVisibility() {
}

void AIndianaUI::SubtitleFontSizeModifierChanged(int32 ModifierIn) {
}

void AIndianaUI::StartWorkbench() {
}

void AIndianaUI::ShowItemUsedOnDisplay(TSubclassOf<UItem> ItemIn) {
}

void AIndianaUI::ShowItemOnDisplay(TSubclassOf<UItem> ItemIn, int32 ItemCount, const FText OptionalItemName) {
}

void AIndianaUI::SetSoundMixVolume(USoundMix* SoundMix, float Volume) {
}

void AIndianaUI::SetHudVisible(bool bNewVisible) {
}

void AIndianaUI::RemoveSubtitleManagerInstance(USubtitleManagerWidget* ManagerWidget) {
}

void AIndianaUI::OverlayCycle() {
}

void AIndianaUI::OnPlayerTargettedChanged(const bool bAdded) {
}

void AIndianaUI::OnInteractableModified(const FInteractionDescription& Description) {
}

void AIndianaUI::OnConversationStarted(UOwConversationInstance* ConversationInstance) {
}

void AIndianaUI::OnConversationFadeToBlackStarted(UOwConversationInstance* ConversationInstance, EPresentationModeCameraFadeType FadeType) {
}

void AIndianaUI::OnConversationFadeInStarted(UOwConversationInstance* ConversationInstance, EPresentationModeCameraFadeType FadeType) {
}

void AIndianaUI::OnConversationEnded(UOwConversationInstance* ConversationInstance) {
}

void AIndianaUI::HideNpcOnMinimap(AIndianaAiCharacter* AICharacter, bool bHideNPC) {
}

UIndianaInterfaceUserWidget* AIndianaUI::GetUserWidget(ECheckBranches& Branches, TSubclassOf<UIndianaInterfaceUserWidget> WidgetClass) const {
    return NULL;
}

USlideshowWidget* AIndianaUI::GetSlideshowWidget() const {
    return NULL;
}

UHUDWidget* AIndianaUI::GetHUD() const {
    return NULL;
}

void AIndianaUI::FontSizeModifierChanged(int32 ModifierIn) {
}

void AIndianaUI::DebugSetFontScaling(int32 ModifierIn) {
}

void AIndianaUI::DebugCharacterLoader() {
}

void AIndianaUI::CreateTitleCard(UTitleCardDataAsset* DataAsset) {
}

void AIndianaUI::CreatePetList(APetKennel* CurrentPetKennel) {
}

UMoviePlayerWidget* AIndianaUI::CreateGenericMoviePlayer(bool bPauseGameDuringPlayback) {
    return NULL;
}

void AIndianaUI::CreateExaminable(const FLocString& NameString, const FLocString& DescriptionString, const FLocString& ActionString, const FName& RemoteEventOnExaminationEnd) {
}

UCinematicPlayerWidget* AIndianaUI::CreateCinematicPlayer() {
    return NULL;
}

UIndianaInterfaceUserWidget* AIndianaUI::ConstructUserWidget(ECheckBranches& Branches, TSubclassOf<UIndianaInterfaceUserWidget> WidgetClass) {
    return NULL;
}

void AIndianaUI::CloseWorkbench() {
}

void AIndianaUI::CloseTitleCard() {
}

void AIndianaUI::CloseGenericMoviePlayer() {
}


