#pragma once
#include "CoreMinimal.h"
#include "EArmorModSlot.h"
#include "Templates/SubclassOf.h"
#include "ArmorSetModSlot.generated.h"

class UArmorModItem;

USTRUCT(BlueprintType)
struct FArmorSetModSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmorModSlot ModSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModdable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArmorModItem> CurrentModClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UArmorModItem* EquippedMod;
    
    ARKANSAS_API FArmorSetModSlot();
};

