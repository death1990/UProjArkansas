#include "StageMarkActor.h"
#include "StageMarkComponent.h"

AStageMarkActor::AStageMarkActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bFindCameraComponentWhenViewTarget = false;
    this->RootComponent = CreateDefaultSubobject<UStageMarkComponent>(TEXT("Root"));
    this->OwningStage = NULL;
    this->MarkType = EMarkType::None;
    this->MarkPriority = 100;
    this->AlignmentYawOffset = 0.00f;
    this->bUseTeleportLocation = false;
    this->TeleportPathToleranceRatio = 2.00f;
    this->bHasValidAlignment = false;
    this->bHasValidTeleportLocation = false;
    this->TargetSettings = NULL;
    this->bOverrideHorizontalAlignment = false;
    this->bOverrideVerticalAlignment = false;
}


