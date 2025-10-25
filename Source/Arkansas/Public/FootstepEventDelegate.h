#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EFootID.h"
#include "EFootstepType.h"
#include "FootstepEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FFootstepEvent, EFootID, FootID, EFootstepType, FootstepType, const FVector&, position, const FVector&, Normal, TEnumAsByte<EPhysicalSurface>, PhysMaterial);

