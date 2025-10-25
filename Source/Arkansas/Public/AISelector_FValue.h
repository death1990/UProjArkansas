#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISelector_FValue.generated.h"

class UAIFValue;

USTRUCT(BlueprintType)
struct FAISelector_FValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIFValue> AIFValue;
    
    ARKANSAS_API FAISelector_FValue();
};

