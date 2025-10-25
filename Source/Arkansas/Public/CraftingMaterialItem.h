#pragma once
#include "CoreMinimal.h"
#include "EMaterialQuality.h"
#include "ResourceItem.h"
#include "CraftingMaterialItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UCraftingMaterialItem : public UResourceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialQuality Quality;
    
    UCraftingMaterialItem();

};

