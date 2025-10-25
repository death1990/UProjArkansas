#pragma once
#include "CoreMinimal.h"
#include "ItemDefinitionVariant.h"
#include "DefaultItemStack.generated.h"

USTRUCT(BlueprintType)
struct FDefaultItemStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDefinitionVariant Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLootable;
    
    ARKANSAS_API FDefaultItemStack();
};

