#pragma once
#include "CoreMinimal.h"
#include "StatInstance.h"
#include "RpgStatCollection.generated.h"

class URpgStat;

USTRUCT(BlueprintType)
struct FRpgStatCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<URpgStat*, FStatInstance> StatMap;
    
public:
    ARKANSAS_API FRpgStatCollection();
};

