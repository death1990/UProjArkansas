#pragma once
#include "CoreMinimal.h"
#include "PrunedPoly.h"
#include "TilePrunedPolys.generated.h"

USTRUCT(BlueprintType)
struct FTilePrunedPolys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrunedPoly> PrunedPolys;
    
    ARKANSAS_API FTilePrunedPolys();
};

