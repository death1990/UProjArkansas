#pragma once
#include "CoreMinimal.h"
#include "EAttribute.h"
#include "AttributesArray.generated.h"

USTRUCT(BlueprintType)
struct FAttributesArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAttribute> Attributes;
    
    ARKANSAS_API FAttributesArray();
};

