#pragma once
#include "CoreMinimal.h"
#include "AttributeMetaData.generated.h"

USTRUCT(BlueprintType)
struct FAttributeMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PointedAttributeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPointIsUp;
    
    ARKANSAS_API FAttributeMetaData();
};

