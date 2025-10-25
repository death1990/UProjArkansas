#pragma once
#include "CoreMinimal.h"
#include "ArmorModItem.h"
#include "ArmorModMaterials.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UArmorModMaterials : public UArmorModItem {
    GENERATED_BODY()
public:
    UArmorModMaterials();

};

