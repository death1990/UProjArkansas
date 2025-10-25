#pragma once
#include "CoreMinimal.h"
#include "MorphTargetParamMod.generated.h"

USTRUCT(BlueprintType)
struct FMorphTargetParamMod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MorphTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MorphTargetWeight;
    
    ARKANSAS_API FMorphTargetParamMod();
};

