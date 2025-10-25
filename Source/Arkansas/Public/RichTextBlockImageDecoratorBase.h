#pragma once
#include "CoreMinimal.h"
#include "RichTextBlockDecoratorBase.h"
#include "RichTextBlockImageDecoratorBase.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class URichTextBlockImageDecoratorBase : public URichTextBlockDecoratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ImageSet;
    
public:
    URichTextBlockImageDecoratorBase();

};

