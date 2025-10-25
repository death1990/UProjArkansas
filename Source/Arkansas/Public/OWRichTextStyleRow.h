#pragma once
#include "CoreMinimal.h"
#include "IndianaTextBlockStyle.h"
#include "RichTextStyleRowBase.h"
#include "OWRichTextStyleRow.generated.h"

USTRUCT(BlueprintType)
struct FOWRichTextStyleRow : public FRichTextStyleRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndianaTextBlockStyle TextStyle;
    
    ARKANSAS_API FOWRichTextStyleRow();
};

