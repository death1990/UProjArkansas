#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "RichTextStyleRowBase.generated.h"

USTRUCT(BlueprintType)
struct FRichTextStyleRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    ARKANSAS_API FRichTextStyleRowBase();
};

