#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DistractionAnimationSet.h"
#include "DistractionAnimationSetTypeOverride.h"
#include "EnvironmentalDistractionAnimations.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UEnvironmentalDistractionAnimations : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistractionAnimationSet Defaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDistractionAnimationSetTypeOverride> TypeOverrides;
    
public:
    UEnvironmentalDistractionAnimations();

};

