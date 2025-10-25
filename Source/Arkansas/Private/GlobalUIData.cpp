#include "GlobalUIData.h"

UGlobalUIData::UGlobalUIData() {
    this->GlobalUIColorsData = NULL;
    this->LoadingScreenImageData = NULL;
    this->TextAnimationData = NULL;
    this->TutorialCollectionData = NULL;
    this->QuestData = NULL;
    this->PointOfInterestTextureData = NULL;
    this->IndianaUIAudioData = NULL;
    this->RenderThreadLoadingScreenWidgetClass = NULL;
    this->IconsData = NULL;
    this->LuckyRequirementIcon = NULL;
    this->StatusTagReviveParamName = TEXT("ReviveIcon");
    this->StatusTagInfoParamName = TEXT("InfoIcon");
    this->StatusTagMarkedParamName = TEXT("CompanionIconActive");
    this->StatusTagTargetedParamName = TEXT("TargettedIcon");
    this->StatusTagTargetedIconParamName = TEXT("CompanionIconToUse");
    this->StatusTagAwarenessFlagParamName = TEXT("AwarenessIcon");
    this->StatusTagAwarenessPhaseParamName = TEXT("AwarenessPhase");
    this->StatusTagAwarenessProgressParamName = TEXT("AnimationProgress");
    this->bEnableStringManipulation = true;
    this->bSplitPrependActionText = false;
    this->bInsertSpaceAfterPrependTag = true;
    this->bReplaceBraceCharacters = true;
    this->ReplaceCharacterStringLeft = TEXT("[");
    this->ReplaceCharacterStringRight = TEXT("]");
    this->SpecificTagTexture = NULL;
    this->bDisplayGenericTaggedStatus = false;
    this->GenericTagTexture = NULL;
    this->UninstalledTexture = NULL;
    this->LockedModTexture = NULL;
    this->InstalledTexture = NULL;
    this->UniqueModTexture = NULL;
    this->ScienceModTexture = NULL;
    this->PCMouseData = NULL;
    this->XboxControllerData = NULL;
    this->SonyControllerData = NULL;
    this->LoadedLeftAnchor = NULL;
    this->LoadedRightAnchor = NULL;
    this->CompassData = NULL;
    this->AudioActionData = NULL;
    this->DefaultDummyClass = NULL;
    this->ArmoredDamageThreshold = 0.20f;
    this->BagCheckMaxVisibleItems = 1;
    this->ObservationGuideTriggerRange = 225.00f;
    this->MinimumHandheldFontSize = 21;
}


