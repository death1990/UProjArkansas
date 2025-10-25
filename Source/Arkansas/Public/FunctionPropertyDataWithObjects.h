#pragma once
#include "CoreMinimal.h"
#include "FunctionParameterWithObjects.h"
#include "FunctionPropertyDataWithObjects.generated.h"

USTRUCT(BlueprintType)
struct ARKANSAS_API FFunctionPropertyDataWithObjects {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFunctionParameterWithObjects> Parameters;
    
public:
    FFunctionPropertyDataWithObjects();
};

