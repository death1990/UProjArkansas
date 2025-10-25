#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "AgeWrinkles.generated.h"

class UTexture;

UCLASS(Blueprintable)
class UAgeWrinkles : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* AgeWrinklesNormalMap;
    
    UAgeWrinkles();

};

