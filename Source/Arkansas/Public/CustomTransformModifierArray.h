#pragma once
#include "CoreMinimal.h"
#include "CameraTransformModifier.h"
#include "CustomTransformModifierArray.generated.h"

USTRUCT(BlueprintType)
struct FCustomTransformModifierArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraTransformModifier> Modifiers;
    
    ARKANSAS_API FCustomTransformModifierArray();
};

