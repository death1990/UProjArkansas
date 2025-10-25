#pragma once
#include "CoreMinimal.h"
#include "DegradableItem.h"
#include "ArmorBase.generated.h"

class UMaterialInterface;
class UModAppearances;
class UStaticMesh;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UArmorBase : public UDegradableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> PickupMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> PickupMaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModAppearances* Dummy;
    
public:
    UArmorBase();

};

