#pragma once
#include "CoreMinimal.h"
#include "DifficultyModifier.h"
#include "StatModifierDescriptionBase.h"
#include "DifficultyStatModifierDescription.generated.h"

USTRUCT(BlueprintType)
struct FDifficultyStatModifierDescription : public FStatModifierDescriptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyModifier DifficultyModifiers[5];
    
    ARKANSAS_API FDifficultyStatModifierDescription();
};

