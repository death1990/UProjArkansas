#pragma once
#include "CoreMinimal.h"
#include "LootEntryBase.h"
#include "StaticLootListEntry.generated.h"

class UStaticLootList;

UCLASS(Blueprintable, EditInlineNew)
class UStaticLootListEntry : public ULootEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticLootList* LootList;
    
    UStaticLootListEntry();

};

