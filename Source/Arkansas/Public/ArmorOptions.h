#pragma once
#include "CoreMinimal.h"
#include "ClipPreventData.h"
#include "ArmorOptions.generated.h"

class UArmorSet;

USTRUCT(BlueprintType)
struct FArmorOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UArmorSet>> ArmorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClipPreventData ClipPrevent;
    
    ARKANSAS_API FArmorOptions();
};

