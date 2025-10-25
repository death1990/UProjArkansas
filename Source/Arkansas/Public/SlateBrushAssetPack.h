#pragma once
#include "CoreMinimal.h"
#include "SlateBrushAssetPack.generated.h"

class USlateBrushAsset;

USTRUCT(BlueprintType)
struct FSlateBrushAssetPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* Hovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* Pressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* Focused;
    
    ARKANSAS_API FSlateBrushAssetPack();
};

