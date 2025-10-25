#pragma once
#include "CoreMinimal.h"
#include "ItemDefinitionVariant.h"
#include "LootEntryBase.h"
#include "LootListEntryItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API ULootListEntryItem : public ULootEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDefinitionVariant Item;
    
    ULootListEntryItem();

};

