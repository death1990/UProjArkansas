#pragma once
#include "CoreMinimal.h"
#include "AwarenessTalkImageSet.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAwarenessTalkImageSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NonDisguiseUnalerted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NonDisguiseAlerted;
    
    ARKANSAS_API FAwarenessTalkImageSet();
};

