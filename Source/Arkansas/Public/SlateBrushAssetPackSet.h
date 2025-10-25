#pragma once
#include "CoreMinimal.h"
#include "SlateBrushAssetPack.h"
#include "SlateBrushAssetPackSet.generated.h"

class USlateBrushAsset;

USTRUCT(BlueprintType)
struct FSlateBrushAssetPackSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrushAssetPack NormalSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrushAssetPack SelectedSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* Disabled;
    
    ARKANSAS_API FSlateBrushAssetPackSet();
};

