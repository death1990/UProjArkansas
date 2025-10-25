#include "OEICinematicsSettings.h"

UOEICinematicsSettings::UOEICinematicsSettings() {
    this->DefaultFullBodyAnimationSlot = TEXT("Cin_Body");
    this->StageMarkRotationOffset = -90.00f;
    this->CameraShotPriority.AddDefaulted(4);
    this->CameraPositionPriority.AddDefaulted(5);
    this->CameraPositionOffsetPriority.AddDefaulted(3);
    this->CameraAnglePriority.AddDefaulted(3);
    this->bEnableCinematics = true;
    this->bConstrainStageCameraAspectRatio = true;
    this->bOverrideAspectRatioAxisConstraint = false;
    this->AxisConstraint = AspectRatio_MajorAxisFOV;
    this->DefaultCinematicNodeDuration = 10.00f;
    this->bEnableFadeInFadeOut = false;
    this->bSetCinematicIdleDuringFade = false;
    this->CinematicAsyncLoadPriority = 101;
    this->EmotionTrackGenerationMode = EEmotionTrackGenerationMode::None;
    this->bGenerateSubtitleTrack = false;
    this->bGenerateAnimationTrack = true;
    this->GenerationTimeStretchingMode = ESequenceStretchingMode::None;
    this->TransformTrackMode = EOEISequenceTransformTrackMode::None;
    this->GestureAnimationEmphasisMarkerName = TEXT("OEI.Gesture.Emphasis");
    this->DefaultCinematicTargetSocket = TEXT("ConvoCam_Target");
    this->DefaultCinematicMaxSmoothingWeight = 0.40f;
    this->CinematicTransitionInTime = 1.15f;
    this->CinematicTransitionOutTime = 1.00f;
    this->CinematicTransitionInterpolationExponent = 2.00f;
    this->bGenerateCameraCuts = false;
}


