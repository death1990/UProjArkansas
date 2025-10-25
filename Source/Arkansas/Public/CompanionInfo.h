#pragma once
#include "CoreMinimal.h"
#include "CompanionInfo.generated.h"

USTRUCT(BlueprintType)
struct FCompanionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DTBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DTHead;
    
    ARKANSAS_API FCompanionInfo();
};

