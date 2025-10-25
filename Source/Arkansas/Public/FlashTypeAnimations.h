#pragma once
#include "CoreMinimal.h"
#include "EFlashAnimType.h"
#include "FlashTypeAnimations.generated.h"

USTRUCT(BlueprintType)
struct FFlashTypeAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlashAnimType FlashType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationName;
    
    ARKANSAS_API FFlashTypeAnimations();
};

