#pragma once
#include "CoreMinimal.h"
#include "BaseItemDefinition.h"
#include "DegradableItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct FDegradableItemDefinition : public FBaseItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Condition;
    
    ARKANSAS_API FDegradableItemDefinition();
};

