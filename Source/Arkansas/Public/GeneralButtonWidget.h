#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "GeneralButtonWidget.generated.h"

class UButtonBase;
class UImage;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UGeneralButtonWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
public:
    UGeneralButtonWidget();

};

