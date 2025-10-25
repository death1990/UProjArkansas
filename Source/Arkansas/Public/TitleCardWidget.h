#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "TitleCardWidget.generated.h"

class UCanvasPanel;
class UTextBlockBase;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UTitleCardWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ContentCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ContentContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* PrimaryTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* SecondaryTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* TertiaryTextBlock;
    
public:
    UTitleCardWidget();

};

