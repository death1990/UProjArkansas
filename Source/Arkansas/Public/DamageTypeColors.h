#pragma once
#include "CoreMinimal.h"
#include "EIndianaUIColorType.h"
#include "DamageTypeColors.generated.h"

USTRUCT(BlueprintType)
struct FDamageTypeColors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIndianaUIColorType TextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIndianaUIColorType OutlineColor;
    
    ARKANSAS_API FDamageTypeColors();
};

