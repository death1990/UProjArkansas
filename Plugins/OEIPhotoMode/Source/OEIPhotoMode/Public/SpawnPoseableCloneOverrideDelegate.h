#pragma once
#include "CoreMinimal.h"
#include "SpawnPoseableCloneOverrideDelegate.generated.h"

class APawn;
class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnPoseableCloneOverride, APlayerController*, ActivatingController, APawn*, OriginalPawn);

