#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PointingParameters.h"
#include "PointingConfig.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UPointingConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPointingParameters> ConditionParameters;
    
    UPointingConfig();

};

