#pragma once
#include "CoreMinimal.h"
#include "ItemDefinitionVariant.h"
#include "LootRowBase.h"
#include "LootRowItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULootRowItem : public ULootRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDefinitionVariant Item;
    
    ULootRowItem();

};

