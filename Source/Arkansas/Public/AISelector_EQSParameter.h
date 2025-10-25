#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISelector_EQSParameter.generated.h"

class UAIEQSParameter;

USTRUCT(BlueprintType)
struct FAISelector_EQSParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIEQSParameter> EQSParameter;
    
    ARKANSAS_API FAISelector_EQSParameter();
};

