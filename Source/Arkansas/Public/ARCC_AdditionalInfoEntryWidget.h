#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ARCC_AdditionalInfoEntryWidget.generated.h"

class UButtonBase;
class UImage;
class URichTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UARCC_AdditionalInfoEntryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlockBase* MessageTextBlock;
    
public:
    UARCC_AdditionalInfoEntryWidget();

};

