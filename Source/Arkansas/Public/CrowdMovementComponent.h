#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimProxyRuntime -ObjectName=AnimationProxyCharacterMovement -FallbackName=AnimationProxyCharacterMovement
#include "OWRVOAvoidanceInterface.h"
#include "CrowdMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCrowdMovementComponent : public UAnimationProxyCharacterMovement, public IOWRVOAvoidanceInterface {
    GENERATED_BODY()
public:
    UCrowdMovementComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

