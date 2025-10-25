#pragma once
#include "CoreMinimal.h"
#include "LootDirectoryQualityEntryData.generated.h"

class ULootDirectoryLootList;

USTRUCT(BlueprintType)
struct FLootDirectoryQualityEntryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULootDirectoryLootList* Entry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    ARKANSAS_API FLootDirectoryQualityEntryData();
};

