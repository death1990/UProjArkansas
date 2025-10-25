#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "TilePrunedPolys.h"
#include "PrunedPolyData.generated.h"

USTRUCT(BlueprintType)
struct FPrunedPolyData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntPoint, FTilePrunedPolys> Tiles;
    
    ARKANSAS_API FPrunedPolyData();
};

