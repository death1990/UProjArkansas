#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BannedNameReaderData.generated.h"

USTRUCT(BlueprintType)
struct FBannedNameReaderData : public FTableRowBase {
    GENERATED_BODY()
public:
    ARKANSAS_API FBannedNameReaderData();
};

