#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "ESpecialMovementEvent.h"
#include "SpecialMovementEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSpecialMovementEventDelegate, ESpecialMovementEvent, SpecialEvent, const FVector&, position, const FVector&, Normal, TEnumAsByte<EPhysicalSurface>, PhysMaterial);

