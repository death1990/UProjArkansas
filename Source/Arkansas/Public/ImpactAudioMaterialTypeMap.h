#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EAudioImpactType.h"
#include "ImpactAudioDamageTypeMap.h"
#include "ImpactAudioMaterialTypeMap.generated.h"

USTRUCT(BlueprintType)
struct FImpactAudioMaterialTypeMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActLike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioImpactType ActLikeImpactType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactAudioDamageTypeMap DefaultSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FImpactAudioDamageTypeMap> SurfaceTypeMap;
    
    ARKANSAS_API FImpactAudioMaterialTypeMap();
};

