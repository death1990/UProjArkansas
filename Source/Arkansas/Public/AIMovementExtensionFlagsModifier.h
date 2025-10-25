#pragma once
#include "CoreMinimal.h"
#include "AIMovementExtensionFlagsModifier.generated.h"

USTRUCT(BlueprintType)
struct FAIMovementExtensionFlagsModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtensionFlags;
    
    ARKANSAS_API FAIMovementExtensionFlagsModifier();
};

