#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorClass_BlueprintBase.h"
#include "WaypointFoundSignatureDelegate.h"
#include "AIBehaviorClass_CreatureRoam.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class ARKANSAS_API UAIBehaviorClass_CreatureRoam : public UAIBehaviorClass_BlueprintBase {
    GENERATED_BODY()
public:
    UAIBehaviorClass_CreatureRoam();

    UFUNCTION(BlueprintCallable)
    void FindRoamWaypoint(const UEnvQuery* QueryTemplate, float MinMoveDist, float MaxMoveDist, float GenerateRadius, FWaypointFoundSignature OnWaypointFound);
    
};

