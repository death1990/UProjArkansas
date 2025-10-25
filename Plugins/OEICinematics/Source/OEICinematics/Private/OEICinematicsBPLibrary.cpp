#include "OEICinematicsBPLibrary.h"

UOEICinematicsBPLibrary::UOEICinematicsBPLibrary() {
}

void UOEICinematicsBPLibrary::SetMovieSceneSectionBlendMode(UMovieSceneSection* Section, EMovieSceneBlendType Type) {
}

void UOEICinematicsBPLibrary::SetBindingName(UMovieScene* MovieScene, FGuid BindingID, const FString& Name) {
}

void UOEICinematicsBPLibrary::SetBindingLabel(UMovieScene* MovieScene, FGuid BindingID, const FString& Name) {
}

FString UOEICinematicsBPLibrary::GetStringForCameraShot(ECameraShot Shot) {
    return TEXT("");
}

FString UOEICinematicsBPLibrary::GetStringForCameraPositionOffset(ECameraPositonOffset PositionOffset) {
    return TEXT("");
}

FString UOEICinematicsBPLibrary::GetStringForCameraPosition(ECameraPosition position) {
    return TEXT("");
}

FString UOEICinematicsBPLibrary::GetStringForCameraAngle(ECameraAngle CameraAngle) {
    return TEXT("");
}

FString UOEICinematicsBPLibrary::GetSequencesFolder() {
    return TEXT("");
}

FGuid UOEICinematicsBPLibrary::GetPlayerSpeakerGuid() {
    return FGuid{};
}

TArray<FString> UOEICinematicsBPLibrary::GetPackages() {
    return TArray<FString>();
}

FString UOEICinematicsBPLibrary::GetDefaultStagePath() {
    return TEXT("");
}

FString UOEICinematicsBPLibrary::GetDefaultFullBodyAnimationSlot() {
    return TEXT("");
}

TArray<FString> UOEICinematicsBPLibrary::GetCameraListFromSequence(UMovieScene* MovieScene) {
    return TArray<FString>();
}

FMovieSceneObjectBindingID UOEICinematicsBPLibrary::GetBindingIdByGuid(UMovieScene* MovieScene, FGuid Guid) {
    return FMovieSceneObjectBindingID{};
}

AStageCameraActor* UOEICinematicsBPLibrary::FindCinematicCamera(const FString& CameraString, const TArray<AStageCameraActor*>& Cameras, const TMap<FString, EMarkType>& SpeakerToMark) {
    return NULL;
}

bool UOEICinematicsBPLibrary::DoesMapExist(const FString& MapPath) {
    return false;
}

FString UOEICinematicsBPLibrary::CreateCameraBindingName(FGuid SpeakerID, ECameraShot CameraShot, ECameraPosition CameraPosition, ECameraPositonOffset CameraPositonOffset, ECameraAngle CameraAngle) {
    return TEXT("");
}

void UOEICinematicsBPLibrary::AddMergedSequenceMark(UMovieScene* MovieScene, int32 NodeID, float TimeSeconds) {
}


