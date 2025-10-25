#pragma once
#include "CoreMinimal.h"
#include "EArmorModSlot.h"
#include "ArmorVisualProperties.generated.h"

USTRUCT(BlueprintType)
struct FArmorVisualProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModdableByArmorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModdableByHelmet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModdableByModsDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EArmorModSlot, bool> ModdablePerMod;
    
    ARKANSAS_API FArmorVisualProperties();
};

