#pragma once
#include "CoreMinimal.h"
#include "NewArmorModVisual.generated.h"

class UArmorSet;
class UModAppearances;

USTRUCT(BlueprintType)
struct FNewArmorModVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModAppearances* ModAppearances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAppliesToAllArmorSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UArmorSet>> ArmorSets;
    
    ARKANSAS_API FNewArmorModVisual();
};

