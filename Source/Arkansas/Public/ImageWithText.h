#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ImageWithText.generated.h"

class UImage;
class UTextBlockBase;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UImageWithText : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* TextBlock;
    
public:
    UImageWithText();

};

