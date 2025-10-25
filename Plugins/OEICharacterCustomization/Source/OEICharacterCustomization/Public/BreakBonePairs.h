#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "BreakBonePairs.generated.h"

USTRUCT(BlueprintType)
struct OEICHARACTERCUSTOMIZATION_API FBreakBonePairs {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Target;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Source;
    
    FBreakBonePairs();
};

