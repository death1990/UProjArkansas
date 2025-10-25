#pragma once
#include "CoreMinimal.h"
#include "LootRowBase.h"
#include "LootRowTable.generated.h"

class ULootTableData;

UCLASS(Blueprintable, EditInlineNew)
class ULootRowTable : public ULootRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULootTableData* LootTable;
    
    ULootRowTable();

};

