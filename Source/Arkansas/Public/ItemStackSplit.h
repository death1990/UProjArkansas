#pragma once
#include "CoreMinimal.h"
#include "ItemStack.h"
#include "ItemStackSplit.generated.h"

USTRUCT(BlueprintType)
struct FItemStackSplit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemStack ItemStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplitCount;
    
    ARKANSAS_API FItemStackSplit();
};

