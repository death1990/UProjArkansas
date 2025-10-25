#pragma once
#include "CoreMinimal.h"
#include "DodgeInputRange.generated.h"

USTRUCT(BlueprintType)
struct FDodgeInputRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalWeight;
    
    ARKANSAS_API FDodgeInputRange();
};

