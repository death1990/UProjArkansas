#pragma once
#include "CoreMinimal.h"
#include "DegradableItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "ArmorItemDefinition.generated.h"

class UArmorModArmoring;
class UArmorModDampening;
class UArmorModDecal;
class UArmorModDye;
class UArmorModMaterials;
class UArmorModResistance;
class UArmorModUtility;

USTRUCT(BlueprintType)
struct FArmorItemDefinition : public FDegradableItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArmorModArmoring> ArmoringModClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArmorModUtility> UtilityModClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArmorModResistance> ResistanceModClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArmorModDampening> DampeningModClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArmorModMaterials> MaterialsModClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArmorModDye> DyeModClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArmorModDecal> DecalModClass;
    
    ARKANSAS_API FArmorItemDefinition();
};

