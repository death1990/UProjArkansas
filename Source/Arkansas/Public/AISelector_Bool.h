#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISelector_Bool.generated.h"

class UAIBool;

USTRUCT(BlueprintType)
struct FAISelector_Bool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIBool> AIBool;
    
    ARKANSAS_API FAISelector_Bool();
};

