#pragma once
#include "CoreMinimal.h"
#include "EBodyPartRegion.h"
#include "OnTargetAnalyzerBodyPartRegionChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTargetAnalyzerBodyPartRegionChanged, EBodyPartRegion, BodyPartRegion, const AActor*, TargetedActor);

