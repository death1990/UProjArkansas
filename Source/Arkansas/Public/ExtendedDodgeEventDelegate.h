#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EDodgeDirection.h"
#include "ExtendedDodgeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FExtendedDodgeEvent, EDodgeDirection, DodgeDirection, const FVector&, position, const FVector&, Normal, TEnumAsByte<EPhysicalSurface>, PhysMaterial);

