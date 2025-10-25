#pragma once
#include "CoreMinimal.h"
#include "NewArmorSetModVisual.generated.h"

class UArmorModItem;
class UModAppearances;

USTRUCT(BlueprintType)
struct FNewArmorSetModVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModAppearances* ModAppearances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UArmorModItem>> ArmorMods;
    
    ARKANSAS_API FNewArmorSetModVisual();
};

