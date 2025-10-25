#pragma once
#include "CoreMinimal.h"
#include "StatModifierDescriptionBase.h"
#include "StatModifierDescription.generated.h"

USTRUCT(BlueprintType)
struct FStatModifierDescription : public FStatModifierDescriptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    ARKANSAS_API FStatModifierDescription();
};

