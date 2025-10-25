#pragma once
#include "CoreMinimal.h"
#include "PhotoModeGeneralOptions.generated.h"

class UCurveFloat;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FPhotoModeGeneralOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseShutterEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultShutterMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DefaultShutterMaterialControl;
    
    OEIPHOTOMODE_API FPhotoModeGeneralOptions();
};

