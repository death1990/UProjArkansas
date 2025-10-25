#pragma once
#include "CoreMinimal.h"
#include "AppearanceMatch.h"
#include "ModAppearance.generated.h"

class UModVisual;

USTRUCT(BlueprintType)
struct FModAppearance : public FAppearanceMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModVisual* ModVisual;
    
    ARKANSAS_API FModAppearance();
};

