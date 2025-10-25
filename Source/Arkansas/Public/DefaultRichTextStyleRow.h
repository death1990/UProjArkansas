#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TextBlockStyle -FallbackName=TextBlockStyle
#include "RichTextStyleRowBase.h"
#include "DefaultRichTextStyleRow.generated.h"

USTRUCT(BlueprintType)
struct FDefaultRichTextStyleRow : public FRichTextStyleRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TextStyle;
    
    ARKANSAS_API FDefaultRichTextStyleRow();
};

