#pragma once
#include "CoreMinimal.h"
#include "MapFloorData.h"
#include "MapFloorGroup.generated.h"

USTRUCT(BlueprintType)
struct FMapFloorGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapFloorData> Floors;
    
    ARKANSAS_API FMapFloorGroup();
};

