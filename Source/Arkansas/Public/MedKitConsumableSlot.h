#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MedKitConsumableSlot.generated.h"

class UConsumableItem;

USTRUCT(BlueprintType)
struct FMedKitConsumableSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UConsumableItem> Consumable;
    
    ARKANSAS_API FMedKitConsumableSlot();
};

