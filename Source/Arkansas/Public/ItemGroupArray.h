#pragma once
#include "CoreMinimal.h"
#include "ItemGroupDetail.h"
#include "ItemGroupArray.generated.h"

class UItem;

USTRUCT(BlueprintType)
struct FItemGroupArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UItem>> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemGroupDetail> ItemDetails;
    
    ARKANSAS_API FItemGroupArray();
};

