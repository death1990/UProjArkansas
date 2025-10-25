#pragma once
#include "CoreMinimal.h"
#include "LootEntryBase.h"
#include "LootListEntryLootList.generated.h"

class ULootDirectoryLootList;

UCLASS(Blueprintable, EditInlineNew)
class ULootListEntryLootList : public ULootEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULootDirectoryLootList* LootList;
    
    ULootListEntryLootList();

};

