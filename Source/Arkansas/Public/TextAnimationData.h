#pragma once
#include "CoreMinimal.h"
#include "TextAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FTextAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharactersPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInstant;
    
    ARKANSAS_API FTextAnimationData();
};

