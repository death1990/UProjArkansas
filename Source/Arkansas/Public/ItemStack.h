#pragma once
#include "CoreMinimal.h"
#include "ItemStack.generated.h"

class UItem;

USTRUCT(BlueprintType)
struct FItemStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLootable;
    
    ARKANSAS_API FItemStack();
};

