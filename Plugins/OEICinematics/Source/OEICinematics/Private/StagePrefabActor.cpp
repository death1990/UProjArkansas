#include "StagePrefabActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent

AStagePrefabActor::AStagePrefabActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->PostProcessComponent = NULL;
    this->MovingStageCollision = NULL;
    this->bUseStageTransformOffset = false;
}

void AStagePrefabActor::SetTransformOverrideSocket(FName TransformOverrideSocketIn) {
}

void AStagePrefabActor::SetTransformOverrideActor(AActor* TransformOverrideActorIn) {
}

void AStagePrefabActor::SetStageMarksHidden(bool bNewHidden) {
}

void AStagePrefabActor::MoveActorToMark(EMarkType MarkType, AActor* Actor, FVector TranslationOffset) {
}

FName AStagePrefabActor::GetTransformOverrideSocket() {
    return NAME_None;
}

AActor* AStagePrefabActor::GetTransformOverrideActor() {
    return NULL;
}

TArray<AStageMarkActor*> AStagePrefabActor::GetMarks() {
    return TArray<AStageMarkActor*>();
}

EMarkType AStagePrefabActor::GetMarkAssignment(const AActor* Actor) const {
    return EMarkType::None;
}

TArray<AStageCameraActor*> AStagePrefabActor::GetCameras() {
    return TArray<AStageCameraActor*>();
}

AStageCameraActor* AStagePrefabActor::GetCamera(const FString& CameraName) {
    return NULL;
}

AStageMarkActor* AStagePrefabActor::FindMarkActor(EMarkType MarkType) {
    return NULL;
}

void AStagePrefabActor::EnableStage(bool bEnabled) {
}

void AStagePrefabActor::AttachToTransformOverride() {
}

void AStagePrefabActor::AssignSpeakerToMark(AActor* Actor, EMarkType MarkType) {
}


