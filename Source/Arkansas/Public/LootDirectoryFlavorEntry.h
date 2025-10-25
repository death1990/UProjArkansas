#pragma once
#include "CoreMinimal.h"
#include "ELootCacheQuality.h"
#include "LootDirectoryQualityEntryData.h"
#include "LootDirectoryFlavorEntry.generated.h"

USTRUCT(BlueprintType)
struct FLootDirectoryFlavorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELootCacheQuality, FLootDirectoryQualityEntryData> QualityEntries;
    
    ARKANSAS_API FLootDirectoryFlavorEntry();
};

