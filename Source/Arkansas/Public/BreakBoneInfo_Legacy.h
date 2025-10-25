#pragma once
#include "CoreMinimal.h"
#include "BreakBoneInfo_Legacy.generated.h"

USTRUCT(BlueprintType)
struct FBreakBoneInfo_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneBreakName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBroke;
    
    ARKANSAS_API FBreakBoneInfo_Legacy();
};

