#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SubtitleEntryWidget.generated.h"

class UOWRichTextBlockBase;

UCLASS(Blueprintable, EditInlineNew)
class USubtitleEntryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOWRichTextBlockBase* EntryTextBlock;
    
public:
    USubtitleEntryWidget();

};

