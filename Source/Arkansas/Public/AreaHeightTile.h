#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
#include "AreaHeightTile.generated.h"

class UCollisionHeightmapData;

USTRUCT(BlueprintType)
struct FAreaHeightTile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox2D WorldArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCollisionHeightmapData> CollisionHeightmapData;
    
    ARKANSAS_API FAreaHeightTile();
};

