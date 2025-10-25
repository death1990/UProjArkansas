#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "FootstepSurfaceMatch.generated.h"

USTRUCT(BlueprintType)
struct FFootstepSurfaceMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EPhysicalSurface>> SurfaceTypes;
    
    ARKANSAS_API FFootstepSurfaceMatch();
};

