#pragma once
#include "CoreMinimal.h"
#include "TrackedCameraModifier.generated.h"

class UCameraModifier;

USTRUCT(BlueprintType)
struct FTrackedCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraModifier* ModifierInstance;
    
    ARKANSAS_API FTrackedCameraModifier();
};

