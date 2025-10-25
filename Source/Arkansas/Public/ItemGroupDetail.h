#pragma once
#include "CoreMinimal.h"
#include "DefaultItemStack.h"
#include "ENameDisplayType.h"
#include "ItemGroupDetail.generated.h"

USTRUCT(BlueprintType)
struct FItemGroupDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefaultItemStack DefaultItemStack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENameDisplayType NameVisibility;
    
    ARKANSAS_API FItemGroupDetail();
};

