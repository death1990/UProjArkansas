#include "IndianaGameUserSettings.h"

UIndianaGameUserSettings::UIndianaGameUserSettings() {
    this->SettingsDefaultVersion = 5;
    this->MasterSoundVolume = 1.00f;
    this->EffectsSoundVolume = 1.00f;
    this->MusicSoundVolume = 1.00f;
    this->UISoundVolume = 1.00f;
    this->VoiceSoundVolume = 1.00f;
    this->bXAxisInverted = false;
    this->bControllerXAxisInverted = false;
    this->bYAxisInverted = false;
    this->bControllerYAxisInverted = false;
    this->bControllerAutoSprintEnabled = false;
    this->bControllerAdaptiveTriggersEnabled = false;
    this->bControllerLightBarEnabled = false;
    this->InputPreferenceADS = EControlInputPreference::PressAndHold;
    this->InputPreferenceCrouch = EControlInputPreference::PressToToggle;
    this->InputPreferenceSprint = EControlInputPreference::PressToToggle;
    this->MouseADSSensitivityValue = 0.10f;
    this->RadialSensitivity = 0.50f;
    this->ControllerSensitivity = 0.33f;
    this->ControllerADSSensitivity = 0.10f;
    this->bControllerRumbleEnabled = true;
    this->ControllerLeftInnerDeadZone = 0.15f;
    this->ControllerLeftOuterDeadZone = 0.05f;
    this->ControllerRightInnerDeadZone = 0.15f;
    this->ControllerRightOuterDeadZone = 0.05f;
    this->CompanionHelmetVisibility = ECompanionHelmetVisibility::Default;
    this->GamepadLayout = 0;
    this->StickLayout = 0;
    this->bPseudoGodMode = false;
    this->bGodMode = false;
    this->bInfiniteAmmo = false;
    this->bLastConfirmedVSync = false;
    this->MotionBlurScale = 0.20f;
    this->LastConfirmedMotionBlurScale = 0.20f;
    this->LastGraphicsQuality = 1;
    this->VisualMode = EVisualMode::Beauty;
    this->VisualModeXSS = EVisualMode::Beauty;
    this->bVRREnabled = false;
    this->GammaLevel = 2.20f;
    this->LastConfirmedGammaLevel = 0.00f;
    this->FPSLimit = EFPSLimit::Unlimited;
    this->LastConfirmedFPSLimit = EFPSLimit::Thirty;
    this->UpscalingMethod = ESuperSampler::DLSS;
    this->FSR3QualityMode = EFSR3QualityMode::Balanced;
    this->FSR3Sharpness = 0.00f;
    this->XeSSQualityMode = EOWXeSSQualityMode::Off;
    this->DLSSQualityMode = EOWDLSSMode::Performance;
    this->DLSSFrameGenerationMode = EOWDLSSFrameGenerationMode::On2X;
    this->NvidiaReflexMode = EOWNvidiaReflexMode::Enabled;
    this->LatencyReductionMethod = ELatencyReductionMethod::Reflex;
    this->FrameGenerationMethod = EFrameGenerationMethod::DLSSG;
    this->Resolution3D = 66.00f;
    this->ResolutionQualityPreset = EResolutionQualityPreset::Medium;
    this->LastConfirmedResolutionQualityPreset = EResolutionQualityPreset::Low;
    this->CustomFieldOfView = 59.00f;
    this->LastConfirmedCustomFieldOfView = 0.00f;
    this->NewDefaultVerticalFOV = 59.00f;
    this->DefaultHorizontalFOV = 90.00f;
    this->MinimumVerticalFOV = 30.00f;
    this->MaximumVerticalFOV = 90.00f;
    this->bChromaticAberration = true;
    this->bLastChromaticAberration = false;
    this->bHardwareRayTracing = false;
    this->LastConfirmedHardwareRayTracing = false;
    this->LastConfirmedUseHDRDisplayOutput = false;
    this->HDRMaxBrightness = 1000.00f;
    this->LastConfirmedHDRMaxBrightness = 0.00f;
    this->HDRContrast = 30.00f;
    this->LastConfirmedHDRContrast = 0.00f;
    this->HDRShadows = -10.00f;
    this->LastConfirmedHDRShadows = 0.00f;
    this->HDRUIBrightness = 300.00f;
    this->LastConfirmedHDRUIBrightness = 0.00f;
    this->HDRUIContrast = 0.00f;
    this->LastConfirmedHDRUIContrast = 0.00f;
    this->CrowdDensityLevel = 3;
    this->LastConfirmedCrowdDensityLevel = 0;
    this->ConversationSubtitleVisibility = EHUDWidgetVisibilityMode::AlwaysOn;
    this->bBarkSubtitlesVisible = true;
    this->bSubtitleShowSpeakerName = true;
    this->bSubtitleShowFontOutline = false;
    this->bSubtitleShowDropShadow = false;
    this->SubtitleTextColorIndex = 0;
    this->SubtitleBGColorIndex = 1;
    this->SubtitleBGOpacity = 0.50f;
    this->SubtitleTextOpacity = 1.00f;
    this->SubtitleFontModifier = 0;
    this->bCinematicSubtitlesVisible = false;
    this->bConversationResponseVisibleDuringVO = false;
    this->bDoesConversationAdvanceNeedInput = false;
    this->bTutorialsEnabled = true;
    this->LanguageMode = ELanguageMode::English;
    this->bOverrideNativeLanguage = false;
    this->bShowFloatingDamageText = true;
    this->WeaponTooltipStatMode = EWeaponTooltipStatMode::Damage;
    this->bHUDVisible = true;
    this->bShowWaypointMarkers = true;
    this->bShowInteractionOutlines = true;
    this->ReticleMode = EReticleMode::Default;
    this->bShowReticleFeedback = true;
    this->bOffsetReticle = false;
    this->bOffsetReticleConsole = true;
    this->QuestUpdateVisibility = EHUDWidgetVisibilityMode::EventTimedFade;
    this->PlayerStatusVisibility = EHUDWidgetVisibilityMode::AlwaysOn;
    this->CompanionAbilityUIVisibility = EHUDWidgetVisibilityMode::AlwaysOn;
    this->EquipmentDisplayVisibility = EHUDWidgetVisibilityMode::AlwaysOn;
    this->HeldWeaponDisplayTextVisibility = EHUDWidgetVisibilityMode::AlwaysOn;
    this->bShowLevelUpReminders = true;
    this->TTDReticleMeterVisibility = EHUDWidgetVisibilityMode::AlwaysOn;
    this->HUDScalingValue = 1.00f;
    this->HUDWidthScalingValue = 0.99f;
    this->HUDHeightScalingValue = 0.98f;
    this->HUDHealthScalingValue = 1.00f;
    this->HUDCompanionScalingValue = 1.00f;
    this->HUDCompassScalingValue = 1.00f;
    this->HUDQuestTrackerScalingValue = 1.00f;
    this->HUDNotificationsScalingValue = 1.00f;
    this->HUDCommandsScalingValue = 1.00f;
    this->HUDAmmoReadoutScalingValue = 1.00f;
    this->bShowPlayerHelmet = true;
    this->bCinematicKillCam = true;
    this->bHeadbobbing = true;
    this->MotionSicknessMode = EMotionSicknessMode::Off;
    this->bViewBaseItemStats = false;
    this->CompanionOutlineVisibility = EHUDWidgetVisibilityMode::AlwaysOff;
    this->MinimapVisibility = EHUDWidgetVisibilityMode::AlwaysOn;
    this->bMinimapRotationLock = false;
    this->bShowMinimapPlayerFOV = true;
    this->bShowMinimapThreatIndicators = true;
    this->bIsFreshUserSettings = true;
    this->bIsFirstTimeFrontEndFlow = true;
    this->bOneTimeSaveCompressionCompleted = false;
    this->AimAssistMagnetismStrength = 1.00f;
    this->AimAssistAdhesionStrength = 1.00f;
    this->AimAssistFrictionStrength = 1.00f;
    this->AimAssistSnappingStrength = 1.00f;
}

void UIndianaGameUserSettings::SetYAxisInverted(bool Value) {
}

void UIndianaGameUserSettings::SetXeSSQualityMode(EOWXeSSQualityMode InQualityMode) {
}

void UIndianaGameUserSettings::SetXAxisInverted(bool Value) {
}

void UIndianaGameUserSettings::SetWeaponTooltipStatMode(EWeaponTooltipStatMode Mode) {
}

void UIndianaGameUserSettings::SetVSyncWrapper(bool bEnabled) {
}

void UIndianaGameUserSettings::SetVRREnabled(bool bEnabled) {
}

void UIndianaGameUserSettings::SetVoiceSoundVolume(float Value) {
}

void UIndianaGameUserSettings::SetVisualMode(EVisualMode Value, bool bFromUI) {
}

void UIndianaGameUserSettings::SetViewBaseStats(bool Value) {
}

void UIndianaGameUserSettings::SetUseHDRDisplayOutput(bool UseHDRDisplayOutputIn) {
}

void UIndianaGameUserSettings::SetUpscalingMethod(ESuperSampler InUpscalingMethod) {
}

void UIndianaGameUserSettings::SetUISoundVolume(float Value) {
}

void UIndianaGameUserSettings::SetTutorialsEnabled(bool bEnabled) {
}

void UIndianaGameUserSettings::SetTempShowMinimap(bool bEnabled) {
}

void UIndianaGameUserSettings::SetSubtitleTextOpacity(float Value) {
}

void UIndianaGameUserSettings::SetSubtitleTextColorIndex(int32 Index) {
}

void UIndianaGameUserSettings::SetSubtitleFontSizeModifier(int32 ModifierIn) {
}

void UIndianaGameUserSettings::SetSubtitleBGOpacity(float Value) {
}

void UIndianaGameUserSettings::SetSubtitleBGColorIndex(int32 Index) {
}

void UIndianaGameUserSettings::SetShowWaypointMarkers(bool bShow) {
}

void UIndianaGameUserSettings::SetShowTTDReticleMeter(EHUDWidgetVisibilityMode ModeIn) {
}

void UIndianaGameUserSettings::SetShowSubtitleSpeakerName(bool bVisible) {
}

void UIndianaGameUserSettings::SetShowSubtitleFontOutline(bool bVisible) {
}

void UIndianaGameUserSettings::SetShowSubtitleDropShadow(bool bVisible) {
}

void UIndianaGameUserSettings::SetShowReticleFeedback(bool bShow) {
}

void UIndianaGameUserSettings::SetShowPlayerHelmet(bool bShow) {
}

void UIndianaGameUserSettings::SetShowMinimapVisibility(EHUDWidgetVisibilityMode ModeIn) {
}

void UIndianaGameUserSettings::SetShowMinimapThreatIndicators(bool bEnabled) {
}

void UIndianaGameUserSettings::SetShowMinimapPlayerFOV(bool bEnabled) {
}

void UIndianaGameUserSettings::SetShowLevelUpReminders(bool bShow) {
}

void UIndianaGameUserSettings::SetShowInteractionOutlines(bool bShow) {
}

void UIndianaGameUserSettings::SetShowFloatingDamageText(bool bShow) {
}

void UIndianaGameUserSettings::SetRadialSensitivity(float Value) {
}

void UIndianaGameUserSettings::SetQuestUpdateVisibility(EHUDWidgetVisibilityMode bShow) {
}

void UIndianaGameUserSettings::SetPseudoGodMode(bool Value) {
}

void UIndianaGameUserSettings::SetPlayerStatusBarVisibility(EHUDWidgetVisibilityMode ModeIn) {
}

void UIndianaGameUserSettings::SetOffsetReticle(bool bUseOffset) {
}

void UIndianaGameUserSettings::SetNvidiaReflexMode(EOWNvidiaReflexMode InReflectMode) {
}

void UIndianaGameUserSettings::SetMusicSoundVolume(float Value) {
}

void UIndianaGameUserSettings::SetMouseADSSensitivity(float Value) {
}

void UIndianaGameUserSettings::SetMotionSicknessMode(EMotionSicknessMode Mode) {
}

void UIndianaGameUserSettings::SetMotionBlurScale(float NewMotionBlurScale) {
}

void UIndianaGameUserSettings::SetMinimapRotationLock(bool bEnabled) {
}

void UIndianaGameUserSettings::SetMasterSoundVolume(float Value) {
}

void UIndianaGameUserSettings::SetLatencyReductionMethod(ELatencyReductionMethod InLatencyReductionMethod) {
}

void UIndianaGameUserSettings::SetLanguageMode(ELanguageMode LanguageModeIn, bool bPending) {
}

void UIndianaGameUserSettings::SetIsFreshUserSettings(bool Value) {
}

void UIndianaGameUserSettings::SetIsFirstTimeFrontEndFlow(bool Value) {
}

void UIndianaGameUserSettings::SetInputPreferenceSprint(EControlInputPreference InputPreference) {
}

void UIndianaGameUserSettings::SetInputPreferenceCrouch(EControlInputPreference InputPreference) {
}

void UIndianaGameUserSettings::SetInputPreferenceADS(EControlInputPreference InputPreference) {
}

void UIndianaGameUserSettings::SetInfiniteAmmo(bool Value) {
}

void UIndianaGameUserSettings::SetHUDVisibility(bool bVisibilityIn) {
}

void UIndianaGameUserSettings::SetHUDScaling(float Value) {
}

void UIndianaGameUserSettings::SetHUDCommandsScaling(float Value) {
}

void UIndianaGameUserSettings::SetHeldWeaponDisplayTextVisibility(EHUDWidgetVisibilityMode ModeIn) {
}

void UIndianaGameUserSettings::SetHDRUIContrast(float HDRContrastIn) {
}

void UIndianaGameUserSettings::SetHDRUIBrightness(float HDRUIBrightnessIn) {
}

void UIndianaGameUserSettings::SetHDRShadows(float HDRShadowsIn) {
}

void UIndianaGameUserSettings::SetHDRMaxBrightness(float HDRMaxBrightnessIn) {
}

void UIndianaGameUserSettings::SetHDRContrast(float HDRContrastIn) {
}

void UIndianaGameUserSettings::SetHardwareRayTracing(bool bUseHardwareRayTracing) {
}

void UIndianaGameUserSettings::SetGraphicsQuality(int32 Value) {
}

void UIndianaGameUserSettings::SetGodMode(bool Value) {
}

void UIndianaGameUserSettings::SetGammaLevel(float GammaLevelIn) {
}

void UIndianaGameUserSettings::SetFullscreenModeThenBroadcast(TEnumAsByte<EWindowMode::Type> Value) {
}

void UIndianaGameUserSettings::SetFSR3Sharpness(float InSharpness) {
}

void UIndianaGameUserSettings::SetFSR3QualityMode(EFSR3QualityMode InQualityMode) {
}

void UIndianaGameUserSettings::SetFrameGenerationMethod(EFrameGenerationMethod InFrameGenerationMethod) {
}

void UIndianaGameUserSettings::SetFPSLimit(EFPSLimit FPSLimitIn) {
}

void UIndianaGameUserSettings::SetFOV(float FOVIn) {
}

void UIndianaGameUserSettings::SetEquipmentDisplayVisibility(EHUDWidgetVisibilityMode ModeIn) {
}

void UIndianaGameUserSettings::SetEffectsSoundVolume(float Value) {
}

void UIndianaGameUserSettings::SetDoesConversationAdvanceNeedInput(bool bDoesConversationAdvanceNeedInputIn) {
}

void UIndianaGameUserSettings::SetDLSSQualityMode(EOWDLSSMode InQualityMode) {
}

void UIndianaGameUserSettings::SetDLSSFrameGenerationMode(EOWDLSSFrameGenerationMode InGenMode) {
}

void UIndianaGameUserSettings::SetCrowDensityLevel(int32 InCrowdDensityLevel) {
}

void UIndianaGameUserSettings::SetConversationSubtitleVisibility(EHUDWidgetVisibilityMode Mode) {
}

void UIndianaGameUserSettings::SetConversationResponseVisibleDuringVO(bool bVisible) {
}

void UIndianaGameUserSettings::SetControllerYAxisInverted(bool Value) {
}

void UIndianaGameUserSettings::SetControllerXAxisInverted(bool Value) {
}

void UIndianaGameUserSettings::SetControllerSensitivity(float Value) {
}

void UIndianaGameUserSettings::SetControllerRumbleEnabled(bool Value) {
}

void UIndianaGameUserSettings::SetControllerRightOuterDeadZone(float Value) {
}

void UIndianaGameUserSettings::SetControllerRightInnerDeadZone(float Value) {
}

void UIndianaGameUserSettings::SetControllerLightBarEnabled(bool Value) {
}

void UIndianaGameUserSettings::SetControllerLeftOuterDeadZone(float Value) {
}

void UIndianaGameUserSettings::SetControllerLeftInnerDeadZone(float Value) {
}

void UIndianaGameUserSettings::SetControllerAutoSprintEnabled(bool Value) {
}

void UIndianaGameUserSettings::SetControllerADSSensitivity(float Value) {
}

void UIndianaGameUserSettings::SetControllerAdaptiveTriggersEnabled(bool Value) {
}

void UIndianaGameUserSettings::SetCompanionOutlineMode(EHUDWidgetVisibilityMode Mode) {
}

void UIndianaGameUserSettings::SetCompanionHelmetVisibility(ECompanionHelmetVisibility HelmetVisibility) {
}

void UIndianaGameUserSettings::SetCompanionAbilityUIVisibility(EHUDWidgetVisibilityMode ModeIn) {
}

void UIndianaGameUserSettings::SetCinematicSubtitlesVisible(bool bVisible) {
}

void UIndianaGameUserSettings::SetCinematicKillCam(bool bEnabledIn) {
}

void UIndianaGameUserSettings::SetChromaticAberration(bool bUseChromaticAberration) {
}

void UIndianaGameUserSettings::SetBarkSubtitleMode(bool bVisible) {
}

void UIndianaGameUserSettings::SetAxisKeyBinds(TArray<FInputAxisKeyMapping> OldValues, TArray<FInputAxisKeyMapping> NewValues) {
}

void UIndianaGameUserSettings::SetAntiAliasingMethod(int32 Method) {
}

void UIndianaGameUserSettings::SetAimingReticleMode(EReticleMode ModeIn) {
}

void UIndianaGameUserSettings::SetAimAssistSnappingStrength(float StrengthIn) {
}

void UIndianaGameUserSettings::SetAimAssistMagnetismStrength(float StrengthIn) {
}

void UIndianaGameUserSettings::SetAimAssistFrictionStrength(float StrengthIn) {
}

void UIndianaGameUserSettings::SetAimAssistAdhesionStrength(float StrengthIn) {
}

void UIndianaGameUserSettings::SetActionKeyBinds(TArray<FInputActionKeyMapping> OldValues, TArray<FInputActionKeyMapping> NewValues) {
}

void UIndianaGameUserSettings::Set3DResolutionPreset(EResolutionQualityPreset ResolutionPreset) {
}

void UIndianaGameUserSettings::Set3DResolution(float ResolutionIn) {
}

void UIndianaGameUserSettings::ResetAllKeyBinds() {
}

void UIndianaGameUserSettings::OnDetectGraphics() {
}

bool UIndianaGameUserSettings::IsVisLogRunning() {
    return false;
}

bool UIndianaGameUserSettings::IsConversationResponseVisibleDuringVO() const {
    return false;
}

bool UIndianaGameUserSettings::GetYAxisInverted() {
    return false;
}

EOWXeSSQualityMode UIndianaGameUserSettings::GetXeSSQualityMode() const {
    return EOWXeSSQualityMode::Off;
}

bool UIndianaGameUserSettings::GetXAxisInverted() {
    return false;
}

EWeaponTooltipStatMode UIndianaGameUserSettings::GetWeaponTooltipStatMode() const {
    return EWeaponTooltipStatMode::DPS;
}

bool UIndianaGameUserSettings::GetVSyncWrapper() const {
    return false;
}

bool UIndianaGameUserSettings::GetVRREnabled() const {
    return false;
}

float UIndianaGameUserSettings::GetVoiceSoundVolume() {
    return 0.0f;
}

EVisualMode UIndianaGameUserSettings::GetVisualMode() const {
    return EVisualMode::Performance;
}

bool UIndianaGameUserSettings::GetViewBaseStats() {
    return false;
}

float UIndianaGameUserSettings::GetVerticalFOV() const {
    return 0.0f;
}

bool UIndianaGameUserSettings::GetUseHDRDisplayOutput() const {
    return false;
}

ESuperSampler UIndianaGameUserSettings::GetUpscaleMethod() const {
    return ESuperSampler::None;
}

float UIndianaGameUserSettings::GetUISoundVolume() {
    return 0.0f;
}

bool UIndianaGameUserSettings::GetTutorialsEnabled() const {
    return false;
}

bool UIndianaGameUserSettings::GetTempShowMinimap() const {
    return false;
}

float UIndianaGameUserSettings::GetSubtitleTextOpacity() const {
    return 0.0f;
}

int32 UIndianaGameUserSettings::GetSubtitleTextColorIndex() const {
    return 0;
}

int32 UIndianaGameUserSettings::GetSubtitleFontSizeModifier() const {
    return 0;
}

float UIndianaGameUserSettings::GetSubtitleBGOpacity() const {
    return 0.0f;
}

int32 UIndianaGameUserSettings::GetSubtitleBGColorIndex() const {
    return 0;
}

bool UIndianaGameUserSettings::GetShowWaypointMarkers() const {
    return false;
}

EHUDWidgetVisibilityMode UIndianaGameUserSettings::GetShowTTDReticleMeter() const {
    return EHUDWidgetVisibilityMode::AlwaysOff;
}

bool UIndianaGameUserSettings::GetShowSubtitleSpeakerName() const {
    return false;
}

bool UIndianaGameUserSettings::GetShowSubtitleFontOutline() const {
    return false;
}

bool UIndianaGameUserSettings::GetShowSubtitleDropShadow() const {
    return false;
}

bool UIndianaGameUserSettings::GetShowReticleFeedback() const {
    return false;
}

bool UIndianaGameUserSettings::GetShowPlayerHelmet() const {
    return false;
}

EHUDWidgetVisibilityMode UIndianaGameUserSettings::GetShowMinimapVisibility() const {
    return EHUDWidgetVisibilityMode::AlwaysOff;
}

bool UIndianaGameUserSettings::GetShowMinimapThreatIndicators() const {
    return false;
}

bool UIndianaGameUserSettings::GetShowMinimapPlayerFOV() const {
    return false;
}

bool UIndianaGameUserSettings::GetShowLevelUpReminders() const {
    return false;
}

bool UIndianaGameUserSettings::GetShowInteractionOutlines() const {
    return false;
}

bool UIndianaGameUserSettings::GetShowFloatingDamageText() const {
    return false;
}

float UIndianaGameUserSettings::GetRadialSensitivity() {
    return 0.0f;
}

EHUDWidgetVisibilityMode UIndianaGameUserSettings::GetQuestUpdateVisibility() const {
    return EHUDWidgetVisibilityMode::AlwaysOff;
}

bool UIndianaGameUserSettings::GetPseudoGodMode() {
    return false;
}

EHUDWidgetVisibilityMode UIndianaGameUserSettings::GetPlayerStatusBarVisibility() const {
    return EHUDWidgetVisibilityMode::AlwaysOff;
}

bool UIndianaGameUserSettings::GetOffsetReticle() const {
    return false;
}

EOWNvidiaReflexMode UIndianaGameUserSettings::GetNvidiaReflexMode() const {
    return EOWNvidiaReflexMode::Off;
}

float UIndianaGameUserSettings::GetMusicSoundVolume() {
    return 0.0f;
}

float UIndianaGameUserSettings::GetMouseADSSensitivity() const {
    return 0.0f;
}

EMotionSicknessMode UIndianaGameUserSettings::GetMotionSicknessMode() const {
    return EMotionSicknessMode::Off;
}

float UIndianaGameUserSettings::GetMotionBlurScale() const {
    return 0.0f;
}

bool UIndianaGameUserSettings::GetMinimapRotationLock() const {
    return false;
}

float UIndianaGameUserSettings::GetMasterSoundVolume() {
    return 0.0f;
}

ELatencyReductionMethod UIndianaGameUserSettings::GetLatencyReductionMethod() const {
    return ELatencyReductionMethod::None;
}

ELanguageMode UIndianaGameUserSettings::GetLanguageMode() const {
    return ELanguageMode::English;
}

bool UIndianaGameUserSettings::GetIsFreshUserSettings() const {
    return false;
}

bool UIndianaGameUserSettings::GetIsFirstTimeFrontEndFlow() const {
    return false;
}

EControlInputPreference UIndianaGameUserSettings::GetInputPreferenceSprint() const {
    return EControlInputPreference::PressAndHold;
}

EControlInputPreference UIndianaGameUserSettings::GetInputPreferenceCrouch() const {
    return EControlInputPreference::PressAndHold;
}

EControlInputPreference UIndianaGameUserSettings::GetInputPreferenceADS() const {
    return EControlInputPreference::PressAndHold;
}

bool UIndianaGameUserSettings::GetInfiniteAmmo() {
    return false;
}

bool UIndianaGameUserSettings::GetHUDVisibility() const {
    return false;
}

float UIndianaGameUserSettings::GetHUDScaling() {
    return 0.0f;
}

float UIndianaGameUserSettings::GetHUDCommandsScaling() {
    return 0.0f;
}

float UIndianaGameUserSettings::GetHorizontalFOV() const {
    return 0.0f;
}

EHUDWidgetVisibilityMode UIndianaGameUserSettings::GetHeldWeaponDisplayTextVisibility() const {
    return EHUDWidgetVisibilityMode::AlwaysOff;
}

float UIndianaGameUserSettings::GetHDRUIContrast() const {
    return 0.0f;
}

float UIndianaGameUserSettings::GetHDRUIBrightness() const {
    return 0.0f;
}

float UIndianaGameUserSettings::GetHDRShadows() const {
    return 0.0f;
}

float UIndianaGameUserSettings::GetHDRMaxBrightness() const {
    return 0.0f;
}

float UIndianaGameUserSettings::GetHDRContrast() const {
    return 0.0f;
}

bool UIndianaGameUserSettings::GetHardwareRayTracing() const {
    return false;
}

int32 UIndianaGameUserSettings::GetGraphicsQuality() const {
    return 0;
}

bool UIndianaGameUserSettings::GetGodMode() {
    return false;
}

float UIndianaGameUserSettings::GetGammaLevel() const {
    return 0.0f;
}

float UIndianaGameUserSettings::GetFSR3Sharpness() const {
    return 0.0f;
}

EFSR3QualityMode UIndianaGameUserSettings::GetFSR3QualityMode() const {
    return EFSR3QualityMode::Native;
}

EFrameGenerationMethod UIndianaGameUserSettings::GetFrameGenerationMethod() const {
    return EFrameGenerationMethod::None;
}

EFPSLimit UIndianaGameUserSettings::GetFPSLimit() const {
    return EFPSLimit::Thirty;
}

EHUDWidgetVisibilityMode UIndianaGameUserSettings::GetEquipmentDisplayVisibility() const {
    return EHUDWidgetVisibilityMode::AlwaysOff;
}

float UIndianaGameUserSettings::GetEffectsSoundVolume() {
    return 0.0f;
}

EOWDLSSMode UIndianaGameUserSettings::GetDLSSQualityMode() const {
    return EOWDLSSMode::Off;
}

EOWDLSSFrameGenerationMode UIndianaGameUserSettings::GetDLSSFrameGenerationMode() const {
    return EOWDLSSFrameGenerationMode::Off;
}

float UIndianaGameUserSettings::GetDefaultVerticalFOV() const {
    return 0.0f;
}

float UIndianaGameUserSettings::GetDefaultHorizontalFOV() const {
    return 0.0f;
}

int32 UIndianaGameUserSettings::GetCrowdDensityLevel() const {
    return 0;
}

EHUDWidgetVisibilityMode UIndianaGameUserSettings::GetConversationSubtitleVisibility() const {
    return EHUDWidgetVisibilityMode::AlwaysOff;
}

bool UIndianaGameUserSettings::GetControllerYAxisInverted() {
    return false;
}

bool UIndianaGameUserSettings::GetControllerXAxisInverted() {
    return false;
}

float UIndianaGameUserSettings::GetControllerSensitivity() const {
    return 0.0f;
}

bool UIndianaGameUserSettings::GetControllerRumbleEnabled() {
    return false;
}

float UIndianaGameUserSettings::GetControllerRightOuterDeadZone() const {
    return 0.0f;
}

float UIndianaGameUserSettings::GetControllerRightInnerDeadZone() const {
    return 0.0f;
}

bool UIndianaGameUserSettings::GetControllerLightBarEnabled() {
    return false;
}

float UIndianaGameUserSettings::GetControllerLeftOuterDeadZone() const {
    return 0.0f;
}

float UIndianaGameUserSettings::GetControllerLeftInnerDeadZone() const {
    return 0.0f;
}

bool UIndianaGameUserSettings::GetControllerAutoSprintEnabled() {
    return false;
}

float UIndianaGameUserSettings::GetControllerADSSensitivity() const {
    return 0.0f;
}

bool UIndianaGameUserSettings::GetControllerAdaptiveTriggersEnabled() {
    return false;
}

EHUDWidgetVisibilityMode UIndianaGameUserSettings::GetCompanionOutlineVisibility() const {
    return EHUDWidgetVisibilityMode::AlwaysOff;
}

ECompanionHelmetVisibility UIndianaGameUserSettings::GetCompanionHelmetVisibility() const {
    return ECompanionHelmetVisibility::Default;
}

EHUDWidgetVisibilityMode UIndianaGameUserSettings::GetCompanionAbilityUIVisibility() const {
    return EHUDWidgetVisibilityMode::AlwaysOff;
}

bool UIndianaGameUserSettings::GetCinematicSubtitlesVisible() const {
    return false;
}

bool UIndianaGameUserSettings::GetCinematicKillCam() const {
    return false;
}

bool UIndianaGameUserSettings::GetChromaticAberration() const {
    return false;
}

bool UIndianaGameUserSettings::GetBarkSubtitlesVisible() const {
    return false;
}

TArray<FInputAxisKeyMapping> UIndianaGameUserSettings::GetAxisKeyBinds(FName AxisName, float Scale) {
    return TArray<FInputAxisKeyMapping>();
}

int32 UIndianaGameUserSettings::GetAntiAliasingMethod() const {
    return 0;
}

EReticleMode UIndianaGameUserSettings::GetAimingReticleMode() const {
    return EReticleMode::Default;
}

float UIndianaGameUserSettings::GetAimAssistSnappingStrength() const {
    return 0.0f;
}

float UIndianaGameUserSettings::GetAimAssistMagnetismStrength() const {
    return 0.0f;
}

float UIndianaGameUserSettings::GetAimAssistFrictionStrength() const {
    return 0.0f;
}

float UIndianaGameUserSettings::GetAimAssistAdhesionStrength() const {
    return 0.0f;
}

TArray<FInputActionKeyMapping> UIndianaGameUserSettings::GetActionKeyBinds(FName ActionName) {
    return TArray<FInputActionKeyMapping>();
}

EResolutionQualityPreset UIndianaGameUserSettings::Get3DResolutionPreset() const {
    return EResolutionQualityPreset::Low;
}

float UIndianaGameUserSettings::Get3DResolution() const {
    return 0.0f;
}

void UIndianaGameUserSettings::EnableVisLog(bool Value) {
}

bool UIndianaGameUserSettings::DoesConversationAdvanceNeedInput() const {
    return false;
}

void UIndianaGameUserSettings::ApplyUpscalingMethod() {
}

void UIndianaGameUserSettings::ApplyTSRScreenPercentage() {
}


