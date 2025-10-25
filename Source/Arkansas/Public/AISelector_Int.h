#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISelector_Int.generated.h"

class UAIInt;

USTRUCT(BlueprintType)
struct FAISelector_Int {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIInt> AIInt;
    
    ARKANSAS_API FAISelector_Int();
};

